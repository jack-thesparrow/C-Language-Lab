#include <dialog.h>
#include <string.h>
#include <stdlib.h>

int main(){
    dialog_state.output = stdout;
    init_dialog(stdin, stdout);

    DIALOG_LISTITEM openChoices[] = {
        {"r", "Read From A File", 0},
        {"w", "Write To A File (truncates the existing data!)", 0}
    };

    while (1) {
        int openUserChoice = 0;
        dialog_vars.cancel_label = "Exit";
	int openChoice = dlg_menu(
            "Exp 34: Read and Write from a file!",
            "What would you like to choose?",
            0, 0, 0,
            2,
            openChoices,
            &openUserChoice,
            NULL
        );

        if (openChoice != DLG_EXIT_OK){
            break; // Exit the loop if user presses ESC or cancels
        }

        const char *userPick = openChoices[openUserChoice].name;

        if (strcmp(userPick, "r") == 0){
            FILE *fptr = fopen("file.txt", "r");
            if (fptr == NULL){
                dialog_msgbox("Error", "Unable to open file.txt", 0, 0, TRUE);
            } else {
                char buffer[1024] = {0};
                fread(buffer, 1, sizeof(buffer) - 1, fptr);
                fclose(fptr);
                dialog_msgbox("File Contents of file.txt", buffer, 0, 0, TRUE);
            }
        } else if (strcmp(userPick, "w") == 0){
            int resultWrite = dialog_inputbox(
                "Writing to file.txt",
                "Enter something to write",
                0, 0,
                "", FALSE
            );

            if (resultWrite == DLG_EXIT_OK && dialog_vars.input_result != NULL){
                const char *userStrInput = dialog_vars.input_result;
                FILE *fptr = fopen("file.txt", "w");
                if (fptr == NULL){
                    dialog_msgbox("Error", "Unable to open file.txt", 0, 0, TRUE);
                } else {
                    fputs(userStrInput, fptr);
                    fclose(fptr);
                }
            }
        }
    }

    end_dialog();
    system("clear");
    return 0;
}

