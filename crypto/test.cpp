#include"vish.cpp" 
ZZ pw(ZZ a,ZZ b){
    ZZ output = conv<ZZ>("1");
    while(b>0){
        output=output*a;
        b=b-1;
    }
    return output;
}
int main(){
    crypto a;
    int x;
    ZZ tmp1 = conv<ZZ>("2");
    ZZ tmp2 ;
    tmp2 = 1;//conv<ZZ>("1");
    for(x=1;x<8;x++){
        tmp2 = pw(tmp1,tmp2) - 1;
        cout<<tmp2<<"tmp2\n";
    }
    return 0;
}
