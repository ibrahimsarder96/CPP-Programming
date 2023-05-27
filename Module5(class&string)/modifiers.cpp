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
  string p = "Software engineer";
  p.erase(4,3); // erase built in function
  p.replace(0,8,"Developer"); // replace built in function
  p.insert(1,"ibrahim"); // insert built in function
  cout<<p<<endl;
  return 0;
}