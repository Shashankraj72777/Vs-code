#include<iostream>
using namespace std;
int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    int count = 0;
    for(int i=0;i<8;i++)
    {
        if(a[i]%2==0)
        {
            count = count+1;
        }
    }

    cout<<"no. is even = "<<count<<endl;


}