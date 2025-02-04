#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout << " Size of array is : " << n << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
}

bool linearSearch(int *arr, int size, int k){
    //base case
    if(size == 0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}
int main()
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int key = 8;

    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout << "found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

     return 0;
}