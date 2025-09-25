
#include <stdio.h>

void testTrie() {
    int n, ok=1;
    printf("Taille du tableau: ");
    scanf("%d",&n);
    int T[n];
    printf("Entrer les elements:\n");
    for(int i=0;i<n;i++) scanf("%d",&T[i]);

    for(int i=0;i<n-1;i++){
        if(T[i]>T[i+1]){
            ok=0; break;
        }
    }
    if(ok) printf("Tableau trie en ordre croissant.\n");
    else printf("Tableau non trie.\n");
}

int main(){ testTrie(); return 0; }
