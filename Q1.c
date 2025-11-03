#include<stdio.h>
void transactions(){
    char ch;
    int remaining,amount;
    int newlimit;
    int transaction=5000;
    printf("enter remaining transaction limit: \n");
    scanf("%d",&remaining);

    while (remaining > transaction|| remaining < 0) {
        printf("Invalid limit! Enter a value between 0 and 5000: ");
        scanf("%d", &remaining);
    }
    do{
        int approved=1;
        printf("enter transaction amount: \n");
        scanf("%d",&amount);

            if(amount<=remaining){
                newlimit=remaining-amount;
            }else if(amount>remaining){
                newlimit=remaining;
                approved=0;
            }

        if(approved){
            printf("transaction approved\n");
        }else{
            printf("transaction declined\n");
        }

        printf("Updated Remaining Limit: %d\n", newlimit);
        remaining=newlimit;
        printf("do u want to continue: (y/n)\n");
        scanf(" %c",&ch);


    } while( ch=='y'|| ch=='Y');

    return;
}
int main(){
    transactions();

    return 0;
}