#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int x = 56, y = 98;
    cout << "gcd of  x and y is : " << gcd(x, y) << endl;

    cout << "The factorial of 5 is : " << factorial(5) << endl;
    return 0;
}
