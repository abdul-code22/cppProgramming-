#include<iostream>
using namespace std;
int main()
/*
{
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {   int j=1;
        while (j<=n)
        {
            cout<</*"*"i, j n-j+1;
            j++;
        }
    cout<<endl;
    i++;
    }
    
}
*/
{
   int n;
    cin>>n;
    int i=1,count=1;
    while (i<=n)
    {   int j=1;
        while (j<=n)
        {
            cout<<" "<<count;
            count++;
            j++;
        } 
        cout<<endl;
        i++;
    }
}