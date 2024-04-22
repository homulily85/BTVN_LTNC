#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

long long p[33];

void power(int n){
    for (long long i=1;i<=32;i++){
        p[i]=i;
        for (int j=1;j<n;j++){
            p[i]*=i;
        }
    }
}

int powerSum(int X, int N) {
    static bool flag=true;
    if (flag) {
        power(N);
        flag =false;
    }
    static int count=0;
    static int upper=pow(X,1.0/N);
    static vector<int> t{};
    
    if (X==0) {
        count++;
        return count;
    }
    for (int i=1;i<=upper;i++){
        if ((t.empty())||(i>t[t.size()-1]&&X-p[i]>=0)){
            t.push_back(i);
            powerSum(X-p[i],N);
            t.pop_back();
        }
    }
    return count;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
