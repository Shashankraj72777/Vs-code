#include<iostream>
using namespace std;
int main()
{
    int a[5]={5,8,7,9,3};

    int l=0;
    int r=4;
    while(l<r)
    {
        //swap a[l] and a[r]
        int temp = a[r];
        a[r]=a[l];
        a[l]=temp;
        l++;
        r--;
    }

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}