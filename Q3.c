#include<stdio.h>
int home() {
    int code=0;
    int celsius;
    printf("Enter temperature in celsius: ");
    scanf("%d",&celsius);

    if (celsius > 35) {
        printf("Heat alert! \n");
        code=1;
    }else if (celsius < 10) {
        printf("Cold alert! \n");
        code=2;
    }else if (celsius >= 15 && celsius <= 25) {
        printf("Comfort Zone! \n");
        code=3;
    }else {
        printf("Normal conditions \n");
        code=4;
    }
    return code;
}
int main() {
    int alert_code;

   alert_code= home();
    printf("alert code: %d \n",alert_code);
    return 0;
}