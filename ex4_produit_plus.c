
#include <stdio.h>

int produitPlus(int a, int b){
    int res=0;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            res+=1;
        }
    }
    return res;
}

void produitPlusTest() {
    int a,b;
    printf("Entrer a et b (>0): ");
    scanf("%d %d",&a,&b);
    printf("%d × %d = %d\n",a,b,produitPlus(a,b));
}

int main(){ produitPlusTest(); return 0; }
