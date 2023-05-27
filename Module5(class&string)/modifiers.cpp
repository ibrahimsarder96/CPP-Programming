#include<bits/stdc++.h>
using namespace std;
main()
{
  string a = "concat";
  string b = "string";
  a+=b;  // easy process works
  // a.append(b);
  cout<<a<<endl;
  cout<<b<<endl;
  // insert string char--------
  string insert = "Hello";
  insert = insert + "add"; // easy process works
  insert.push_back('a'); // easy process works
  // remove string last char
  insert.pop_back(); // easy process works
  insert.pop_back();
  cout<<insert<<endl;
  return 0;
}