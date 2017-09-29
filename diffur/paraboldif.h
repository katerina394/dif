#pragma once
#include <stdlib.h>
#include <vector>
using namespace std;
class paraboldif {
public:
	double p;
	double (*f)(double);
	double max;
	double bcond1, bcond2;
	paraboldif(double P, double (*F)(double), double _max, double _bcond1, double _bcond2): p(P), f(F), max(_max), bcond1(_bcond1), bcond2(_bcond2) {}
	~paraboldif(void);
	vector<vector<double>> calc(double Tmax, double dT, double h);
};

