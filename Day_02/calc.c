#include <stdio.h>
#include <stdlib.h>


enum enOperation{OpAdd = 0, OpSub = 1, OpMul = 2, OpDiv = 3, OpMod = 4};

float calc(float a, float b, enum enOperation Op)
{
    switch (Op)
    {
        case OpAdd:
            return a + b;
        case OpSub:
            return a - b;
        case OpMul:
            return a * b;
        case OpDiv:
            if (b == 0) return 0;
            return a / b;
        case OpMod:
            return (int)a % (int)b;
        default:
            return 0;
    }
}

enum enOperation ReadOP()
{
    int OP = -1;
    while(OP > 4 || OP < 0) {
        printf("Choose operation: \n");
        printf("[0]: ADD\n[1]: SUB\n[2]: MUL\n[3]: DIV\n[4]: MOD\n");
        printf("Your choice: ");

        scanf("%d", &OP);
    }
    return (enum enOperation)OP;
}

int main()
{
    float a, b, Result;

    printf("Enter number1: ");
    scanf("%f", &a);
    printf("Enter number2: ");
    scanf("%f", &b);

    Result = calc(a, b, ReadOP());
    printf("Result is %f\n", Result);

    return 0;
}