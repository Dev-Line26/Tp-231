
#include <stdio.h>

void produitVectoriel() {
    int u[3], v[3], w[3];
    printf("Entrer U(x,y,z): ");
    scanf("%d %d %d",&u[0],&u[1],&u[2]);
    printf("Entrer V(x,y,z): ");
    scanf("%d %d %d",&v[0],&v[1],&v[2]);

    w[0]=u[1]*v[2]-u[2]*v[1];
    w[1]=u[2]*v[0]-u[0]*v[2];
    w[2]=u[0]*v[1]-u[1]*v[0];

    printf("U × V = (%d, %d, %d)\n",w[0],w[1],w[2]);
}

int main(){ produitVectoriel(); return 0; }
