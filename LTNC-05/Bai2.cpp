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
    sort(a.begin(),a.end());
    for (auto p:a){
        cout<<p<<' ';
    }
    return 0;
}
