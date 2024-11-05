#include<stdio.h>
int main(){
    int order;
    printf("welcome to the cafe\n");
    printf("1. PIZZA-₹200 \n");
    printf("2. BURGER-₹150 \n");
    printf("3. pasta-₹100 \n");
    printf("4. salad-₹100 \n");
    
    printf("please enter your order:");
    scanf("%d",&order);

    switch(order){
        case 1:
        printf("your order is pizza");
        break;
        case 2:
        printf("your order is burger");
        break;
        case 3:
        printf("your order is pasta");
        break;
        case 4:
        printf("your order is salad");
        break;
        default:
        printf("please enter a valid input");
        break;
    }
        return 0;

}