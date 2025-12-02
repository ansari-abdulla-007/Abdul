// multiple aurguments task....!
#include <stdio.h>
void myfunction(char name[],int age){
    printf("Hello %s.You are %i years old.\n",name,age);
}
int main(){
    myfunction("Abduu",18);
    myfunction("Sahil",19);
    myfunction("Jimi",20);

    return 0;
}