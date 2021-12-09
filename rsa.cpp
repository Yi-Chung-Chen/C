#include <iostream>


using namespace std;
int power (int a,int b ){
    int sum = 1;
    for(int i=0;i<b;i++){
        sum=sum*a;
    }
    return sum;
}


int main()
{
    int p,q,m,e,n,fn,d,g,k;

    cout<<"enter p,q m,e:";//remember p and q must be prime number.
    cin>>p>>q>>m>>e;


    n=p*q;
    fn=(p-1)*(q-1);
    int c=100;
    for(k=0;k<100;k++){
        if((fn*k+1)%e==0){
            if(c>k){
                c=k;//we get min k. You can get other k value if you want.
            }
        }
    }

    d=(fn*c+1)/e;
    g=power(m,e);
    cout<<"public key: "<<e<<","<<n<<endl;
    cout<<"private key: "<<d<<","<<n<<endl;
    cout<<"cipher text: "<<g%n;


    return 0;
}
