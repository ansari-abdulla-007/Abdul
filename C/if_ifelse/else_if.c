#include <stdio.h>
int main() {
    int marks = 75;
    if(marks >= 90){
        printf("Grade: A\n");
    } else if(marks >= 80){
        printf("Grade: B\n");
    } else if(marks >= 60){
        printf("Grade: C\n");
    } else {
        printf("Fail\n");
    }
}