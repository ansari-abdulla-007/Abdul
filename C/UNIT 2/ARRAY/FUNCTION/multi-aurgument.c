#include <stdio.h>
void myfunction(char name[],int age){
    printf("Hello %s. you are %i years old.\n",name,age);
}
int main(){
    myfunction("Abduu",18);
    myfunction("Sahil",18);
    myfunction("Jimi",18);

    return 0;
}