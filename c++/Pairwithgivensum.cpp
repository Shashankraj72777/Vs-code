#include<iostream>
using namespace std;
int main(){
    int a[6] = {1,2,3,4,5,6};
    int value=6;
    int count=0;

    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(a[i]+a[j]==value)
            {
                count=count+1;
            }
        }
    }
    cout<<"count of pair having sum ="<<value<<"is ="<<count<<endl;
    return 0;
}
