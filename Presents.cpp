
#include <iostream>
#include <vector>
using namespace std;
int main() {
int n;
cin>>n;
vector<int> v(n);
for (int i = 0; i<n; i++){
    int p;
    cin>>p;
    v[p-1] = i+1;
}
cout<<endl;
for(auto i : v){
    cout<<i<< " ";
}
    return 0;
}
