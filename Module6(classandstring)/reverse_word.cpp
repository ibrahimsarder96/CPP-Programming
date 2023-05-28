#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
  string word;
  if(ss>>word)
  {
    print(ss); // recursion pore call korle reverse hobe na
    cout<<word<<endl;
  }
}
main()
{
  string s;
  getline(cin,s);
  stringstream ss(s);
  // string word;
  // while(ss>>word){
  //   cout<<word<<endl;
  // }
  print(ss);
  return 0;
}