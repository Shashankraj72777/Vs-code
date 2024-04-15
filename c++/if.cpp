#include<iostream>
using namespace std;
int main()
{
    int phone = 15;
    int money;
    
    cout << "enter the money you have"<<endl;
    cin>> money;
    if(money>=phone){
        cout<<" lets buy the phone"<<endl;
    }
    else{
        cout<<"lets wait for sale";
    }
     return 0;
}