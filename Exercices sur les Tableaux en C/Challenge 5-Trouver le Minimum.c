#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x,y;
    printf("Veuillez enrer le nombre d'element du tableau : ");
    scanf("%d",&n);
    int t[n];


       for (i=0;i<n;i++){
        printf("Veuillez saisir ces elements %d:  ",i+1);
        scanf("%d",&t[i]);
       }
 x=t[0];
        for (i=0;i<n;i++)
          if (x>t[i]){
            x=t[i];

          }
          printf("le plus grand element dans le tableau est : %d",x);










    return 0;
}
