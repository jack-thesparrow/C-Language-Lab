#include <stdio.h>

int main(){
  int aReal;
  int aImag;
  int bReal;
  int bImag;
  char iota = 'i';
  printf("Addition of two complex numbers!\n");
  printf("Enter the first complex number: \n");
  if (scanf("%d + %d%c",&aReal,&aImag,&iota)!=3){
    printf("Error! Enter a valid complex number!\n");
    return 1;
  }
  printf("Enter the second complex number: \n");
  if (scanf("%d + %d%c",&bReal,&bImag,&iota)!=3){
    printf("Error! Enter a valid complex number!\n");
    return 1;
  }
  printf("Sum of the two complex number: %d + %d%c\n",aReal+bReal,aImag+bImag,iota);
  return 0;
}
