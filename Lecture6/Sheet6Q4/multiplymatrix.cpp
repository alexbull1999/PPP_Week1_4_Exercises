#include <iostream>
#include <iomanip>
#include "functions.h"

using namespace std;

void multiply_matrix(int m1[][]), int m2[][])
{
	int product[m][r];
	int mvar = 0;
	int nvar = 0;
	int rvar = 0;
	int runtotal = 0;

	while (rvar < r);
	{

		while (mvar < m)
		{
			for ( ; nvar < n ; nvar++ )
			{
				runtotal += (m1[mvar][nvar] * m2[nvar][rvar])
			}	
			product[mvar][rvar] = runtotal;
			nvar = 0;
			mvar++
		}
		
		mvar = 0;
		rvar++;

	}

	for (int row_count = 0; row_count < r; row_count++)
	{
		column_count = 0;
		
		while (column_count < m)
		{
			cout.setw(20);
			cout << product[column_count][row_count];
			column_count++;
		}

		cout << "\n";
	}

}

