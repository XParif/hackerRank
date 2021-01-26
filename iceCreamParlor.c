#include <stdio.h>

int main(){
    int t, m, n, z;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d", &m, &n);
        int arr[n];
        for(int j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }
        z = 0;
        for(int k=0; k<n && z==0; k++){
            for(int l = k+1; l<n && z==0; l++){
                if(arr[k]+arr[l]==m){
                    printf("%d %d \n", k+1, l+1);
                    z = 1;
                }
            }
        }
    }
    return 0;
}