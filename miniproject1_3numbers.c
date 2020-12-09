/* 
    Michael Griffin, Wyatt Rhodes
    ELET 1102
    v 1.1
    2020-12-08

   Gets 3 different numbers from the user and and outputs which one was the greatest.
*/
#include <stdio.h>
int main()
{
int num1;
int num2;
int num3;

printf("Enter the values of 3 different numbers here seperated by spaces: ");
scanf("%d %d %d", &num1, &num2, &num3);

if (num1 == num2 || num1 == num3 || num2 == num3)
{
    printf("MAKE SURE YOU ENTER 3 DIFFERENT NUMBERS!!!!!!!");
}
else
{
    if (num1 > num2 && num1 > num3)
    {
        printf("The first number is the greatest of the numbers.");
    }

    if (num2 > num1 && num2 > num3)
    {
        printf("The second number is the greatest of the numbers.");
    }

    if (num3 > num1 && num3 > num2)
    {
        printf("The third number is the greatest of the numebrs.");
    }

}




    return 0;
}
