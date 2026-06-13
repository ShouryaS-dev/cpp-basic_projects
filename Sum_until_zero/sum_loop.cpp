# include <iostream>

int main()
{
    int counter {0};
    while (true)
    {
        
        int num;
        std::cout<<"Enter the number to add (Enter 0 to exit)\n";
        std::cin>>num;
        
        if (num == 0)
        {
            break;
        }
        
        counter+=num;
        
    }
    
    std::cout<<"The sum of your numbers is "<<counter;
}
