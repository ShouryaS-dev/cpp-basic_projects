#include <iostream>
#include <cmath>
using namespace std;
int GetLenght(int num);

int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;

	int final_num = num;

	int power = GetLenght(num); // power has the lenght

	int sum = 0;

	while(num>0)
	{
		int digit = num%10;
		sum = sum + std::pow(digit, power);
		num = num/10;
	}

	if(sum == final_num)
	{
		cout<<"The given number "<<final_num<<" is an armstrong number\n";
	}
	else
	{
		cout<<"The given number "<<final_num<<" is not an armstrong number\n";
	}
}

int GetLenght(int num)
{
	int c = 0;
	while(num>0)
	{
		int temp = num%10;
		num = num/10;
		c = c+1;
	}
	return c;
}