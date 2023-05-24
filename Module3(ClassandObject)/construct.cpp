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
main()
{
  Car volvo(1200, 1972, "volvo", "japan", "ibrahim");
  cout<<volvo.owner<<endl;
  cout<<volvo.country;
  return 0;
}