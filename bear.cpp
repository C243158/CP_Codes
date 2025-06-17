#include<iostream>
#include<vector>
using namespace std;

int main () {
    int n, a, count = 0;
    cin>>n>>a;
    
    vector<int> v(n+1);
    
    for (int i = 1; i<=n; i++) {
        cin>>v[i];
    }
    
    if (v[a] == 1) ++count;
    
    for (int i = 1; i<= max(a - 1, n - a); i++) {
        if (v[a+i] == 1 && v[a-i] == 1 && (a-i) > 0 &&  (a + i) <=n) count+=2;
        else if ((a-i) <=0 && v[a+i] == 1) ++count;
        else if ((a+i) > n && v[a-i] == 1) ++count;
    }
    
    cout<<count;
    return 0;
}
