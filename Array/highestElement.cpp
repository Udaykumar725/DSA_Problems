#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 34, 56, 766, 9};
    int ans=INT16_MIN;

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>ans)
        {
            ans= arr[i];
        }
        
    }
    cout << ans << endl;
    return 0;
}