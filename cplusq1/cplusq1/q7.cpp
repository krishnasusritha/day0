#include <iostream>
//#include <math.h>
using namespace std;

class matrix
{
	int m;
	int n;
	int **x;
public:
	matrix()
	{
		m = 0;
		n = 0;
		
	}
	matrix(int a, int b)
	{
		m = a;
		n = b;
		x = new int*[m];
		for (int i = 0; i < m; i++)
			x = new int[n];
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> x[i][j];
			}
		}
	}
	friend void mul(matrix a, matrix b);
};
void mul(matrix a, matrix b)
{
	int temp=0;
	/*if (a.n == b.m)
	{
		matrix c;
		c = new int*[a.m];
		for (int i = 0; i < a.m; i++)
			c = new int[b.n];*/
		for (int i = 0; i < a.m; i++)
		{
			for (int j = 0; j < b.n; j++)
			{
				for(int k=0;k<a.n;k++)
				temp += a[i][k] * b[k][j];
			}
			cout << temp;
		}
		
	}
}
int main()
{
	matrix a(2, 3), b(3, 2);
	mul(a, b);
}