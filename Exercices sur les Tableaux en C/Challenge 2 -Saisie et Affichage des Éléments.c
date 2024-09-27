#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Veuillez enrer le nombre d'element du tableau : ");
    scanf("%d",&n);
    int t[n];


       for (i=0;i<n;i++){
        printf("Veuillez saisir ces elements %d:  ",i+1);
        scanf("%d",&t[i]);
       }
        for (i=0;i<n;i++)
        printf("%d ",t[i]);









    return 0;
}
