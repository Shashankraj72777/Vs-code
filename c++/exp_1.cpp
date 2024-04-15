#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    int sum=0;
    while(i<=n)
    {
      int no;
      cin >> no;
      sum = sum + no;
      i = i+1;
    }
    cout << sum <<endl;
     return 0;
}