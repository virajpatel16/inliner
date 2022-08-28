#include<iostream>
using namespace std; 
inline int mul(int a, int b){return a*b;}

 main()  
{  
    int num;  
  
    cout<<"Enter the number"<<endl;  
    cin>>num;  
  
    cout<<endl<<"Multiplication Table for is:"<<endl;
	
	for(int i = 1; i <= 10; i++){
		cout << num  << " * " << i << " = " << mul(i, num) << endl;
	}  
  
}  
   
