/*
Display this pattern :

1
1 3
1 3 5
1 3 5 7

till n rows.
*Use nested for only.

Author : @ChaitanyaJoshiX
*/
#include <iostream>
using namespace std;
main()
{
    int i,j,k,n;
    cout << "Enter n terms : ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        k = 1;
        for(j=1;j<=i;j++)
        {
            cout << k << " ";
            k += 2;
        }
        cout << endl;
    }

} 
