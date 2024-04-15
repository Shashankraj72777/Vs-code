#include<iostream>
using namespace std;
int main()
{
    int a[5][5]={{2,3,4,7,8},{5,6,7,1,2},{3,5,4,2,1},{6,7,5,4,3},{9,8,7,6,5}};
    cout<<"The matrix elements are:"<< endl;
    for(int i=0;i<5;i++)//to iterate over the rows
    {
        for(int j=0;j<5;j++)//to iterate over the columns
        {
            cout<<a[i][j]<<" ";//print the element pressent in i,j cell
        }
        cout<<endl;
    }
}