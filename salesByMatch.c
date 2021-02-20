#include <stdio.h>

int main(){
    int n;
    int answer=0;
    scanf("%d", &n);
    int ar[n];
    int count[n];
    for(int i=0; i<n; i++){
        count[i] = 1;
    }
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }

    int k=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(ar[j]!=0 && ar[i]==ar[j]){
                count[i]++;
                ar[j] = 0;
            }
        }
        ar[i]=0;
    }


    for(int i=0; i<n; i++){
        if(count[i]>1){
            if(count[i]%2==0){
                answer += count[i]/2;
            }
            else{
                answer += (count[i]-1)/2;
            }
        }
    }
    printf("%d\n", answer);

    return 0;
}