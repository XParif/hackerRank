#include <stdio.h>

int main(){
    int n, k, i, j, p, count=0;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(p=0; p<n; p++){
        scanf("%d", &arr[p]);
    }
    for(i=0; i<n; i++){
        for(j= i+1; j<n; j++){
            if(i<j && (arr[i]+arr[j])%k==0){
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}