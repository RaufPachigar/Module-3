#include<iostream>
using namespace std;
int main()
{

    int a[2][2], b[2][2], sum[2][2],i,j;

    cout << "\nEnter the 2*2 elements of first matrix : \n";


        for(i=0;i<2;i++)
		{
	    for(j=0;j<2;j++)
	     {
		      cin>>a[i][j];
		
	      }
        }

    cout << "\nEnter the 2*2 elements of second matrix : \n";

        for(i=0;i<2;i++)
		{
	      for(j=0;j<2;j++)
	    {
		cin>>b[i][j];
		
	    }
        }

        for(i=0;i<2;i++)
		{
	    for(j=0;j<2;j++)
	    {
		     sum[i][j]=a[i][j] + b[i][j];
		
        }
        }

        cout << "\n\nThe Sum matrix is : \n";

            for (i=0; i<2; i++) 
			{
            for (j=0; j<2; j++) 
			{
            cout << sum[i][j] << "  ";
            }

        cout << endl;
            }

         cout << "\n\n";

    return 0;
}
