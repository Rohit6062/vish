#include<iostream>
#include<NTL/ZZ_p.h>
#include<string>
using namespace std;
using namespace NTL;
void d :: setgh(ZZ x,ZZ_p g,ZZ_p h,string w,string y){
    g = conv<ZZ_p>(y);
    x = conv<ZZ>(w);
    h = power(g,x);
}

