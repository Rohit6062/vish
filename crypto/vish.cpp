#include<iostream>
#include<NTL/ZZ.h>
#include<NTL/ZZ_p.h>
#include<string>
using namespace std;
using namespace NTL;

class crypto{
    public:
    ZZ p,x;
    ZZ_p g,h,pow;
    ZZ dlp(){
        cout<<"enter value of p\n";
        cin>>p;
        p = conv<ZZ>(p);
        ZZ_p::init(p);
        cout<<p<<endl;
        cout<<"enter generator: "<<endl;
        cin>>g;
        cout<<"enter root : "<<endl;
        cin>>x;
        h = power(g,x);
        for(x = 0; x < p ; x++){
            pow = power(g,x);
            if(pow == h){
                return x;            }
        }
        return p;
    }
};

