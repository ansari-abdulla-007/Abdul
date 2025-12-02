// prints "Hello world!" 5 time by using the function method.
#include <stdio.h>
void myfunction(char name[]){
    printf("Hello %s\n",name);
}
int main(){
    myfunction("World!");
    myfunction("World!");
    myfunction("World!");
    myfunction("World!");
    myfunction("World!");

    return 0;
}