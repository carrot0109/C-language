#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_func(int num1, int num2) {
    int add_res = 0;
    add_res = num1 + num2;
    return add_res;
}

int minus_func(int num1, int num2) {
    int min_res = 0;
    min_res = num1 - num2;
    return min_res;
}

int multi_func(int num1, int num2) {
    int mul_res = 0;
    for (int i = 0;i < num2;i++) {
        mul_res += num1;
    }

    return mul_res;
}

int share_func(int num1, int num2) {
    int sha_res = 0;
    while (num1 >= 0) {
        num1 -= num2;
        sha_res++;
    }

    return sha_res - 1;
}

int rest_func(int num1, int num2) {
    int res_res = 0;
    while (1) {
        num1 -= num2;
        if (num1 - num2 <= 0)
            break;
    }
    res_res = num1;

    return res_res;
}

int exponent_win_func(int base, int exponent) {
    int result = 1;

    while (exponent > 0) {
        int temp = 0;
        int count = 0;

        while (count < base) {
            temp += result;
            count++;
        }

        result = temp;
        exponent--;
    }

    return result;
}


int main() {
    int num1, num2, result;
    char operator;
    printf("=================================================\n");
    printf("|\t   Simple Calculator Program            |\n");
    printf("=================================================\n");
    printf("|\t  First number1 : ");
    scanf("%d", &num1);
    printf("|\t  Enter operator (+, -, *, /, %%, ^) : ");
    scanf(" %c", &operator);
    printf("|\t  Second number2 : ");
    scanf("%d", &num2);
    printf("=================================================\n");

    switch (operator) {
    case '+':
        result = add_func(num1, num2);
        break;
    case '-':
        result = minus_func(num1, num2);
        break;
    case '*':
        result = multi_func(num1, num2);
        break;
    case '/':
        result = share_func(num1, num2);
        break;
    case '%':
        result = rest_func(num1, num2);
        break;
    case '^':
        result = exponent_win_func(num1, num2);
        break;
    default:
        printf("|         Error: Invalid operator               |\n");
        break;
    }
    printf("|                   %5d                       |\n", result);

    printf("=================================================\n");


    return 0;
}
