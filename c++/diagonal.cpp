#include<iostream>
using namespace std;
int main(){
    int a[3][3]={{2,3,4},{4,5,6},{9,8,7}};
    cout<<"The principal diagonal elements are:";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    cout<<"\nThe secondary diagonal elements are:";
    int k=2;
    for(int i=0;i<3;i++)
    {
        cout<<a[i][k]<<" ";
        k--;
    }
}