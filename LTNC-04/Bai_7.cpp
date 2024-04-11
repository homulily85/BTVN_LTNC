#include <iostream>
#include <vector>
using namespace std;

int main(){
    int w,h;
    cin>>w>>h;
    vector<vector<char>> matrix{h+1,vector<char>(w)};
    for (int i=0;i<h;i++){
        for (int j=0;j<w;j++){
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<w;i++){
        matrix[h][i]='E';
    }
    int x=0,y=0;
    for (int i=0;i<w;i++){
        if (matrix[x][i]=='Y') {
            y=i;
            break;
        }
    }
    vector<bool> reachable(w,false);
    reachable[y]=true;
    for (int i=x;i<h;i++){
        vector<bool> reachable_temp(w,false);
        for (int j=0;j<w;j++){
            if (j==0) reachable_temp[j]=(reachable[j]&&matrix[i+1][j]!='R')||(reachable[j+1]&&matrix[i][j]!='R'&&matrix[i+1][j]!='R');
            else if (j==w-1) reachable_temp[j]=(reachable[j]&&matrix[i+1][j]!='R')||(reachable[j-1]&&matrix[i][j]!='R'&&matrix[i+1][j]!='R');
            else reachable_temp[j]=(reachable[j]&&matrix[i+1][j]!='R')||(reachable[j+1]&&matrix[i][j]!='R'&&matrix[i+1][j]!='R')||(reachable[j-1]&&matrix[i][j]!='R'&&matrix[i+1][j]!='R');
        }
        reachable=reachable_temp;
    }
    for (auto p:reachable){
        if (p==true) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}