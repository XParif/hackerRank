#include <stdio.h>

int main(){
    int n;
    float positive=0, zero=0, negetive=0;
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
        if(ar[i]==0){
            zero++;
        }
        else if(ar[i]>0){
            positive++;
        }
        else{
            negetive++;
        }
    }
    printf("%f\n%f\n%f\n", 1/(n/positive), 1/(n/negetive), 1/(n/zero));
    return 0;
}