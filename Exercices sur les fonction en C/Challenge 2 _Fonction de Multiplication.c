#include <stdio.h>
#include <stdlib.h>


   int a,b;//a est le 1er nbr ,et b le 2 eme nbr.

   void entrer(){

        printf("veuillez entrer le nbr 1: ");
        scanf("%d",&a);

        printf("veuillez entrer le nbr 2: ");
        scanf("%d",&b);
 }

   int produit(){

    int p;

       p= a * b;

       return p;
   }
   int main(){

     entrer();

    printf("%d + %d = %d",a,b,produit());


    return 0;
}
