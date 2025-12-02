#include <stdio.h>

int main(){
    int x = 5;
        x += 3;
    int y = 6;
    y *= 9;
    float z = 3;
    z /= 2;
    int w = 5;
    w %= 3;
    int c = 4;
    c -= 2;
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%f\n", z);
    printf("%d\n", w);
    printf("%d\n", c); 
    return 0;
}