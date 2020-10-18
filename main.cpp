#include <iostream>
#include <cstdlib>
#include <ctime> 

int sum( int x[], int n);

using namespace std;

int main(){
	
    int ar[10] {};
	int ar2[5]={1,2,3,4,5};
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        ar[i] = 1 + rand() % 10;      
    }
	cout<<"Array 1:\t";
     for (int i = 0; i < 10; i++)
    {
      cout<<ar[i]<<" ";  
    }
	cout<<endl;
    sum(ar,10);
    cout<<"\nArray 2:\t";
 for (int i = 0; i < 5; i++)
    {
      cout<<ar2[i]<<" ";  
    }
    cout <<endl;
	sum(ar2,5);
    

}



