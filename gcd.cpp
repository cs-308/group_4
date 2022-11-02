#include <bits/stdc++.h>
using namespace std;

// function to calculate gcd
int gcd(int n1, int n2)
{
    // base case
    // is first number is zero means we got our gcd value
    if(n1 == 0)return  n2;
    else return gcd(n2 % n1, n1);
}
