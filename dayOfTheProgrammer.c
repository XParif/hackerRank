#include <stdio.h>

int main(){
    int y, m=1, day=256, i=1;

    scanf("%d", &y);
    if(y==1918){
        day += 13;
    }    

    while(day>31){
        if(i==2){
            if(y<1918 && y%4==0){
                day-= 29;
            }
            else if(y%400==0 || (y%4==0 && y%100!=0)){
                day -= 29;
            }
            else{
                day -= 28;
            }
            m++;
            i++;
            continue;
        }
        if(i<=7){
            if(i%2==0){
                day -= 30;
            }
            else{
                day -= 31;
            }
            m++;
        }
        else if(i>=8){
            if(i%2==0){
                day -= 31;
            }
            else {
                day -= 30;
            }
            m++;
        }
        i++;
    }
    printf("%d.0%d.%d\n", day, m, y);
    return 0;
}