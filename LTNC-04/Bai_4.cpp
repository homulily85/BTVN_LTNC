#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q;
    cin>>n>>q;
    vector<vector<int>> arr{};
    for (int i=0;i<n;i++){
        arr.push_back(vector<int>{});
    }
    for (int i=0;i<n;i++){
        int k{},t{};
        cin>>k;
        for (int j=0;j<k;j++){
            cin>>t;
            arr[i].push_back(t);
        }
    }
    for (int i=0;i<q;i++){
        int a{},b{};
        cin>>a>>b;
        cout<<arr[a][b]<<'\n';
    }
    return 0;
    
}