//Binary search only works for sorted
#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    //int mid = (start + end)/2;   // can create problem with int range so we need to update formula to 
    int mid = start + (end - start)/2; //updated formula

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        else if (key > arr[mid])
        {
          start = mid + 1;   
        }
        else 
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}


int main()
{
    int array[5] = {1,2,3,4,5};
    int key;
    cout << "Key: ";
    cin>>key;
    int index = binary_search(array, 6, key);
    cout << index << endl;

    return 0;
}
