#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int a,b;
    string x;
    cin>>a;
    b=a % 7;
    switch(b)
    {
        case 1: x="SENIN";break;
        case 2: x="SELASA";break;
        case 3: x="RABU";break;
        case 4: x="KAMIS";break;
        case 5: x="JUMAT";break;
        case 6: x="SABTU";break;
        case 0: x="MINGGU";break;
    
    }
    cout<<x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

