ZZ cryptoAlgo::dlp(){
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
                return x;            
    }
        }
        return p;
}
