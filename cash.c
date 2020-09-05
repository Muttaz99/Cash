//cash

#include <stdio.h>
#include<cs50.h>
#include<math.h>

//the main function
int main(void)
{
    int cash = 0;
    float owed;
    
    do
    {
        owed = get_float("how much do you own the cashier?\n");
    }
    while (owed < 0);
    
    int intOwed = round(owed * 100);
    
    //the quarters
    if (intOwed != 0)
    {
        cash = intOwed / 25;
        intOwed = intOwed % 25;
    }
    
    //the dimes
    if (intOwed != 0)
    {
        cash = cash + (intOwed / 10);
        intOwed = intOwed % 10;
    }
    
    //the nickels
    if (intOwed != 0)
    {
        cash = cash + (intOwed / 5);
        intOwed = intOwed % 5;
    }
    
    
    //the pennies
    if (intOwed != 0)
    {      
        cash = cash + (intOwed / 1);
    }
    
    printf("%i\n", cash);
    
}