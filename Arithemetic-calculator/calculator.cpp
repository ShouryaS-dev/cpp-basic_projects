# include <iostream>

//This is a simple calculator i built using c++

//Adding Function
double add(double a, double b)
{
    return (a+b);
}

//Multiplication Function
double multiply(double a, double b)
{
    return (a*b);
}

//Subtraction Function
double subtract(double a, double b)
{
    while (true)
    {
        std::cout<<"Enter 1 for "<<a<<" - "<<b<<"\n";
        std::cout<<"Enter 2 for "<<b<<" - "<<a<<"\n";
        int ans{};
        std::cin>>ans;
        if (ans == 1)
        {
            return (a-b);
        }

        else if  (ans == 2)
        {
            return (b-a);
        }

        std::cout<<"Invalid Input!\n";
    
    }        
}

//Division Function
double divide(double a, double b)
{
    while (true)
    {
        std::cout<<"Enter 1 for "<<a<<"/"<<b<<"\n";
        std::cout<<"Enter 2 for "<<b<<"/"<<a<<"\n";
        int ans{};
        std::cin>>ans;
        if (ans == 1)
        {
            if (b == 0)
            {
                std::cout<<"Error\nDivision By Zero!";
                return 0;
            }
            else
            {
                return (a/b);
            }
        }
        else if (ans == 2)
        {
            if (a == 0)
            {
                std::cout<<"Error\nDivision By Zero!";
                return 0;
            }
            else
            {
                return (b/a);
            }
        }
        std::cout<<"Invalid Input!\n";
    }
}

int main()
{
    double num1, num2;
    std::cout<<"This is a Calculator"<<std::endl;
    std::cout<<"Enter your first number: ";
    std::cin>>num1;
    std::cout<<"Enter your second number: ";
    std::cin>>num2;

    while (true)
    {
        std::cout<<"\nEnter 1 for Addition\nEnter 2 for subtraction\n";
        std::cout<<"Enter 3 for multiplication\nEnter 4 for division\n";

        int ans{};
        std::cin>>ans;
        switch (ans)
        {
            case 1:
                std::cout<<add(num1, num2);
                return 0;
            case 2:
                std::cout<<subtract(num1, num2);
                return 0;
            case 3:
                std::cout<<multiply(num1, num2);
                return 0;
            case 4:
                std::cout<<divide(num1, num2);
                return 0;
            default:
                std::cout<<"Invalid Input!\n";
                
        }
    }
        
}

/*
#Known Issues
-Invalid charector input can cause IO stream problams
-Planning to make continuous improvements
*/

