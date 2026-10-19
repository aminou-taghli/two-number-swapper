#include <stdio.h>

int main() {
    int A, B, a;
    
    printf("enter value of A :");
    scanf("%d", &A);
    printf("enter value of B :");
    scanf("%d", &B);
    printf("\nBefore swapping: A = %d, B = %d\n", A, B);
    a=A;
    A=B;
    B=a;
    printf("After swapping: A = %d, B = %d\n", A, B);
    return 0;
}