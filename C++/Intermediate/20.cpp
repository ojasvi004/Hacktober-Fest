#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n = 1)
        return 1;
    else
        return n * factorial(n);
}
int main()
{
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
