#include<iostream>
using namespace std;

//Ques.1 swapAlternates in array
/*void swapAlternates(int arr[], int size){
    for (int i = 0; i < size; i+=2) {
        if (i+1 < size)
        swap(arr[i], arr[i+1]);
    }
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)   {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int even[]={1,2,3,4,5,6};
    int odd[]={1,2,3,4,5,6,7};

    swapAlternates(even, 6);
    printArray(even,6);
    cout<<endl;
    swapAlternates(odd, 7);
    printArray(odd,7);

}*/

//Ques .2 Find unique in an array (codestudios)
/*int findUniques(int arr[], int size)
{
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[]={1,1,2,2,5,5,7};

    int ans= findUniques(arr,7);
    cout<<ans;
}*/
