#include<bits/stdc++.h>
using namespace std;
main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  for(int i = 0; i < n - 1; i++)
  {
    for(int j = 1; j < n; j++)
    {
        swap(arr[i], arr[j]);
    }
  }
  for(int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}