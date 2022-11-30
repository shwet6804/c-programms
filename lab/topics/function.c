#include<stdio.h>
 void namaste();
 void bonjour();
 int main()
 {
    printf("enter i for indian & f for french\n");
    char ch;
    scanf("%c",&ch);
    if (ch == 'i')
    {
        namaste();
    }
    else {
        bonjour();
    }
    

    return 0;
 }
 void namaste(){
    printf("namaste\n");
 }
 void bonjour(){
    printf("bonjour\n");
 }