#include<iostream>
#include<NTL/ZZ.h>
#include<NTL/ZZ_p.h>
#include<string>
using namespace std;
using namespace NTL;

class cryptoAlgo{
    public:
    ZZ p,x;
    ZZ_p g,h,pow;
    ZZ dlp();
    void diff_hell();
    void el_gamal();
    void el_gamal2();
}cry;
