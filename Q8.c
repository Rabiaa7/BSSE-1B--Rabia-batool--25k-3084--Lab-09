#include<stdio.h>
int main(){
    int arr[]={10, 20, 30, 40, 50, 60, 70};
    int* p=arr;

    printf("*p: %d",*p);           // 10
    printf("\n*(p+3): %d",*(p+3)); // 40
    printf("\np[2]: %d",p[2]);     // 30

    p = p + 4;
    printf("\nAfter p+4: %d",*p);  // 50
    printf("\np[1]: %d",p[1]);     // 60

    int* q = &arr[5];
    printf("\n*q: %d",*q);         // 60
    printf("\nq[-2]: %d",q[-2]);   // 40

    return 0;
}