#include<bits/stdc++.h>
using namespace std;
int main(){
    // int = 9-10 digits , long = 10-19 digits , long long = 19+ digits
    int x=9;
    long y=987654321;
    long long z=8765432145678;
    cout<<x<<" "<<y<<" "<<z<<endl;

    // float = upto certain decimal  , double = more precise 
   float a;
   double b;
   cin>>a>>b;
   cout<<a<<" "<<b<<endl;

   // char
   char ch='k';
  cout<<ch<<endl;
  cin.ignore();   // used to avoid buffer in taking i/p

   // string using getline
   string s;
   getline(cin,s);
   cout<<s<<endl;
    return 0;
}