#include<iostream>
using namespace std;

int isPrime(int n)
{
    for( int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int n = 8;
    int flag = isPrime(n);
    if(flag == 1)
    {
        cout<<"Prime no. is : "<< n <<endl;
    }
    else
    {
        cout<<"Not Prime is : "<< n <<endl;
    }
     return 0;
}