#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  cin>>n;       // first array size input
  int * a = new int[n];    // first dynamic array
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];    // first array input
  }
  int size;   // second array size input
  cin>>size;
  int * b = new int[size];    // second dynamic array
  for(int i = 0; i < n; i++)
  {
    b[i] = a[i];    // first array copy second array
  }
  b[5] = 60;    // second array value;
  b[6] = 70;
  for(int i = 0; i < size; i++)
  {
    cout<<b[i]<<endl;     // second array print;
  }
  cout<<endl;
  delete[] a;     // check first array delete;
  for(int i = 0; i < n; i++)
  {
    cout<<a[i]<<endl;     // second array print;
  }
  return 0;
}