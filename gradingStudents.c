#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]<38){
            continue;
        }
        else if((arr[i]+1)%5==0){
            arr[i]+=1;
        }
        else if((arr[i]+2)%5==0){
            arr[i]+=2;
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}