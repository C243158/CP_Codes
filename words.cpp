#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>

using namespace std;

int main () {
    string s;
    cin>>s;
    
    int upcount = 0;
    int lowcount  = 0;
    
    for (int i = 0; i<s.size(); i++) {
        if (islower(s[i])) lowcount++;
        else upcount++;
    }
    
    if (lowcount >= upcount) {
        
        transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) {return tolower(c);}
        );
        cout<<s;
    }
    
    else {
        transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c) {return toupper(c);}
        );
        cout<<s;
    }
    
    return 0;
}
