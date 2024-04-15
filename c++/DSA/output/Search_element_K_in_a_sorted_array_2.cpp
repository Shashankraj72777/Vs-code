#include<iostream>
using namespace std;

int linearSearch(int a[], int i, int n, int k)
{
    //when checked over entire array but element was not found
    if(i == n)
    {
        return -1;
    }
// when element k is present at the current index:i
    if(a[i] == k)
    {
        return i;
    }

    return linearSearch(a,i+1,n,k);
}
int main()
{
    int a[]={1,2,4,6,12,15};
    int k = 12;

    int n = sizeof(a)/sizeof(a[0]);

    int index = linearSearch(a,0,n,k);

    cout<<"The element " << k << " is present at index : "<< index << endl;
    return 0;
}