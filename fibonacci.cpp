# include <iostream>

//Fibonacci Sequence
int fibonacci (int num)
{
    if (num <= 2)
    {
        return 1;
    }

    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

int main()
{
    int a;
    std::cout<<"Enter the position you want to find the number in the Fibanacci series: ";
    std::cin>>a;

    if (a<0)
    {
        std::cout<<"Fibonacci series is not defined for -ve numbers";
        return 0;
    }

    else if (a==0)
    {
        std::cout<<"0";
        return 0;
    }

    std::cout<<fibonacci(a);

    return 0;
}

