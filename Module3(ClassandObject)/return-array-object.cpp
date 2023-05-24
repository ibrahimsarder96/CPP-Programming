#include<bits/stdc++.h>
using namespace std;
class Car{
  public:
  int price;
  int release;
  char model[100];
  char country[100];
  char owner[100];
  Car(int p, int r, char*m, char*c,char*n){
    price=p;
    release=r;
    strcpy(model,m);
    strcpy(country,c);
    strcpy(owner,n);
  }
};
  Car fun()
  {
      char name[100] = "ibrahim";
      Car volvo(1200, 1972, "volvo", "japan", name);
      return volvo;
  }
main()
{
  Car information = fun();
  cout<<information.owner<<endl;
  cout<<information.country;
  return 0;
}