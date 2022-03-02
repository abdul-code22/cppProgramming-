#include<iostream>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    for ( i = 0; i < t; i++)
    {   
        int n;
        cin>>n;
        int rem=n%10;
        for ( ; n > 9;)
        {
            n=n/10;
        }
        cout<<n+rem<<endl;
    }
    
}