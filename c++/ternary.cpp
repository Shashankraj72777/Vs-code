#include<iostream>
using namespace std;
int main()
{
    string weather;
    int temp=48;
    cin>>temp;
    weather = temp > 30 ? "hot" : "pleasant";
    cout << weather <<endl;
     return 0;
}