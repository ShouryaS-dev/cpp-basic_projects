#include <iostream>

using namespace std;

int main() 
{
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    int c = 0;

    for (int i = 1; i<num; i++)
    {
        if (num%i==0)
        {
            c+=i;
        }
    }

    if (num==c)
    {
        cout<<"Perfect Number\n";
    }
    else
    {
        cout<<"Not Perfect Number\n";
    }

    return 0;
}
