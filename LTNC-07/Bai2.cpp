#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main(){
    vector<char> t{'a','b','c','d'};
    auto n{t.size()};
    set<string> ans{};
    string a{};
    for (int i=0;i<n;i++){
        a.push_back(t[i]);
        for (int j=0;j<n;j++){
            a.push_back(t[j]);
            for (int k=0;k<n;k++){
                a.push_back(t[k]);
                ans.insert(a);
                a.pop_back();
            }
            a.pop_back();
        }
        a.pop_back();
    }
    for (auto p:ans){
        cout<<p<<' ';
    }
}