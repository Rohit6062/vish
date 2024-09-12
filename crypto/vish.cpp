#include"crypto.h"
#include"dlp.cpp"
#include"diff_hell.cpp"
#include"el_gamal.cpp"
int main(){
    cryptoAlgo a;
    ZZ p = conv<ZZ>("11");
    ZZ_p::init(p);
    a.el_gamal();
    return 0;
}
