#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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

    
    //int size=sizeof(arrY)/sizeof(int);
    //cout<<size<<endl;
}