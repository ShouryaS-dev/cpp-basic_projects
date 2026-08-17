#include<iostream>
int main()
{
    int num;
    std::cout<<"Enter an integer : ";
    std::cin>>num;

    if (num<0)
    {
        int new_num = (-1)*(num);
        int reversed = 0;

        while (new_num>0)
        {
            int digit = new_num%10;
            reversed = reversed*10 + digit;
            new_num = new_num/10;
        }
        std::cout<<"-"<<reversed<<"\n";
    }

    else if (num>0)
    {
        int reversed = 0;
        while(num>0)
        {
            int digit = num%10;
            reversed = reversed*10 + digit;
            num = num/10;
        }
        std::cout<<reversed<<"\n";
    }

    else
    {
        return 0;
    }
}