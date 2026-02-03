#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // printing
    for(int i = 0; i < n; i++) {
        cout << arr[i];
        if(i < n-1) cout << " ";
    }
    cout << endl;
    return 0;
}