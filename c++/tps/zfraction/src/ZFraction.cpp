#include <iostream>
#include "ZFraction.h"

/** constructor
 */
ZFraction::ZFraction() : numerator(0), denominator(1)
{
	// ...
}

/** constructor
 * \param {int} numerator.
 * \param {int} denominator.
 */
ZFraction::ZFraction(int numerator, int denominator) : numerator(numerator), denominator(denominator)
{
	// ...
}

/** constructor
 * \param {int} numerator,
 */
ZFraction::ZFraction(int numerator) : numerator(numerator), denominator(1)
{
	// ...
}

/** return the fraction numerator.
 * \return {int} ZFraction's numerator.
 */
int ZFraction::getNumerator() const 
{
	return numerator;
}

/** return the fraction denominator.
 * \return {int} ZFraction's denominator.
 */
int ZFraction::getDenominator() const {
	return denominator;
}

/** change the numerator value.
 * \param {int} newNumerator, the value to set as new numerator.
 */
void ZFraction::setNumerator(int newNumerator) 
{
	numerator = newNumerator;
}

/** change the denominator value.
 * \param {int} newDenominator, the value to set as new denominator.
 * the value cannot be 0;
 */
void ZFraction::setDenominator(int newDenominator)
{
	if (denominator != 0)
	{
		denominator = newDenominator;
	}
}

/** return the sum of the ZFraction with another one.
 * \param {ZFraction} another ZFraction 
 * \return {ZFraction} the sum of the current ZFraction with another one.
 */
ZFraction ZFraction::sumWith(ZFraction f) 
{
	int a(f.getNumerator()), b(f.getDenominator());
	int c(numerator), d(denominator);
	ZFraction result;

	if (b == d) 
	{
		result.setNumerator(a + c);
		result.setDenominator(b);
	}
	else
	{
		result.setNumerator(a*d + b*c);
		result.setDenominator(b*d);
	}

	return result;
}


/** return the product of the ZFraction with another one.
 * \param {ZFraction} another ZFraction 
 * \return {ZFraction} the product of the current ZFraction with another one.
 */
ZFraction ZFraction::productWith(ZFraction f)
{
	int a(f.getNumerator()), b(f.getDenominator());
	int c(numerator), d(denominator);
	ZFraction result;

	result.setNumerator(a*c);
	result.setDenominator(b*d);

	return result;
}

ZFraction ZFraction::opposite()
{
	ZFraction opposite_of_f(-numerator, denominator);

	return opposite_of_f;
}

ZFraction ZFraction::inverse()
{
	ZFraction inverse_of_f;
	inverse_of_f.setNumerator(denominator);
	inverse_of_f.setDenominator(numerator);
	return inverse_of_f;
}

// ARITHMETIQUE
ZFraction operator+(ZFraction& f, ZFraction& f2)
{
	return f.sumWith(f2);
}

ZFraction operator-(ZFraction& f, ZFraction& f2)
{
	ZFraction opposite_of_f2(f2.opposite());

	return f.sumWith(opposite_of_f2);
}

ZFraction operator*(ZFraction& f, ZFraction& f2)
{
	return f.productWith(f2);
}

ZFraction operator/(ZFraction& f, ZFraction& f2)
{
	ZFraction inverse_of_f2(f2.inverse());

	return f.productWith(inverse_of_f2);
}


// SHORTCUT OPERATION
ZFraction& operator+=(ZFraction f) 
{

	return &this;
}

ZFraction& operator-=(ZFraction f)
{
	return &this;
}

ZFraction& operator*=(ZFraction f)
{
	return &this;
}

ZFraction& operator/=(ZFraction f)
{
	return &this;
}
// COMPARAISON

// FLUX



void ZFraction::print()
{
	std::cout << numerator << "/" << denominator << std::endl;
}