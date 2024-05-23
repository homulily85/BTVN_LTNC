#include <iostream>
#include <queue>
#include <vector>
using namespace std;

constexpr int DIGITS_SUM{6};

int main(){
    vector<int> digits{1,3,5};
    queue<pair<int,int>> t{};
    t.push({0,0});
    while (!t.empty())
    {
        pair<int,int> a=t.front();
        for (auto p:digits){
            if (a.second+p<DIGITS_SUM) {
                pair<int,int> b{a.first*10+p,a.second+p};
                t.push(b);
            }
            else if (a.second+p==DIGITS_SUM) cout<<a.first*10+p<<' ';
        }
        t.pop();
    }
    return 0;
}