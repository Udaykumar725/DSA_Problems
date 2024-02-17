#include<iostream>
using namespace std;

char convert(char name){
     char ans= name- 'a'+'A';
           cout<<'a'<<endl;
     return ans;
}

int main(){
      char name;
      cin>>name;



      cout<< convert(name)<<endl;

      return 0;

}