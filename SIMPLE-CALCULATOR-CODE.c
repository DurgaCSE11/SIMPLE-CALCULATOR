#include<stdio.h>

int main(){
    int M, N, ch;
    printf("\nWelcome All to DURGA's SIMPLE CALCULATOR.");
    printf("\nHere you can ADD, SUBTRACT, MULTIPLY, DIVIDE Two numbers.");
    printf("\nHere you can also calculate the modulus and percentage of Two Numbers.");
    printf("\nIts a Menu-Based Calculator, so you have to choose one of the following operations.");
    printf("\n");
    printf("\n==============MENU BASED SIMPLE CALULATOR==============");
    printf("\n 1. ADDITION");
    printf("\n 2. SUBTRACTION");
    printf("\n 3. MULTIPLICATION");
    printf("\n 4. DIVISION");
    printf("\n 5. MODULUS");
    printf("\n 6. PERCANTAGE");
    printf("\nEnter your Desired choice:-");
    scanf("%d", &ch);
    switch (ch)
    {
         case 1:
    {
            printf("\nTo ADD(+) two numbers(M+N)");
            printf("\nENTER M :-");
            scanf("%d", &M);
            printf("\nENTER N :-");
            scanf("%d", &N);
            printf("\nANSWER = %d", M+N);
            break;
    }
        case 2:
    {
            printf("\nTo SUBTRACT(-) two numbers(M-N)");
            printf("\nENTER M :-");
            scanf("%d", &M);
            printf("\nENTER N :-");
            scanf("%d", &N);
            printf("\nANSWER = %d", M-N);
            break;
    }
        case 3:
    {
            printf("\nTo MULTIPLY(*) two numbers(M*N)");
            printf("\nENTER M :-");
            scanf("%d", &M);
            printf("\nENTER N :-");
            scanf("%d", &N);
            printf("\nANSWER = %d", M*N);
            break;
    }
         case 4:
    {
            printf("\nTo DIVIDE(/) two numbers(M/N)");
            printf("\nENTER M :-");
            scanf("%d", &M);
            printf("\nENTER N :-");
            scanf("%d", &N);
            if (N==0){
                printf("ANY NUMBER DIVIDED BY ZERO IS NOT DEFINED.");
            }
            else 
                printf("\nANSWER = %d", M/N);
            break;
    }
        case 5:
    {
            printf("\nTo calculate MODULUS(%%) two numbers(M %% N)");
            printf("\nENTER M :-");
            scanf("%d", &M);
            printf("\nENTER N :-");
            scanf("%d", &N);
            if (N==0){
                printf("ANY NUMBER DIVIDED BY ZERO IS NOT DEFINED.");
            }
            else 
                printf("\nANSWER = %d", M%N);
            break;
    }
    case 6:
    {
            float a, b, percentage;
            printf("Enter the first number: ");
            scanf("%f", &a);
            printf("Enter the second number: ");
            scanf("%f", &b);

            if(b != 0) {
            percentage = (a / b) * 100;
            printf("\n The Percentage of the given first number out of second number is %.0f%%\n", percentage);
            } else {
            printf("\nError: Division by zero is not allowed.\n");
            }   
            break;
    }
}
}
