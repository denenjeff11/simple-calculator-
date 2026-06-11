#include <stdio.h>

int main() 
{ 
    float num1, num2;
    char op;

    printf("simple calculator\n");
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /):");
    scanf(" %c",  &op);

    printf("Enter second number:  ");
    scanf("%f", &num2);

    if (op == '+')
    {
        printf("result: %.2f\n", num1 + num2);
    }

    else if (op == '-')
    {

        printf("result: %.2f\n", num1 - num2);
    }    
    else if (op == '*')
    {
        printf("resuit: %2f\n", num1 *num2);
    } 
    else if (op == '/')
    {
         if (num2 != 0)
       {
        printf("result %.2f\n", num1/num2);  
    }  
    
    else
        
    {
        printf("error: cannot divide by zero\n");
        }
           
    }
    else 
    {
        printf("invalid operator\n");
    } 
    return 0;    
    
    
}
                







