#include <stdio.h>
int main(){
int   a, b, c, d;
printf("Enter 4 numbers for the matrix:\n");

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
scanf("%d", &d);

printf("\nMatrix is:\n");
printf("%d %d\n", a, b);
printf("%d %d\n",c, d);

return 0;
}