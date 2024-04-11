#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    set<int> a;
    for (int i=0;i<q;i++){
        int y,x;
        cin>>y>>x;
        if (y==1) a.insert(x);
        if (y==2) a.erase(x);
        if (y==3) {
            if (a.find(x)!=a.end()) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }  
    return 0;
}
