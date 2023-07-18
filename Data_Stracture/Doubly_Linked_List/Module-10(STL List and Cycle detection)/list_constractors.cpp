#include<bits/stdc++.h>
using namespace std;
main()
{
  // list<int> myList;
  // list<int> myList(10, 5);
  // list<int> list2 = {2, 3, 5, 5};
  //  list<int> myList(list2);
  // int a[3]={10, 20, 30};
  // list<int> myList(a, a + 3);
  vector <int> v={10, 20, 30};
   list<int> myList(v.begin(),v.end());
  // for(auto it=myList.begin(); it != myList.end(); it++){
  //   cout<<*it<<endl;
  // }
  for(int val: myList){
    cout<< val << endl;
  }

  return 0;
}