#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> a(n);
    for (auto &p:a){
        cin>>p;
    }
    int x,y,z;
    cin>>x>>y>>z;
    a.erase(a.begin()+x-1,a.begin()+x);
    a.erase(a.begin()+y-1,a.begin()+z-1);
    cout<<a.size()<<'\n';
    for (auto p:a){
        cout<<p<<' ';
    }
    return 0;
}
