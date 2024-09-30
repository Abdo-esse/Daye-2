#include <stdio.h>
#include <stdlib.h>


   int a,b;//a est le 1er nbr ,et b le 2 eme nbr.

   void entrer(){

        printf("veuillez entrer le nbr 1: ");
        scanf("%d",&a);

        printf("veuillez entrer le nbr 2: ");
        scanf("%d",&b);
 }

   int maximume(){
    int max;

    if(a<b)
         max=b;
    else
        max=a;




       return max;
   }
   int main(){

     entrer();

    printf("le plus grand est%d",maximume());


    return 0;
}
