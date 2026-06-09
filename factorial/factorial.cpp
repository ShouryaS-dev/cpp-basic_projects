#include<iostream>

//Factorial
int factorial(int num)
{
    if (num < 2)
    {
        return 1;
    }

    else
    {
        return (num)*(factorial(num-1));
    }
}

int main()
{
    int n;
    std::cout<<"Enter your number: ";
    std::cin>>n;
    std::cout<<"the factorial of "<<n<<" is "<<factorial(n);

    return 0;
}

