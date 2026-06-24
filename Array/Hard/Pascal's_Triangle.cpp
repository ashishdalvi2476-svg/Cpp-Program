#include <bits/stdc++.h>
using namespace std;

void Print_Element(){
    int row=6,col=4;
    int x=row-1,y=col-1;
    int ans=1;

    for(int i=0;i<y;i++){
        ans=ans*(x-i);
        ans=ans/(i+1);
    }

    cout<<"Element at Row & Column : "<<ans<<endl;
    cout<<endl;
}

void Print_Row(){
    int row=6;
    int ans=1;
    
    cout<<"Row Of Pascal's Triangle : ";
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
    cout<<endl;
}

void Print_Triangle(){
    int row=7;
    
    for(int i)
}

vector<long long int> Generate_Row(int row){
  long long int ans=1;
  vector<long long int> temp;
  temp.push_back(ans);
  for(int i=1;i<row;i++){
    ans=ans*(row-i);
    ans=ans/i;
    temp.push_back(ans);
  }

  return temp;
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;

  for(int i=1;i<=n;i++){
    ans.push_back(Generate_Row(i));
  }

  return ans;
}


int main(){

    Print_Element();
    Print_Row();
}

