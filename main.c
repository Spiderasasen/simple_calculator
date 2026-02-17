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

    //reading the input and getting the right choice
    printf("%d", choice);

    return 0;
}

//making simple components

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