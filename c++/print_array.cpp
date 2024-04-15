#include<iostream>
using namespace std;

void printArray(int a[], int n)
{
    cout<<"The elements of the array are:";
    for(int i=0;i<n;i++)
    {
        cout<< a[i] << " ";
    }
}

int main()
{
    int a[5]={5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"The no. of elements in array="<< n <<endl;
    printArray(a, n);
}