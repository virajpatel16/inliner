#include<iostream>
using namespace std;

int fun_1(int a , int b)
{
    return (a+b);
}


int fun_2(int m)
{
    cout<<"The value of m is :"<<m<<endl;
}


int main()
{
    
    int i , j;
    
    cout<<"enter  the value i: ";
    cin>>i;
    
    cout<<"enter  the value j: ";
    cin>>j;
    
    
    
    fun_2(fun_1(i,j));
    
   
}
