#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a{};
    string b{};
    cin>>a>>b;
    cout<<a.length()<<' '<<b.length()<<'\n'<<a+b;
    char t=a[0];
    a[0]=b[0];
    b[0]=t;
    cout<<'\n'<<a<<' '<<b;
    return 0;
}
