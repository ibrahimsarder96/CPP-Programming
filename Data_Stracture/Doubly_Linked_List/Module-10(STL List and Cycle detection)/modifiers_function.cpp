#include<bits/stdc++.h>
using namespace std;
main()
{
  list <int> myList = {10, 20, 30, 40};
  // list <int> newList;
  // newList = myList;
  // newList.assign(myList.begin(),myList.end());
  // myList.push_back(100);
  // myList.push_front(100);
  // myList.push_front(100);
  // myList.pop_back();
  // myList.pop_back();
  // myList.pop_front();
  // myList.insert(next(myList.begin(),3 ),200);
  myList.erase(next(myList.begin(),  2));
  for(int val: myList){
    cout<< val << endl;
  }
  return 0;
}