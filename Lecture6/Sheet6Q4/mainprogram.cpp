#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

const int m = 5;
const int n = 4;
const int r = 3;

void multiply_matrix(int m1[][n], int m2[][r]);

int main()
{
	int mn[m][n];
	int nr[n][r];
	int row_count;
	int column_count;

	/* Input first matrix */

	cout << "INPUT FIRST (" << m << "x" << n << ") MATRIX:\n";

	for (row_count = 0; row_count < m; row_count++)
	{
		column_count = 0;

		cout << "Type in " <<  n << " values for row " << (row_count + 1) << " separated by spaces: ";

		while (column_count < n)
		{
			cin >> mn[row_count][column_count];
			column_count++;
		}

	}

	/* Input second matrix */

	cout << "INPUT SECOND (" << n << "x" << r << ") MATRIX:\n";

	for (row_count = 0; row_count < n; row_count++)
	{
		column_count = 0;

		cout << "Type in " << r << " values for row " << (row_count + 1) << " separated by spaces: ";

		while (column_count < r)
		{
			cin >> nr[row_count][column_count];
			column_count++;
		}
	}

	/* Output first matrix */

	for (row_count = 0; row_count < m; row_count++)
	{
		column_count = 0;
		
		while (column_count < n)
		{
			cout.width(20);
			cout << mn[row_count][column_count];
			column_count++;
		}

		cout << "\n";
	}
	
	cout.setf(ios::left);
	cout << "TIMES\n";
	cout.unsetf(ios::left);

	/* Output second matrix */

	for (row_count = 0; row_count < n; row_count++)
	{
		column_count = 0;
		
		while (column_count < r)
		{
			cout.width(20);
			cout << nr[row_count][column_count];
			column_count++;
		}

		cout << "\n";
	}

	cout.setf(ios::left); 
	cout << "EQUALS\n";
	cout.unsetf(ios::left);
	
	multiply_matrix(mn, nr);

	return 0;

}

void multiply_matrix(int m1[m][n], int m2[n][r])
{
	int product[m][r];
	int mvar = 0;
	int nvar = 0;
	int rvar = 0;
	int runtotal = 0;

	while (rvar < r)
	{

		while (mvar < m)
		{
			for ( ; nvar < n ; nvar++ )
			{
				runtotal = runtotal + (m1[mvar][nvar] * m2[nvar][rvar]);
			}	
			product[mvar][rvar] = runtotal;
			runtotal = 0;
			nvar = 0;
			mvar++;
		}
		
		mvar = 0;
		rvar++;

	}

	for (int row_count = 0; row_count < m; row_count++)
	{
		int column_count = 0;
		
		while (column_count < r)
		{
			cout.width(20);
			cout << product[row_count][column_count];
			column_count++;

		}

		cout << "\n";

	}
	
	cout << "\n\n";

}

