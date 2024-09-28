#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,f,s;
    printf("Veuillez enrer le nombre d'element du tableau : ");
    scanf("%d",&n);
    int t[n];


       for (i=0;i<n;i++){
        printf("Veuillez saisir ces elements %d:  ",i+1);
        scanf("%d",&t[i]);
       }
       printf("Veuillez saisir  le facteur de multiplication:  ");
       scanf("%d",&f);

        for (i=0;i<n;i++){
        s=f*t[i];
        printf(" %d ",s);
        }








    return 0;
}
