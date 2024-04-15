#include<iostream>
using namespace std;
int main(){
    int a[5] = {2,4,6,5,7};
    int sum =0;
    for (int i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    cout<<"Sum of the array elements = " << sum <<endl;
    return 0;
}