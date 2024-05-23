#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int x{};
    double y{};
    string z{};
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>x>>y;
    cin.ignore(1);
    getline(cin,z);
    // Print the sum of both integer variables on a new line.
    cout<<i+x<<'\n';
    // Print the sum of the double variables on a new line.
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<y+d<<'\n';
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<<s+z;
    return 0;
}