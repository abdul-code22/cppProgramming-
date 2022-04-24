#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 }
int main()
{
    int arr[]={2,4,1,35,-4};
   int rev[]= {reverse(arr,5)};
}
/* //Leaner Search my Way
int main()
{
    int n;
    cin>>n;
    int array[20];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    cout<<"Enter the number you want to search "<<"\n";
    int num;
    cin>>num;
    for (int  i = 0; i < n; i++)
    {
        if (num==array[i])
        {
            cout<<"number is present in array at index "<<i;
        }
        
    }
    
    return 0;
}*/

/* //Sum of array elements Home Work question
int main()
{   
    int n;
    cin>>n;
    int array[20];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=sum+array[i];
    }
    
    cout<<"Sum is "<<sum;
}*/

/* //max and min of an array
int getMax(int num[], int n)
{  //maximum of array
    int maxm=INT_MIN;

    for (int i = 0; i < n; i++)
    {

        maxm=max(maxm,num[i]);  //in-built funtion for max
       // if (num[i]>max)
        //{
        //    max=num[i];
        //}
        
    }
    return maxm;
}

int getMin(int num[], int n)
{  //manimum of array
    int minm=INT_MAX;

    for (int i = 0; i < n; i++)
    {

        minm=min(minm,num[i]);  //in-built funtion for min
        //if (num[i]<min)
        //{
          //  minm=num[i];
        //}
        
    }
    return minm;
}

int main()
{   
    int size;
    cin>>size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }


    cout<<"Maximun is "<<getMax(num,size)<<endl;
    cout<<"Maximun is "<<getMin(num,size)<<endl;

    
    //int size=sizeof(arrY)/sizeof(int);    //this is not the best method, brust when some index are empty
    //cout<<size<<endl;
}*/