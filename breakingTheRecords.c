#include <stdio.h>

int main(){
    int user;
    scanf("%d", &user);
    int arr[user];
    int min = 0;
    int max = 0;
    scanf("%d", &arr[0]);
    int minValue = arr[0];
    int maxValue = arr[0];
    for(int i=1; i<user; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>maxValue){
            maxValue = arr[i];
            max++;
        }
        else if(arr[i]<minValue){
            minValue = arr[i];
            min++;
        }
    }
    printf("%d %d\n", max, min);
    return 0;
}
