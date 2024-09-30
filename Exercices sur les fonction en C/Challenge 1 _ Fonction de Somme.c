#include <stdio.h>
#include <stdlib.h>


   int a,b;

   void entrer(){

        printf("veuillez entrer le nbr 1: ");
        scanf("%d",&a);

        printf("veuillez entrer le nbr 2: ");
        scanf("%d",&b);
 }

   int somme(){

    int s;

       s= a + b;


       return s;
   }
   int main(){

    int s;

     entrer();


    s=somme(a,b);
    printf("%d + %d = %d",a,b,s);


    return 0;
}
