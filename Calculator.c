#include<stdio.h>
int main()
{
    double a,b;   // Variables to store two numbers(decimal allowed)
    char op;   // Variable to store the operator
    printf("Enter an operator (+, -, *, /):");
    scanf(" %c",&op);    // Space before %c ignores leftover space(like newline)
    printf("Enter two numbers:");
    scanf("%lf %lf",&a,&b);    // %lf is used for double type
    switch(op)
    {
        case'+':
        printf("Result = %.2lf",a+b);
        break;
        case'-':
        printf("Result = %.2lf",a-b);
        break;
        case'*':
        printf("Result = %.2lf",a*b);
        break;
        case'/':
        if(b!=0)    // Check to avoid division by zero
        printf("Result = %.2lf",a/b);
        else
        printf("Error! Division by zero!");
        break;
        default:
        printf("Invalid Operator");

    }
    return 0;
}