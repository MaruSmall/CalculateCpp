#include  "Calculate.h"

int Sum(int numOne, int numTwo) 
{
	return numOne + numTwo;
}

int Subtraction(int numOne, int numTwo)
{
	return numOne - numTwo;
}

int Multiplication(int numOne, int numTwo)
{
    return numOne * numTwo;
}

float Division(float numOne, int numTwo)
{
	return numOne / numTwo;
}

int Factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else
    {
        return n * Factorial(n - 1);
    }
}

int Power(int number, unsigned int power)
{
    if (power != 0)
    {
        return (number * Power(number, power - 1));
    }
        
    else
    {
        return 1;
    }
}