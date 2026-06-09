#include<iostream>

int main()
{
    std::cout<<"Entet the number for the table: ";
    int num;
    std::cin>>num;
    for (int i = 1; i <=10; i++)
    {
        std::cout<<num<<" X "<<i<<" = "<<num*i<<std::endl;
    }
}
