#include<bits/stdc++.h>
using namespace std;
class Students{
  public:
  string nm;
  int cls;
  string s;
  int id;
  int math_marks;
  int eng_marks;
};
bool cmp(Students a, Students b)
{
  if(a.math_marks + a.eng_marks == b.math_marks + b.eng_marks){
     return a.id>b.id;
  }
  else{ 
     return a.math_marks + a.eng_marks < b.math_marks + b.eng_marks;
  }
 
}
main()
{
  int n;
  cin>>n;
  Students a[n];
  for(int i = 0; i < n; i++)
  {
    cin>>a[i].nm;
    cin>>a[i].cls;
    cin>>a[i].s;
    cin>>a[i].id;
    cin>>a[i].math_marks;
    cin>>a[i].eng_marks; 
  }
  // sort
  sort(a, a+n, cmp);
  for(int i = n - 1; i >= 0; i--)
  {
    cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
  }
  return 0;
}