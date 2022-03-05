#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
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