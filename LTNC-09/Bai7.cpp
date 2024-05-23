#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t{};
    cin>>t;
    while (t--) {
        string s{};
        cin>>s;
        string a{},b{};
        for (int i=0;i<s.length();i++){
            if (i%2) b.push_back(s[i]);
            else a.push_back(s[i]);
        }
        cout<<a<<' '<<b<<'\n';
    }  
    return 0;
}
