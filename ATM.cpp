#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amount;
    float balance,rb;
    cin >> amount >> balance;
    if (amount+0.50 > balance)
    {
        cout << fixed << setprecision(2) << balance << endl;
    }
    else
    {
        if (amount%5==0)
        {
        rb = balance - (amount + 0.50);
        cout << fixed << setprecision(2) << rb;
        }
        else
        cout << fixed << setprecision(2) << balance << endl;
    }
}