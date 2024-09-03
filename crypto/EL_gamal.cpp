#include<iostream>
#include<NTL/ZZ_p.h>

using namespace std;
using namespace NTL;
    
int main(){
    ZZ p = conv<ZZ>("17");
    ZZ_p :: init(p);

    ZZ x,y;
    ZZ_p m,g,h,c1,c2;

    m = conv<ZZ_p>("9");
    x = conv<ZZ>("5");
    g = conv<ZZ_p>("3");
    y = conv<ZZ>("6");
    //encryption
    h = power(g,x);
    c2 = power(h,y);
    c2 *(c2,m);
    c1 = power(g,y);

    //decryption
    c1 = inv(power(c1,x));
    m *(c1,c2);

    cout << "message : "<<m<<endl;
}
