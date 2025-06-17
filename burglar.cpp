#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    vector<pair<int,int>> v(m);
    
    for (int i  = 0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        
        v[i] = {b, a};
    }
    
    sort(v.rbegin(), v.rend());
    
    int total_matches = 0;
    for (int i = 0; i<m && n>0; i++) {
        int boxes_to_take = min (n, v[i].second);
        total_matches += boxes_to_take*v[i].first;
        n-=boxes_to_take;
    }
    
    cout<<total_matches;
    return 0;
}
