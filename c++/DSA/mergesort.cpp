#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;

    while(i<n && j<m){
        if(arr1[i] <arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n){
        arr3[k++] = arr1[i++];
    }

    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

void print(int res[], int n) {
    for(int i=0; i<n; i++){
        cout<< res[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[3] = {1,2,3};
    int arr2[4] = {6,8,9,5};

    int arr3[7] = {0};

    merge(arr1, 3, arr2, 4, arr3);
    print(arr3, 7);
     return 0;
}
