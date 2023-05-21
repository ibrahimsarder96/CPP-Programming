#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  cin>>n;
  int * a = new int[n];  // dynamic memory er jonno pointer and (new) keyword use korte hobe

  for(int i = 0; i < 5; i++)
  {
    cin>>a[i];
  }
  for(int i = 0; i < 5; i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}