#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i<e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int target){

    print(arr,s,e);
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == target){
         return true;
    }

    if(arr[mid] < target){
        return binarySearch(arr, mid+1, e, target);
    }
    else{
        return binarySearch(arr, s, mid-1, target);
    }
}
int main()
{

int arr[5] = {1,2,3,4,5};
int size = 5;
int key = 4;

cout << "Present or not" << binarySearch(arr, 0, size - 1, key) << endl;
     return 0;
} 