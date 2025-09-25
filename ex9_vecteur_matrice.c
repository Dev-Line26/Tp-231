
#include <stdio.h>

void vecteurMatrice() {
    int n,m;
    printf("Donner la taille du vecteur: ");
    scanf("%d",&n);
    printf("Donner le nombre de colonnes de la matrice: ");
    scanf("%d",&m);

    int V[n], M[n][m], R[m];

    printf("Entrer le vecteur:\n");
    for(int i=0;i<n;i++) scanf("%d",&V[i]);

    printf("Entrer la matrice:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&M[i][j]);

    for(int j=0;j<m;j++){
        R[j]=0;
        for(int i=0;i<n;i++)
            R[j]+=V[i]*M[i][j];
    }

    printf("Resultat vecteur × matrice:\n");
    for(int j=0;j<m;j++) printf("%d ",R[j]);
    printf("\n");
}

int main(){ vecteurMatrice(); return 0; }
