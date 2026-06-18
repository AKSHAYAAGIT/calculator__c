#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void line();
void title();
void history(double result);
void pauseScreen();

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

double power(double a, double b);
double squareRoot(double a);
double cubeRoot(double a);
double percentage(double a, double b);

double sineValue(double a);
double cosineValue(double a);
double tangentValue(double a);

double logarithmValue(double a);
double naturalLogValue(double a);

long long factorial(int n);

void showHistory();

int main()
{
    int choice;
    double num1, num2, result;

    while(1)
    {
        system("cls||clear");

        title();

        printf("\n");
        printf(" 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Power\n");
        printf(" 6. Square Root\n");
        printf(" 7. Cube Root\n");
        printf(" 8. Percentage\n");
        printf(" 9. Sine\n");
        printf("10. Cosine\n");
        printf("11. Tangent\n");
        printf("12. Log10\n");
        printf("13. Natural Log\n");
        printf("14. Factorial\n");
        printf("15. View History\n");
        printf(" 0. Exit\n");

        line();

        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number 1 : ");
                scanf("%lf",&num1);

                printf("Enter Number 2 : ");
                scanf("%lf",&num2);

                result = add(num1,num2);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 2:
                printf("Enter Number 1 : ");
                scanf("%lf",&num1);

                printf("Enter Number 2 : ");
                scanf("%lf",&num2);

                result = subtract(num1,num2);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 3:
                printf("Enter Number 1 : ");
                scanf("%lf",&num1);

                printf("Enter Number 2 : ");
                scanf("%lf",&num2);

                result = multiply(num1,num2);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 4:
                printf("Enter Number 1 : ");
                scanf("%lf",&num1);

                printf("Enter Number 2 : ");
                scanf("%lf",&num2);

                result = divide(num1,num2);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 5:
                printf("Enter Base : ");
                scanf("%lf",&num1);

                printf("Enter Power : ");
                scanf("%lf",&num2);

                result = power(num1,num2);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 6:
                printf("Enter Number : ");
                scanf("%lf",&num1);

                result = squareRoot(num1);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 7:
                printf("Enter Number : ");
                scanf("%lf",&num1);

                result = cubeRoot(num1);

                printf("\nResult = %.2lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 8:
                printf("Enter Value : ");
                scanf("%lf",&num1);

                printf("Enter Total : ");
                scanf("%lf",&num2);

                result = percentage(num1,num2);

                printf("\nPercentage = %.2lf%%\n",result);
                history(result);
                pauseScreen();
                break;

            case 9:
                printf("Enter Angle : ");
                scanf("%lf",&num1);

                result = sineValue(num1);

                printf("\nResult = %.4lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 10:
                printf("Enter Angle : ");
                scanf("%lf",&num1);

                result = cosineValue(num1);

                printf("\nResult = %.4lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 11:
                printf("Enter Angle : ");
                scanf("%lf",&num1);

                result = tangentValue(num1);

                printf("\nResult = %.4lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 12:
                printf("Enter Number : ");
                scanf("%lf",&num1);

                result = logarithmValue(num1);

                printf("\nResult = %.4lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 13:
                printf("Enter Number : ");
                scanf("%lf",&num1);

                result = naturalLogValue(num1);

                printf("\nResult = %.4lf\n",result);
                history(result);
                pauseScreen();
                break;

            case 14:
            {
                int n;

                printf("Enter Number : ");
                scanf("%d",&n);

                printf("\nFactorial = %lld\n",factorial(n));

                pauseScreen();
                break;
            }

            case 15:
                showHistory();
                pauseScreen();
                break;

            case 0:
                printf("\nThank You For Using Calculator\n");
                exit(0);

            default:
                printf("\nInvalid Choice\n");
                pauseScreen();
        }
    }

    return 0;
}

void line()
{
    printf("\n==================================================\n");
}

void title()
{
    line();
    printf("          BASIC MATH BUDDY CALCULATOR\n");
    printf("             MINI PROJECT IN C\n");
    line();
}

void pauseScreen()
{
    printf("\nPress Enter To Continue...");
    getchar();
    getchar();
}

double add(double a,double b)
{
    return a+b;
}

double subtract(double a,double b)
{
    return a-b;
}

double multiply(double a,double b)
{
    return a*b;
}

double divide(double a,double b)
{
    if(b==0)
    {
        printf("\nDivision By Zero Not Allowed\n");
        return 0;
    }

    return a/b;
}

double power(double a,double b)
{
    return pow(a,b);
}

double squareRoot(double a)
{
    return sqrt(a);
}

double cubeRoot(double a)
{
    return cbrt(a);
}

double percentage(double a,double b)
{
    return (a/b)*100;
}

double sineValue(double a)
{
    return sin(a*M_PI/180);
}

double cosineValue(double a)
{
    return cos(a*M_PI/180);
}

double tangentValue(double a)
{
    return tan(a*M_PI/180);
}

double logarithmValue(double a)
{
    return log10(a);
}

double naturalLogValue(double a)
{
    return log(a);
}

long long factorial(int n)
{
    long long fact=1;
    int i;

    for(i=1;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}

void history(double result)
{
    FILE *fp;

    fp=fopen("history.txt","a");

    if(fp!=NULL)
    {
        fprintf(fp,"%.4lf\n",result);
        fclose(fp);
    }
}

void showHistory()
{
    FILE *fp;
    char ch;

    fp=fopen("history.txt","r");

    if(fp==NULL)
    {
        printf("\nNo History Found\n");
        return;
    }

    printf("\n========== HISTORY ==========\n\n");

    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }

    fclose(fp);
}