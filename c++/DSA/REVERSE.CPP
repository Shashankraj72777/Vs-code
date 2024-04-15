#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int start=0, end=v.size()-1;

    while(start<=end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(89);
    v.push_back(56);
    v.push_back(45);
    v.push_back(34);
    v.push_back(98);
    v.push_back(23);

    vector<int> res = reverse(v);

    print(res);

    return 0;
}