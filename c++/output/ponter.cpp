#include<iostream>
using namespace std;
int main()
// {
//     int num = 5;
//     cout << "address of num is" << &num << endl;

//     int *ptr = &num;
//     cout << "Value is" << *ptr << endl;
//     return 0;
// }
{
int num =5;
int a = num;
int *p = &num;
int *q = p;
cout << *p << "-" << q << endl;
 return 0;
}