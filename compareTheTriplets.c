#include <stdio.h>

int main(){
    int a[3], b[3];
    int alice=0, bob=0;
    for(int i=0; i<3; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<3; i++){
        scanf("%d", &b[i]);
    }
    for(int i=0; i<3; i++){
        if(a[i]!=b[i]){
            if(a[i]>b[i]){
                alice++;
            }
            else{
                bob++;
            }
        }
    }
    printf("%d %d\n", alice, bob);
    return 0;
}