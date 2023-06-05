#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//amount teller with notes

int main() //amount teller with notes
{
    int amt,num;
    cin>>amt;

    int hun,fif,twt,one;

    if (amt>=1)
    {
         num=1;
    }
    else{
        num=5;
    }


    switch (num)
    {
        case 1: 
    {
        hun = amt/100;
        amt = amt - hun*100;
    }
        case 2: 
    {
        fif = amt/50;
        amt = amt - fif*50;
    }
        case 3: 
    {
        twt = amt/20;
        amt = amt - twt*20;
    }
        case 4: 
    {
        one = amt/1;
        amt = amt - one*100;
    }
    
    cout<<hun<<endl;
    cout<<fif<<endl;
    cout<<twt<<endl;
    cout<<one<<endl;
    break;
    case 5:cout<<"PLease enter a valid amount ";
        break;
    }

    return 0;

}

//Fibonacci series funtion

/* //Fibonacci series funtion
void fibonacci(int n){
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i < n; i++)
    {
        int sum = a + b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}

int main()
{
    int n;
    cin>>n;
    fibonacci(n);

}*/

//AP nth term Funtion

/* //AP nth term
int AP(int n)
{
    int apNth=(3*n) + 7;
    return apNth;
}

int main()
{
    int n;
    cin>>n;
    cout<<AP(n);
}*/