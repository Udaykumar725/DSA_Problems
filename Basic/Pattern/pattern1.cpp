#include<iostream>

using namespace std;

int main(){

    int n;
    cout<< "Enter no of rows:";
    cin>>n;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
          cout<<"*";
        }
        cout<<endl;
    }


    return 0;
}