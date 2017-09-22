#include <iostream>

using namespace std;
int modulo(int a ,int b){
    int q;
    if(a>0){
        q=a/b;
        return a-q*b;
    }
    modulo(a+b,b);
}
int euclides(int a,int b){
    if(b==0){
        return a;
    }
    euclides(b,modulo(a,b));
}
int inver_desa(int a,int b,int p0=0,int p1=1){
    int q,r;
    static int s=a;
    int p;
    if(b==1){
        return modulo(p1,s);
    }else{
        q=a/b;
        r=a-q*b;
        p=p0-q*p1;
        p0=p1;
        p1=p;
        inver_desa(b,r,p0,p1);
    }
}
int inver(int a ,int b){
        if(euclides(b,a)!=1){
            return 0;
        }else{
            return inver_desa(b,a);
        }
}
int main(){

    return 0;
}
