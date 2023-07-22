#include <iostream>
using namespace std;
#include <vector>

bool find(vector<int> &a, int x){
  int left=0;
  int right=(int)a.size()-1;
  while(left<=right){
    int m=(right+left)/2;
    if(a[m]<x){
      left=m+1;
    } else if(a[m]>x){
      right=m-1;
    } else {
      return true;
    }
  }
  return false;
}

int main(){
  int n,k;
  cin>> n>>k;
  vector<int> a(n);
  for(int i=0; i<n;i++) cin>> a[i];
  while(k--){
    int x;
    cin>>x;
    if(find(a,x)){
      cout<<"Yes\n";
    } else{
      cout<< "No\n";
    }
  }
  return 0;
}
