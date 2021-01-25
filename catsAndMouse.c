#include <stdio.h>

int main(){
    int q, a, b, c, cat1, cat2, mouse;
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        scanf("%d %d %d", &a, &b, &c);
        while(1)
        {
            cat1 = 0, cat2 = 0, mouse = 0;
            if(a<c){
                a++;
            }
            else if(a>c){
                a--;
            }
            if(b<c){
                b++;
            }
            else if(b>c){
                b--;
            }
            if(a==c && b==c){
                cat1 = 1; 
                cat2 = 1;
                break;
            }
            else if(a==c){
                cat1 = 1;
                break;
            }
            else if(b==c){
                cat2 = 1;
                break;
            }
        }
        if(cat1 == 1 && cat2 == 1){
            printf("Mouse C\n");
        }
        else if(cat1 == 1){
            printf("Cat A\n");
        }
        else if(cat2 == 1){
            printf("Cat B\n");
        }
    }
    return 0;
}