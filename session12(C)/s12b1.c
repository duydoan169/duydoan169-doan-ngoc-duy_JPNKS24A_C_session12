#include<stdio.h>
int printArr();
int main(){
    int sum;
    sum=printArr();
    printf("%d", sum);
    return 0;
}
int printArr(){
    int a, b, sum;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    sum=a+b;
    return sum;
}