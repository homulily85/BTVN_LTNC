#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    try {
        long t=stoi(S);
        cout<<t;
    } catch (exception) {
        cout<<"Bad String";
    }
    return 0;
}
