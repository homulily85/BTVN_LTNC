#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string,int> a;
    int q;
    cin>>q;
    for (int i=0;i<q;i++){
        int x,z;
        string y;
        cin>>x>>y;
        if (x==1) {
            cin>>z;
            a[y]=a[y]+z;
        }
        else if (x==2) a.erase(y);
        else if (x==3) {
            if (a.find(y)==a.end()) cout<<0<<'\n';
            else cout<<a[y]<<'\n';
        }
    } 
    return 0;
}