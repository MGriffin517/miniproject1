#include <stdio.h>
int main()
{
    int Party; 


printf("Enter how many people are in your party here: ");
scanf("%d", &Party);





if (Party == 1)
{
    printf("\nPlease have a seat at the bar");
}


if (Party == 2)
{
    printf("\nPlease have a seat at a small table");
}


if (Party == 3 || Party ==4)
{
    printf("\nPlease have a seat at a medium table");
}


if (Party == 5 || Party == 6)
{
    printf("\nPlease have a seat at a large table");
}


if (Party == 7 || Party == 8)
{
    printf("\nPlease have a seat at a booth");
}


if (Party > 8)
{
    printf("\nPlease wait 45 minutes or make a reservation for later!");
}
    return 0;
}