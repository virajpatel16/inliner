#include <iostream>
using namespace std;

void arr_swap(int arr1[], int arr2[]){
	int b;
	
	for(int i = 0; i < 5; i++){
		b = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = b;
	}
	
	cout << "After swaping Array 1: ";
	
	for(int i = 0; i < 5; i++){
    	cout << arr1[i] << " ";
	}
	
	cout <<endl;
    
    cout << "After swaping Array 2: ";
	
	for(int i = 0; i < 5; i++){
    	cout << arr2[i] << " ";
	}
    
}

int main()
{   
    int arr1[5], arr2[5];
    
    cout << "Enter 5 elements in Array 1: " << endl;
    
    for(int i = 0; i < 5; i++){
    	cout << "Arr[" << i << "] :";
    	cin >> arr1[i];
	}

	cout << "Enter 5 elements in Array 2: " << endl;
	
	for(int i = 0; i < 5; i++){
    	cout << "Arr[" << i << "] :";
    	cin >> arr2[i];
	}
	
	arr_swap(arr1, arr2);
	
	
}
