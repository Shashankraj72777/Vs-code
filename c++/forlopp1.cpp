#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++) { 
        int no;
        cin >> no;
        if (no % 2 == 0) {
            sum = sum + no;
        }
    }
    cout << "sum of evens: " << sum << endl;
    return 0;
}
