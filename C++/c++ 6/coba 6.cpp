#include <iostream>

using namespace std;


/*
 * Complete the simpleArraySum function below.
 */

int simpleArraySum(int x)
{
int a[x],b=0;
for(int i=0;i<x;i++)
  {
      cin>>a[i];
      b+=a[i];
 
  }
  return b;
}


int main()
{
    short int n;
    cin>>n;
    cout<<simpleArraySum(n);
    return 0;
}

