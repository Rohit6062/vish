#include<iostream>
#include<NTL/ZZ_p.h>
using namespace std;
using namespace NTL;
int main(){
    ZZ p = conv<ZZ>("10000000001");
    ZZ_p :: init(p);   

    ZZ_p A,B,g;
    ZZ a,b;

    g = conv<ZZ_p>("100001");
    a = conv<ZZ>("10000001");
    b = conv<ZZ>("1000000001");
    A = power(g,a);
    B = power(g,b);

    ZZ_p k1,k2;
    k1 = power(B,a);
    k2 = power(A,b);
    cout << "key 1: "<<k1<<"\tkey 2: "<<k2<<endl;
    return 0;
}
