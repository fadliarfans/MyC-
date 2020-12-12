#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int i;
    long int li;
    char c;
    float f;
    double d;
    cin>>i>>li>>c>>f>>d;
    cout<<i<<endl<<li<<endl<<c<<endl;
    cout<<setprecision(3)<<fixed;
    cout<<f<<endl;
    cout<<setprecision(9)<<fixed;
    cout<<d<<endl;
    return 0;
}


