#include<iostream>
using namespace std;
int main()
{
   int a[3][3]={{2,3,4},{5,6,9},{8,7,6}};
   int b[3][3]={{4,5,6},{7,6,4},{8,9,5}};
   int mul[3][3];
   for(int i=0;i<3;i++)//iterate over the rows
   {
    for(int j=0;j<3;j++)//iterate over the columns
    {
        mul[i][j]=a[i][j]*b[i][j];
    }
   }
   cout<<"The mul of matrix is:"<<endl;
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        cout<<mul[i][j]<<" ";
    }
    cout<<endl;
   }
}