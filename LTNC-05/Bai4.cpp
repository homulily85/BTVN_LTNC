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
    int q;
    cin>>q;
    for (int i=1;i<=q;i++){
        int x;
        cin>>x;
        vector<int>::iterator p=lower_bound(a.begin(),a.end(),x);
        if (*p==x) cout<<"Yes ";
        else cout<<"No ";
        cout<<(p-a.begin()+1)<<'\n';
    }
    return 0;
}
