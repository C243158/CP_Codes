// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n, h;
    cin>>n>>h;
    int ans = 0;
    vector<int> v(n);
    
    for (int i = 0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i = 0; i<n; i++) {
        if(v[i] <= h) {
            ans = ans + 1;
        }
        else {
            ans = ans + 2;
        }
    }
    
    cout<<ans;
    return 0;
}
