#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long int ar[n];
    long int sum=0;
    for(int i=0; i<n; i++){
        scanf("%ld", &ar[i]);
        sum += ar[i];
    }
    printf("%ld\n", sum);
    return 0;
}