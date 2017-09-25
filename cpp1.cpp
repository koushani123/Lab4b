#include <iostream>
using namespace std;
//PROGRAM TO CALCULATE POWER OF A NUMBER USING RECURSSION

// Function to calculate base^exponent using recursion
int Power(int base, int exponent)
{
    if(exponent == 0)
    {
       return 1;
    }
    return base * Power(base, exponent - 1);
}
int main()
{
    int base, exponent, counter, result = 1;
    cout<<"PROGRAM TO CALCULATE POWER OF A NUMBER USING RECURSSIONS \n \n";
    cout << "Enter base and exponent\n";
    cin >> base >> exponent;
    result = Power(base, exponent);
      
    cout << base << " raised to " << exponent << " = " << result;
    return 0;
}
