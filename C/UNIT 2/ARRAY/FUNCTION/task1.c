// single parameter function..(print fruits name).
#include <stdio.h>
void myfunction(char fruits[]){
    printf("These are %s\n",fruits);
}
int main(){
    myfunction("Mango");
    myfunction("Apple");
    myfunction("Banana");
    myfunction("Grappes");
    myfunction("Kiwi");

    return 0;
}