#include<bits/stdc++.h>
using namespace std;
main()
{
  list <int> myList = {10, 20, 30, 40};
  myList.remove(10);
  for(int val: myList){
    cout<< val << endl;
  }
  return 0;
}