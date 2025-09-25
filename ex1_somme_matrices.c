
#include <stdio.h>

void sommeMatrices() {
    int n, m;
    printf("Donner le nombre de lignes: ");
    scanf("%d", &n);
    printf("Donner le nombre de colonnes: ");
    scanf("%d", &m);

    int A[n][m], B[n][m], C[n][m];

    printf("Entrer les elements de la matrice A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&A[i][j]);

    printf("Entrer les elements de la matrice B:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            C[i][j]=A[i][j]+B[i][j];

    printf("Somme des matrices:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
}

int main(){ sommeMatrices(); return 0; }
