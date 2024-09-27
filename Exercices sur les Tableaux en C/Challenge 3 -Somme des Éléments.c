#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,x;
    printf("Veuillez enrer le nombre d'element du tableau : ");
    scanf("%d",&n);
    int t[n];


       for (i=0;i<n;i++){
        printf("Veuillez saisir ces elements %d:  ",i+1);
        scanf("%d",&t[i]);
       }
       x=0;
        for (i=0;i<n;i++)
            x=x+t[i];
        printf("  la somme totale = %d ",x);









    return 0;
}
