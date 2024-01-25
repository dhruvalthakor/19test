#include <stdio.h>
#include <string.h>

int main() {
// -------Q1-------
 char str[]="rahul";
  char str1[]="mohan";

  if (strcmp(str,str1)!= 0){
      printf(" %s and %s are not the same.\n", str, str1);
    }



// -------Q2-------
    char str7[100]="zabcxy";
   for(int i=5; i>=0; i--){
       printf("%c\n",str7[i]);
   }
// -------Q3-------
     char str3[100]="dhruval";
    char str5[100]="thakor";
    printf("%s\n",strcat(str3,str5));

//-------q4---------
     char str4[100];
    printf("Enter Your Name ");
    scanf("%s",&str4);
    for(int i=0; str4[i]>0; i++){
        printf("%c\n",str4[i]);
    }


    return 0;
}