#include <stdio.h>
#include <conio.h>
#include <process.h>
void cal();
void odd();
void simple();
int main ()
{ 
    while (1)
    {
        int a;
        printf("\n1.Calculator\n2.Check Number Is Even or Odd\n3.Calculate Simple Intrest\n4.Exit\nEnter Your Chioce = ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            cal();
            printf("Press any key to exit");
            getch();

            break;
        case 2:
            odd();
            break;
        case 3:
            simple();
            break;
        case 4:
            exit (0);
        default:
            printf("Invalid Choice");
        }
    }
    return 0;
}
void cal()
{
    while (1)
    {
        int c;
        float a, b;
        printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\nEnter Your Choice = ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter The Two Number = ");
            scanf("%f%f", &a, &b);
            printf("%f", a + b);
            break;
        case 2:
            printf("Enter The Two Number = ");
            scanf("%f%f", &a, &b);
            printf("%f", a - b);
            break;
        case 3:
            printf("Enter The Two Number = ");
            scanf("%f%f", &a, &b);
            printf("%f", a * b);
            break;
        case 4:
            printf("Enter The Two Number = ");
            scanf("%f%f", &a, &b);
            printf("%f", a / b);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice");
        }
    }
}
void odd()
{
    int a;
    printf("Enter Any Number =");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is Even", a);
    else
        printf("%d is Odd", a);
}
void simple()
{
    float a, b, c, d;
    printf("Enter The Principle Amount = ");
    scanf("%f", &a);
    printf("Enter The Rate = ");
    scanf("%f", &b);
    printf("Enter The Time = ");
    scanf("%f", &c);
    d = (a * b * c) / 100;
    printf("Simple Intrest = %f", d);
}