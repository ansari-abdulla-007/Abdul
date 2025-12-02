#include <stdio.h>
void myfunction(char name[]){
    printf("Hello %s\n",name);
}
int main(){
    myfunction("Abduuu!");
    myfunction("Sahil!");
    myfunction("Jimi!");

    return 0;
}