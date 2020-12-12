#include <iostream>
#include <string>
using namespace std;

int main() {
  string a,b;
  int x,y;
  char q;
  
  cin>>a>>b;
  x=a.size();
  y=b.size();
  cout<<x<<" "<<y<<endl;
  cout<<a+b<<endl;
  q=a[0];
  a[0]=b[0];
  b[0]=q;
  cout<<a<<" "<<b;
  
  
  
  
  
    return 0;
}
