#include<iostream>
using namespace std;
int main()
{   
    int i=0, n;
    int a, b,r;
    cin>>n;
    
        while (i<n)
        {
            cin >>a >> b;
            r=a%b;
            cout<< r << endl;
            i++;
        }
        
    return 0;
    
}