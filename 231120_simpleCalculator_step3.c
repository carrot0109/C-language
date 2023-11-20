#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isValidNumberForBase(const char* number, int base) {
    int i = 0, length = strlen(number);
    while (i < length) {
        if (base == 2 && (number[i] < '0' || number[i] > '1')) {
            return 0; // 2진법이 아닌 문자 발견
        }
        if (base == 10 && (number[i] < '0' || number[i] > '9')) {
            return 0; // 10진법이 아닌 문자 발견
        }
        if (base == 16 && !((number[i] >= '0' && number[i] <= '9') || (number[i] >= 'A' && number[i] <= 'F') || (number[i] >= 'a' && number[i] <= 'f'))) {
            return 0; // 16진법이 아닌 문자 발견
        }
        i++;
    }
    return 1; // 올바른 형식의 숫자
}

int convertToDecimal(char* number, int base) {
    int start = 0; // 시작 인덱스
    int length = strlen(number);

    // 16진수일 때 "0x" 또는 "0X" 접두사를 확인
    if (base == 16 && length >= 2 && (number[0] == '0' && (number[1] == 'x' || number[1] == 'X'))) {
        start = 2; // "0x" 또는 "0X"를 무시
    }

    // 2진수일 때 "0b" 또는 "0B" 접두사를 확인
    if (base == 2 && length >= 2 && (number[0] == '0' && (number[1] == 'b' || number[1] == 'B'))) {
        start = 2; // "0b" 또는 "0B"를 무시
    }

    if (!isValidNumberForBase(number + start, base)) {
        return -1; // 잘못된 형식의 숫자 입력
    }

    int decimalNumber = 0;
    for (int i = start; i < length; i++) {
        if (number[i] >= '0' && number[i] <= '9') {
            decimalNumber += (number[i] - '0') * pow(base, length - i - 1);
        }
        else if (base == 16 && (number[i] >= 'A' && number[i] <= 'F')) {
            decimalNumber += (number[i] - 'A' + 10) * pow(base, length - i - 1);
        }
        else if (base == 16 && (number[i] >= 'a' && number[i] <= 'f')) {
            decimalNumber += (number[i] - 'a' + 10) * pow(base, length - i - 1);
        }
    }
    return decimalNumber;
}

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
        mul_res = num1 * num2;
        return mul_res;
    }

    int share_func(int num1, int num2) {
        int sha_res = 0;
        sha_res = num1 / num2;
        return sha_res;
    }

    int rest_func(int num1, int num2) {
        int res_res = 0;
        res_res = num1 % num2;
        return res_res;
    }

    int exponent_win_func(int base, int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
        return result;
    }


    int main() {
        int calculatorType;
        char num1_str[32], num2_str[32];    // 전달해 줄 인자 저장 배열
        int num1, num2, result, base;
        char operator;
        printf("\t=================================================\n");
        printf("\t|\t   Simple Calculator Program            |\n");
        printf("\t=================================================\n");

        printf("\t|\t   1. DLP Calculator                    |\n");
        printf("\t|\t   2. Regular Calculator                |\n");
        printf("\t|\t   Choose calculator type: ");
        scanf("%d", &calculatorType);
        if (calculatorType == 2) {
            printf("\t=================================================\n");

            printf("\t|                                               |\n");
            printf("\t|\t   Choose number base                   |\n\t|\t   (2 - Bin, 10 - Dec, 16 - Hex): ");
            scanf("%d", &base);     // 진수 변수에 저장

            if (base != 2 && base != 10 && base != 16) {        // 2, 10, 16 이 아닌 경우 예외 처리
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                printf("\t|                                               |\n");
                printf("\t|          Error: Invalid number base           |\n");
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                return 1;
            }

            printf("\t|                                               |\n");
            printf("\t=================================================\n");
            printf("\t|                                               |\n");
            printf("\t|\t   First number1 : ");
            scanf("%31s", num1_str);
            num1 = convertToDecimal(num1_str, base);
            if (num1 == -1) {
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                printf("\t|                                               |\n");
                printf("\t|          Error: Invalid number format         |\n");
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                return 1;
            }

            printf("\t|\t   Enter operator (+, -, *, /, %%, ^) : ");
            scanf(" %c", &operator);

            printf("\t|\t   Second number2 : ");
            scanf("%31s", num2_str);
            num2 = convertToDecimal(num2_str, base);
            if (num2 == -1) {
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                printf("\t|                                               |\n");
                printf("\t|          Error: Invalid number format         |\n");
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                return 1;
            }
            printf("\t|                                               |\n");
            printf("\t=================================================\n");
            printf("\t|                                               |\n");

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
                if (num2 == 0) {
                    printf("\t|         Error: Division by zero               |\n");
                    printf("\t|                                               |\n");
                    printf("\t=================================================\n");
                    return 1;
                }
                result = share_func(num1, num2);
                break;
            case '%':
                if (num2 == 0) {
                    printf("\t|         Error: Division by zero               |\n");
                    printf("\t|                                               |\n");
                    printf("\t=================================================\n");
                    return 1;
                }
                result = rest_func(num1, num2);
                break;
            case '^':
                result = exponent_win_func(num1, num2);
                break;
            default:
                printf("\t|         Error: Invalid operator               |\n");
                printf("\t|                                               |\n");
                printf("\t=================================================\n");
                return 1;
                break;
            }
            printf("\t|                   %5d                       |\n", result);
            printf("\t|                                               |\n");
            printf("\t=================================================\n");


            return 0;
        }
        else if (calculatorType == 1) {
            // DLP 계산기 관련 코드를 여기에 작성
            printf("\t=================================================\n");
            printf("\t|                                               |\n");
            printf("\t|      DLP Calculator is not implemented yet    |\n");    
            printf("\t|                                               |\n");
            printf("\t=================================================\n");
        }
        else {
            printf("\t=================================================\n");
            printf("\t|                                               |\n");
            printf("\t|               Invalid choice                  |\n");
            printf("\t|                                               |\n");
            printf("\t=================================================\n");
        }

        return 0;
    }
