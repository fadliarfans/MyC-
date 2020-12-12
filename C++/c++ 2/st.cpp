#include<iostream>
#include<string.h>

using namespace std;


int main()
{
char a[10]="say";
cout<<a[0];
cout<<a[1];
cout<<a[2];
char b[10]="say";
cout<<strcmp(a,b);
strcat(a,b);
cout<<a;

}
