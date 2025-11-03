#include<stdio.h>
int marks() {
    int mark[3];
    int sum=0;
    float average=0;
    int fail_subject=0;
    for(int i=0;i<3;i++) {
        printf("Enter Marks (0-100) for %d subject: ",i+1);
        scanf("%d",&mark[i]);

        sum=sum+mark[i];
        if(mark[i] < 40) {
            fail_subject = 1;
        }
    }
    average=sum/3;

     if(average>=50 && fail_subject==0) {
         printf("Pass \n");
     }if (average < 50 ) {
         printf("Fail- average must be 50 or higher. \n");
     }else if (fail_subject==1){
         printf("Fail- No single subject can be below 40. \n");
     }

  return average;
}
int main() {
    float average=0;

    average=marks();
    printf("average = %.2f",average);
    return 0;
}