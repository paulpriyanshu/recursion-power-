#include<iostream>
using namespace std;

int exp(int n){
    int ex;
    if(n==0){
        return 1;
    }
    ex=2*exp(n-1);

    return ex;

}

int main (){
    int n=4;
    cout<<exp(n);


}