#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter lower and upper limits : ";
    int lower, upper;
    cin>>lower>>upper;


    cout<<"Prime numbers between the given limits are : ";
    for (int i = lower; i<=upper; i++)
    {
        if (i < 2) continue;

        bool IsPrime = true;
        for (int j = 2; j<i; j++)
        {
            if (i%j==0)
            {
                IsPrime = false;
                break;
            }
        }
        if (IsPrime==true)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
