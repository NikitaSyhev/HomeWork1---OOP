#include "Fraction.h"




Fraction::Fraction(int numerator, int denominator)
{
	 {
		_denominator = denominator;
		_numerator = numerator;
	}
}

int Fraction::getNumerator()
{
	return _numerator;
}

void Fraction::setDenominator(int denominator)
{
	_denominator = denominator;
}

int Fraction::getDenominator()
{
	return _denominator;
}

void Fraction::setNumerator(int numerator)
{
	_numerator = numerator;
}

double Fraction::operator/(Fraction& other)
{
		double Res((_numerator * other._denominator)/
			(_denominator * other._numerator));
		return Res;
	
}

double Fraction::operator*(Fraction& other)
{
	double Res((_numerator * other._numerator) /
		(_denominator * other._denominator));
	return Res;
}

double Fraction::operator+(Fraction& other)
{

	double Res(((_numerator * (_denominator * other._denominator) / _denominator)) + ((other._numerator) * (_denominator * other._denominator) / other._denominator)
	/ (_denominator * other._denominator));
	return Res;
}

double Fraction::operator-(Fraction& other)
{
	double Res(((_numerator * (_denominator * other._denominator) / _denominator)) - ((other._numerator) * (_denominator * other._denominator) / other._denominator)
		/ (_denominator * other._denominator));
	return Res;
}

