#include<iostream>
using namespace std;
int main()
{
    int n = 5665;
    int sum = 0;
    while (n != 0)
    {
        int digit = n%10;
        sum = sum + digit;
        n = n/10;
    }

    cout<<"The sum of all digits of the number " << n << " is =" << sum << endl;
    return 0;
}