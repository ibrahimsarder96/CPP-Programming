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
  // sorting bult in function 
  sort(arr,arr+n);
  for(int i = 0; i < n; i++)
  {
  cout<<arr[i]<<" ";
  }

  return 0;
}