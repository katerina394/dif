#include "StdAfx.h"
#include "paraboldif.h"

paraboldif::~paraboldif(void)
{
}
vector<vector<double>> paraboldif::calc(double Tmax, double dT, double h) {
	int m = Tmax/dT + 1;
	int n = 2*max/h + 1;
	vector<vector<double>> s(m, vector<double>(n));
	for (int j = 0; j < n; ++j)
		s[0][j] = f(-max + h*j);
	for (int i = 0; i < m; ++i) {
		s[i][0] = bcond1;
		s[i][n-1] = bcond2;
	}
	for (int i = 1; i < m; ++i)
		for (int j = 1; j < n-1; ++j)
			s[i][j] = s[i-1][j] + p*dT/(h*h)*(s[i-1][j+1] - 2*s[i-1][j] + s[i-1][j-1]);
	return s;
}