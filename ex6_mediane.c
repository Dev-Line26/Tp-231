
#include <stdio.h>

void triInsertion(int T[], int n){
    for(int i=1;i<n;i++){
        int cle=T[i];
        int j=i-1;
        while(j>=0 && T[j]>cle){
            T[j+1]=T[j];
            j--;
        }
        T[j+1]=cle;
    }
}

void mediane() {
    int n;
    printf("Taille du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("Entrer les elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&T[i]);

    triInsertion(T,n);

    if(n%2==1)
        printf("Mediane = %d\n",T[n/2]);
    else
        printf("Mediane = %.2f\n",(T[n/2-1]+T[n/2])/2.0);
}

int main(){ mediane(); return 0; }
