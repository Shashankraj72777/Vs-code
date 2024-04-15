#include<iostream>
using namespace std;
int linearSearch(int a[], int n, int k)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1,2,3,3,4,4,6,7,8};
    int k = 3;

    int n = sizeof(a)/sizeof(a[0]);

    int index = linearSearch(a, n, k);

    cout<<" The first index at which the element " << k << " is present at: " << index << endl;
     return 0;
}