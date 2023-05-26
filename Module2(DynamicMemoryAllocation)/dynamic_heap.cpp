#include<bits/stdc++.h>
using namespace std;
main()
{
  int *a = new int; // syntax dynamic memory----
  *a = 100;
  cout<<*a;
  float *f = new float;
  *f = 2.50;
  cout<<*f;
  delete[] a; // Deallocate the dynamically allocated variable
  return 0;
}