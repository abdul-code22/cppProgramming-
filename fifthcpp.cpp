#include<iostream>
using namespace std;
int main()
{   //check wheather a number is a prime number or not
    int n;
    cin>>n;
    bool prime=1;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=0;
            break;
        }
        
    }

    if (prime==0)
    {
        cout<<n<<" not prime"; 
    }
    else
    {
        cout<<n<<" prime";
    }
    
    
}
/*{
    int n,i;
    cin>>n;
    int sum=0;
    i=1;
    for (i=1 ;i<=n ;i++)
    {
        sum+=i;
        
    }
    cout<<sum;
    
}*/