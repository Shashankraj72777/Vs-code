#include<iostream>
using namespace std;
int main()
{
    int i,j,ch=0;
    cout<<"enter any no."<<endl;
    cin>>i;
    if(i<=1)
    ch=1;
     while(j<=i/2)
     {
        if(i%j==0)
        {
            ch=1;
            break;
        }
        else{
            j++;
        }
     }
     if(ch==0)
     {
        cout<<i<<"is prime";
     }
     else{
        cout<<i<<"not prime";
     }
     return 0;
}