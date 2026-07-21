#include<iostream>
//Factorial

long long factorial(int num)
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
    if (n<0)
    {
        std::cout<<"Factorials are not calculated for -ve numbers !";
    } 
    else
    {
         std::cout<<"the factorial of "<<n<<" is "<<factorial(n);   
    }
    return 0;
}

//long long maxes out at factorial of 20
