
#include <stdio.h>

void produitMatrices() {
    int n,m,p;
    printf("Donner le nombre de lignes de A: ");
    scanf("%d",&n);
    printf("Donner le nombre de colonnes de A (= lignes de B): ");
    scanf("%d",&m);
    printf("Donner le nombre de colonnes de B: ");
    scanf("%d",&p);

    int A[n][m], B[m][p], C[n][p];

    printf("Entrer les elements de A:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&A[i][j]);

    printf("Entrer les elements de B:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<p;j++)
            scanf("%d",&B[i][j]);

    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++){
            C[i][j]=0;
            for(int k=0;k<m;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }

    printf("Produit des matrices:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
}

int main(){ produitMatrices(); return 0; }
