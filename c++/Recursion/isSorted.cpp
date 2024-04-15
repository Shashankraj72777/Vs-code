#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){
    //base case
    if(size == 0 || size == 1)
       return true;

    if(arr[0]>arr[1])
       return false;

    else{
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2,3,5,7,9,};
    int size = 5;

    bool res = isSorted(arr, size);

    if(res){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
     return 0;
} 