#include <stdio.h>
int main() {
    int a = 100, b = 200, c = 300;
    int *p1 = &a, *p2 = &b, *p3 = &c;

    int *temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

    *p1 = *p1 + 50;
    *p2 = *p2 - 70;
    *p3 = *p3 * 2;

    p1 = &a;
    p2 = &b;
    p3 = &c;


    *p1 = *p1 + *p2;
    *p2 = *p3 - 30;
    *p3 = *p1 / 5;

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}