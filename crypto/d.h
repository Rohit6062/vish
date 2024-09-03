#include<iostream>
#include<string>
#include<NTL/ZZ_p.h>
using namespace std;
using namespace NTL;
class d{
public:
    void initiate(string x,ZZ p);
    void setgh(ZZ x,ZZ_p g,ZZ_p h,string w,string y);
    ZZ findroot(ZZ p,ZZ_p g,ZZ_p h);
};
