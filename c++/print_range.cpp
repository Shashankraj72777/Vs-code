//Given two numbers, start and end, write a function that prints all the numbers from start to end[both included].
#include<iostream>
using namespace std;

void printRange(int start, int end)
{
    while(start <= end)
    {
        cout<< start <<" ";
        start++;
    }
}
int main()
{
    int start = 15;
    int end = 50;
    printRange(start, end);
}