#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"enter a no.";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is " <<fact<<endl;
     return 0;
}