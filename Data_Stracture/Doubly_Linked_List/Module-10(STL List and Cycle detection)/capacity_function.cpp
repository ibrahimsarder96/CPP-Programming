#include<bits/stdc++.h>
using namespace std;
main()
{
  list <int> myList = {10, 20, 30};
  // cout<myList.max_size();
  // myList.clear();
  myList.resize(3);
  myList.resize(5,100);
   for(int val: myList){
    cout<< val << endl;
  }
  return 0;
}