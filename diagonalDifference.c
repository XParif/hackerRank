#include <stdio.h>

int main(){
    int n, leftToRight=0, rightToLeft=0, answer;
    scanf("%d", &n);
    int ar[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &ar[i][j]);
        }
    }
    int i=0, j=0;
    while(i<n){
        leftToRight += ar[i++][j++];
    }
    i=0;
    while(i<n){
        rightToLeft += ar[i++][--j];
    }
    if(rightToLeft>=leftToRight){
        answer = rightToLeft - leftToRight;
    }
    else{
        answer = leftToRight - rightToLeft;
    }
    printf("%d\n", answer);
    return 0;
}