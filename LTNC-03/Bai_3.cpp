#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string t1{s.substr(0,2)};
    string t2{s.substr(2,6)};
    string t3{s.substr(8,2)};
    int a{stoi(t1)};
    if (t3=="PM"&&a!=12) a+=12;
    if (t3=="AM"&&a==12) a=0;
    string t4{to_string(a)};
    if (a<10) t4="0"+t4;
    return t4+t2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
