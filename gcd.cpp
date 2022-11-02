#include <bits/stdc++.h>
using namespace std;

// function to calculate gcd
int gcd(int n1, int n2)
{
    if(n1 == 0)return  n2;
    else return gcd(n2 % n1, n1);
}
