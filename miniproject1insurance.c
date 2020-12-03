#include <stdio.h>
int main()
{
int userAge;

printf("Enter your age here: ");
scanf("%d", &userAge);

if (userAge <= 24)
{
    printf("Your car insurance will cost $5000 a year.");
}

if (userAge >= 25 && userAge <= 34)
{
    printf("Your car insurance will cost $3500 a year.");
}

if (userAge >= 35 && userAge <= 49)
{
    printf("Your car insurance will cost $2800 a year.");
}

if (userAge >= 50)
{
    printf("Your car insurance will cost $1500 a year.");
}




return 0;
}