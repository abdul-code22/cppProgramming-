#include <iostream>
#include<cmath>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)  
    {
        int bit=n&1;
        ans=(bit*pow(10,i)) + ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    int m=ans;
    cout<<m<<endl;

    int ans1=0,j=0;
    while (m!=0)
    {
       int digit=m%10;
       if (digit==1)
       {
           ans1 = ans1 + pow(2,i);
           cout<<ans1<<endl;
       }
       
       m=m/10;
       j++;
    }
    cout<<ans1;
}
    

/*// Print contents of an array in reverse order in C++
// using array indices
int main()
{
    int a=5;
    float b=4;
    float c;
    c=a/b;
    cout<<c;
}


{   int m,i;
    int arr[m];
    for ( i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    
    size_t n = sizeof(arr)/sizeof(arr[0]);
 
    // iterate backward over the elements of an array
    for (int i = n - 1; i >= 0; i--) {
        std::cout << arr[i] << ' ';
    }
 
    return 0;
}*/