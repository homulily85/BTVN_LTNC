#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,string> t{};
    string x,y;
    int q,n;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>x>>y;
        t[x]=y;
    }
    string a{};
    while (cin>>a) {
        if (t.count(a)) cout<<a<<'='<<t[a]<<'\n';
        else cout<<"Not found\n";
    }
    return 0;
}