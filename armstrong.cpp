#include<iostream>
using namespace std;

bool armstrong(int a){
    int ans=0, rem;
    while(a){
        a= a/10;
        rem= a%10;
        ans= ans*10 + rem;
    }

    if(a == ans){
        return true;
    }else {
        return false;
    }


}

int main(){

    int a;
    cin>>a;

    cout<<armstrong(a)<<endl;

    return 0;
}