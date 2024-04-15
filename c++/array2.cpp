#include<iostream>
using namespace std;
int main(){
    int a[5]={7,8,9,4,3};
    int max = a[0];
    for (int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<" Maximum of the given elements =" << max <<endl;
    return 0;

}