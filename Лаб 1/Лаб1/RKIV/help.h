#pragma once



double Fs(int x, int n, std::vector<int> prob) // n = imax
{
	double res = 0;
	for (int i = 0; i <= x; i++)
	{
		if (prob[i] != 0)
			res = res + (double)prob[i]/n;
	}
	return res;
}

double F(int x, std::vector<double> prob) // n - с клавиатуры теоретическая
{
	double res = 0;
	for (int i = 0; i <= x; i++)
	{
		if (prob[i] != 0)
			res += prob[i];
	}
	return res;
}

double F3(double x, double p)
{
	double res = 0;
	for (int i = 0; i <= (int)x; i++)
	{
		if (i!=(int)x)
			res += (1 - p)*pow(p, i); 
		else if (i == (int)x)
			res += pow(p, i) + (1 - p)* pow(p, i - 1);
	}
	return res;
}

double GAMMA(double x) // гамма ф-ия
{
	double res = 1.0;
	while (x != 1.0 && x != 0.5)
	{
		res = res * (x - 1);
		x--;
	}
	if (x == 0.5)
		res *= sqrt(M_PI);
	return res;
}

double XIplotnost(double x, double r)// плотность хи2
{
	double res;
	if (x == 0)
		res = 0;
	else
		res = pow(2, -r / 2)*pow(GAMMA(r / 2), -1)*pow(x, r / 2 - 1)*exp(-x / 2);
	return res;
}

double FR0(double r0, double r) // F(R0)
{
	double res = 0.0;
	int n = 100;
	for (int i = 1; i <= n; i++)
	{
		res = res + (XIplotnost(r0*(i - 1) / n, r) + XIplotnost(r0*i / n, r))*r0 / (2 * n);
	}
	res = 1 - res;
	return res;
}