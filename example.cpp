#include <iostream>

int sum( int* arr, int n);
using namespace std;

int main(){
	int ar[5]={1,2,3,4,5};
	int n;
    cout << "n: ";
    cin >> n;
	
    int* arr = new int[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sum(arr, n);
    delete[] arr;
	cout << "array 2:";
	for (int i = 0; i < n; i++) {
        cout << ar[i]<<" ";
    }
	sum(ar,5);
	system("PAUSE");
	return 0;
}



