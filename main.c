#include <stdio.h>
//
// Created by spiderasasen on 2/17/26.
//
int main() {
    //numbwer that will be saved
    int aws = 0;

    //asking the user to do a function
    char function[4][3] = {"add", "sub", "mul", "div"};

    for (int i = 0; i < 4; i++) {
        printf("%d: %s \n", i + 1, function[i]);
    }

    //asking the user what operation would they like to do
    int choice;
    printf("Please enter a number: \n");
    scanf("%d", &choice);

    //getting the numbers from the user
    int a = getNumber();
    int b = getNumber();
    printf("The numbers are: %d and %d \n", a, b);

    //checking what choce the user wanted
    switch (choice) {
        case 1:
            printf("adding");
            break;
        case 2:
            printf("subtracting");
            break;
        case 3:
            printf("multiplying");
            break;
        case 4:
            printf("dividing");
            break;
        default:
            printf("Please enter a valid choice. \n");
    }

    return 0;
}

//making simple components

//getting the a numbers
int getNumber() {
    int num = 0;
    printf("Please enter a number: \n");
    scanf("%d", &num);
    return num;
}

//addition
int add(int a, int b) {
    return a + b;
}

//subtraction
int sub(int a, int b) {
    return a - b;
}

//multiplication
int mul(int a, int b) {
    return a * b;
}

//division
int div(int a, int b) {
    return a / b;
}