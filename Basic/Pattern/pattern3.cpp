#include<iostream>

int main(){

    int n;

    std::cout<<"Enter no. of rows:";
    std::cin>>n;

   for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
        std::cout<<j;
      }
    std::cout<<"\n";
   }


    return 0;
}