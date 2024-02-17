#include <iostream>
using namespace std;

int SeachElement( int arr[] , int n , int search){
        for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
          return i;
       
    }
    return -1;
}

int main()
{
    int search, arr[100], n;

    cout << "Enter the size of array:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search:";
    cin >> search;

  int position= SeachElement(arr,n,search);

  if(position== -1){
    cout<<"Not Found";
  }else{
    cout<<"Found at index:"<<position;
  }



    return 0;
}