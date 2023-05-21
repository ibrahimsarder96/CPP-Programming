#include<iostream>
#include <string.h> // C er string hearder file
using namespace std;
int main()
{
  char s[100];
  cin.getline(s,100); //getline diye string er space soho print kora hoy
  cout<<strlen(s);
  return 0;
}