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