#include<iostream>
using namespace std;

int factorial(int b);

int main()
{
	int b;
	
	cout << "enter a positive integer:";
	cin >> b;
	
	cout << b<< "=" << factorial(b);
	

}
int factorial(int b)
{

   if(b > 1)
   return b * factorial(b - 1);

   else
   	cout<<"factorial number ";
}

