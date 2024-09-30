#include <stdio.h>
#include <stdlib.h>

 int a,b;//a est le 1er nbr ,et b le 2 eme nbr.

   void entrer(){

        printf("veuillez entrer le nbr 1: ");
        scanf("%d",&a);

        printf("veuillez entrer le nbr 2: ");
        scanf("%d",&b);
 }

   int minimume(){
    int min;

    if(a>b)
         min=b;
    else
        min=a;




       return min;
   }
   int main(){

     entrer();

    printf("le plus petit est %d",minimume());


    return 0;
}
