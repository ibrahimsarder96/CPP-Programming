#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  cin>>n;
  int * a = new int[n];  

  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for(int i = 0; i < n; i++)
  {
    cout<<a[i]<<endl;
  }
  delete[] a;
  return 0;
}