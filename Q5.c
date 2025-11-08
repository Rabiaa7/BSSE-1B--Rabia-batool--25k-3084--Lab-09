#include <stdio.h>
float func(float food,int people){
    float tax=0;
    float tip=0;
    float total=0,service=0;
    printf("8%% tax applies on food cost \n");
    tax= food*0.08;
    if(food>50){
        printf("tip applied 15%% \n");
        tip = food*0.15;
    }else{
        printf("tip applied 10%% \n");
        tip = food*0.10;
    }
    if(people>6){
        printf(" 5%% service charge applied! \n");
        service=food*0.05;
    }
    total=food+tax+tip+service;
    return total;
}
int main() {
    float food;
    float total=0;
    int people;
    printf("enter number of people: ");
    scanf("%d",&people);
    printf("\nenter food cost: ");
    scanf("%f",&food);
    total=func(food,people);
    printf("\n total cost is: %.2f",total);
    return 0;
}