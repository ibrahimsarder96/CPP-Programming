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
  int size;
  cin>>size;
  int * b = new int[size];
  for(int i = 0; i < size; i++)
  {
    b[i] = a[i];
  }
  b[5] = 60;
  b[6] = 70;
  for(int i = 0; i < size; i++)
  {
    cout<<b[i]<<endl;
  }
  return 0;
}