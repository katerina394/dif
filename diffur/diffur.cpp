// diffur.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "paraboldif.h"
#define _USE_MATH_DEFINES
#include <math.h>
#define MAX 1
double InitCond(double x) {
	if (((x >= -MAX) && (x <= -MAX/2)) || (x >= MAX/2) && (x <= MAX)) {
		return 0;
	} else {
		if ((x >= -MAX/2) && ( x <= MAX/2)) {
			return cos(x*M_PI/MAX);
		} else {
			throw 1;
		}
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	paraboldif A(5.0, InitCond, MAX, 0, 0);
	vector<vector<double>> res = A.calc(1.0, 0.000001, 0.001);
	return 0;
}

