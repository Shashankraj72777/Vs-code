#include<iostream>
using namespace std;
int main(){
    int a[5]={5,6,8,9,2};
    int max = a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    cout<<"maximum element in the array = " << max <<endl;
    return 0;
}