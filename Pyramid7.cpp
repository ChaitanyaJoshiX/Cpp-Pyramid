/*
Display this pattern :

    *
   **
  ***
 ****
*****

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
    for(i=1;i<=n;i++) // Outer loop to iterate till n terms
    {
        for(j=1;j<=n-i;j++) // Inner Loop to print empty spaces 
        {
            cout << " "; 
        }
        for(k=1;k<=i;k++) // Inner Loop to print stars
        {
            cout << "*";
        }
        cout << endl;
    }

} 
