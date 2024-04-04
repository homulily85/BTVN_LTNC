#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>a{};
    vector<int>b{};
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int t;
        cin>>t;
        a.push_back(t);
    }
    for (int i=0;i<=n;i++){
        int t;
        cin>>t;
        b.push_back(t);
    }
    map<int,int> x{};
    map<int,int> y{};
    for (auto p:a){
        x[p]++;
    }
    for (auto p:b){
        y[p]++;
    }
    for (auto p:y){
    if (p.second-x[p.first]){
        cout<<p.first;
        return 0;
    }
    }
    return 0;
}
