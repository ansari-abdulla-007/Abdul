#include <stdio.h>
int main(){
    int num = 5;

    if(num > 0){
        printf("%d is positvie\n", num);
    } else if(num < 0){
        printf("%d is negative num\n", num);
    } else{
        printf("%d is zero\n", num);
    }
    return 0;
}