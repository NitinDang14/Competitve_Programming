#include <iostream>
using namespace std;

int fastPower(int a,int b){
    //Base Case
    if(b==0){
        return 1;
    }
    int smallValue = fastPower(a,b/2);
    smallValue *= smallValue;

    if(b%2==1){
        return a*smallValue;
    }
    return smallValue;
}

//Fast Power using Bitmasking 
int fastPowerBitmasks(int a,int b){
    
    int res =1;
    while(b>0){

        int last_bit = (b&1);
        if(last_bit){
            res *= a;
        }
        a = a*a;
        b = b>>1;
    }
    return res;
}


int main() {
    cout<<fastPowerBitmasks(2,5)<<endl;
}
