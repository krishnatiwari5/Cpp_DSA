#include<stdio.h>


void main() {
int i;
printf("Enter the Number :- ");
scanf("%d", &i);
printf("Numbers\tSquares\tCubes\n");
for(int j=1; j<=i; j++) {
   // printf("Numbers");
   printf("%d", j);
   // printf("Square");
   printf("\t%d", j*j);
   // printf("Cubes");
   printf("\t%d", j*j*j);
printf("\n");
}

}
