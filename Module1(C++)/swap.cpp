#include<iostream>
#include<algorithm> // swap er builtin function
using namespace std;
void my_swap(int *a, int *b)
{
  int tmp = *a;
   *a = *b;
   *b = tmp;
}
main()
{
  int a, b;
  cin>>a>>b;
  // swap(a,b);
  my_swap(&a,&b);
  cout<<a<<" "<<b;
  return 0;
}