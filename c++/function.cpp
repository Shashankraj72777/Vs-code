//Functions is a specific set of instructions to perform awell defined task.
// 1. Declaration
//---> Return type
//---> Name of the function
//---> Set of parameter
//Q. Declare a method that adds two integers given to it.
//--> int addNumbers(int a, int b)
// int ---> return type of a function
// addNumbers ---> name of the function
// (inta, intb) ---> set of parameters
//  method  <---->  Function
// method ---> actual logic/functionality of the function/method
//Function arguments ---> used while calling a method
//Parameters ---> used while declaring a method
#include<iostream>
using namespace std;
    float add(float a, float b, float c){
        return (a+b+c);
    }

    int main(){
        float sum;
        sum = add(90.8,55.7,87.9);
        cout<<"90.8+55.7+87.9="<<sum<<endl;
        return 0;
    }

