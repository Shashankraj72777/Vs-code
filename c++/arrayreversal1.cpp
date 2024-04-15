#include<iostream>
using namespace std;
int main()
{
    int a[5]={6,7,9,8,4};
    //output: 4,8,9,7,6
    int b[5];
    int j=0;//traverse on the array b

    //to traverse on the array a
    for(int i=4;i>=0;i--)
    {
        b[j]=a[i];
        j=j+1;
    }
    for(int i=0;i<5;i++)
    {
        cout<< b[i] << " ";
    }

}