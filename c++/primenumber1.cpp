#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int count=0;
    cout<<"enter a no.";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2){
        cout<<n<<"is a prime no.";
    }
    else{
        cout<<n<<"is not a prime no.";
    }
    return 0;
}