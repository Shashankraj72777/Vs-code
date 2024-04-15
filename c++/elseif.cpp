#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>80){
        cout <<"grade A";
    }
    else if(marks>60){
        cout<<"grade B";
    }
    else if(marks>40){
        cout<<"grade C";
    }
    else{
        cout<<"fail";
    }
     return 0;
}