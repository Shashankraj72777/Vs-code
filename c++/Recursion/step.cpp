#include<iostream>
using namespace std;

void reachHome(int src, int des){

    cout << "source" << src << " destination" << des << endl;
    if(src == des){
    cout << "Reached" << endl;
    return;
}

src++;

reachHome(src, des);
}
int main()
{
    int des = 10;
    int src = 1;

    cout << endl;
    reachHome(src, des);
     return 0;
}