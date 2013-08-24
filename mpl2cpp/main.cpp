#include <Python.h>
#include <iostream>
#include "MPLPlot.h"

int main(int argc, char *argv[])
{
	Dictionary d;
	d.add("lw", 3.1);
	d.add("color", "r");
	std::vector<double> x(100,0), y(100,0);
	for (unsigned int i = 0; i < 100; i++)
	{
		x[i] = 2*3.141592654*i/100;
		y[i] = sin(x[i])*cos(x[i]);
	}

	PyPlotter plt;
	plt.plot(x, y, &d);
	plt.show();
	
	return 0;
}