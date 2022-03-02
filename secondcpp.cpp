#include<iostream>
using namespace std;
int main()
/*{
    int a = 2;
    int b = a+1;

    if ((a=3)==b)
    {
        cout<<a;
    }
    else
    {
        cout<<a+1;
    }
}
*/
{
    int n;
    cin>>n;
    //int i=1;
    int sum=0;
    int i=2;
    /*while (i<=n)
    {
        cout<< " " <<i;
        i++;
    }*/
    /*while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
    */
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
    
}