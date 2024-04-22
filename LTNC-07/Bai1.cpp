#include<iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> a,int key,int low=0,int high=0){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(a[mid]==key) return mid;
    if(a[mid]>key) return binarySearch(a,key,low,mid-1);
    return binarySearch(a,key,mid+1,high);
}

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    cout<<binarySearch(a,5,0,a.size()-1);
    return 0;
}