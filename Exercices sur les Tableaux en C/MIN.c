#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int i,x,y;



       for (i=0;i<n;i++){
        printf("Veuillez saisir la temperature nombre %d:  ",i+1);
        scanf("%d",&t[i]);
       }
 x=t[0];
        for (i=0;i<n;i++)
          if (x<t[i]){
            x=t[i];

          }
          printf("le plus haute temperature est : %d",x);










    return 0;
}
