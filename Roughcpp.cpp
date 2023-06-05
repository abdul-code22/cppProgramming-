<<<<<<< HEAD
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    string food = "Pizza";
    cout << &food<<endl;

    float i = 0;
    cout << &i <<endl;  
    

    return 0;
}
=======
#include <iostream>
#include <math.h>
using namespace std;
void insertionsort(int arr[],int n)
{
	int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
		while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printarray(int arr[],int n)
{	
	int i;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";
		//cout << endl;
	}
}
int main()
{
	int arr[] ={12 , 11, 13 ,5 ,6};
	int n =sizeof(arr)/sizeof(arr[0]);

	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}
>>>>>>> 510a2d3b0637e6ec09e314d1d3a3a06b3f7d3a42
