
#include <stdio.h>

void inverser() {
    int n;
    printf("Taille du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("Entrer les elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&T[i]);

    for(int i=0;i<n/2;i++){
        int tmp=T[i];
        T[i]=T[n-1-i];
        T[n-1-i]=tmp;
    }

    printf("Tableau inverse:\n");
    for(int i=0;i<n;i++) printf("%d ",T[i]);
    printf("\n");
}

int main(){ inverser(); return 0; }
