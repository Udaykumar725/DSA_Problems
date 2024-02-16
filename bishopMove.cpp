#include<iostream>
using namespace std;

int bishopMove(int r, int c){
       int count=0;

       count+=min(r-1,c-1); //top-left move
       count+=min(8-r,8-c); //bottom-right move
       count+=min(r-1,8-c); //top-right move
       count+=min(8-r,c-1); //bottom-left move
    


       return count;
}

int main(){

    int r, c;
    cin>>r>>c;

    cout<< bishopMove(r,c)<<endl;


    return 0;
}