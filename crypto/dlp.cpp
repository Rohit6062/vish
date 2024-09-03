#include<iostream>
#include<NTL/ZZ_p.h>
#include"d.h"
#include"initiate.cpp"
#include"setgh.cpp"
#include"findroot.cpp"
using namespace std;
using namespace NTL;

int main(){
    /*ZZ p = conv<ZZ>("101");
    ZZ_p:: init(p);

    ZZ_p g,h;
    ZZ x;
    g = conv<ZZ_p>("2");
    x = conv<ZZ>("99");
    h = power(g,x);

    ZZ_p pow ;
    for (x = 0; x < p; x++){
        pow = power(g,x);
        if(pow == h){
            cout << "root is: " << x << endl;
            break;
        }
    }*/
    ZZ p,x;
    ZZ_p g,h;
    string s,t;
    cout << "enter prime: "<<endl;
    cin >> s;
    d dlp;
    dlp.initiate(s,p);
    
    cout << "enter generator:" << endl;
    cin >> s;
    cout << "enter root: " << endl;
    cin >> t;
    dlp.setgh(x,g,h,t,s);

    cout << "root is : "<< dlp.findroot(p,g,h)<< endl;
}
