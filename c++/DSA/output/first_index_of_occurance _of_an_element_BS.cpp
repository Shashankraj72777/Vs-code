#include<iostream>
using namespace std;

int binarySearch(int a[], int l, int r, int k)
{
    int res = -1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;

        if(a[mid] == k)
        {
            res = mid;
            r = mid -1;
        }
        else if(a[mid]>k)
        {
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return res;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,7,8,9};
    int k= 7;

    int n = sizeof(a)/sizeof(a[0]);

    int index = binarySearch(a,0,n-1,k);
    cout<< " The first index of which the element " << k << " is present at : " << index << endl;
     return 0;
}