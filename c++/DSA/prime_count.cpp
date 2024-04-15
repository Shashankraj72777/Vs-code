#include<iostream>
using namespace std;
int checkPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void countPrime(int a[], int n)
{
    int prime_count = 0;
    for(int i=0;i<n;i++)
    {
        int flag = checkPrime(a[i]);
        prime_count += flag;
    }

    cout<<"The no. of prime elements in array :"<< prime_count <<endl;
}
int main()
{
    int a[] = {2,3,7,18,20,17,13};
    int n = sizeof(a)/sizeof(a[0]);

    countPrime(a, n);
     return 0;
}