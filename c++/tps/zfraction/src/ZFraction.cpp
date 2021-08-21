#include <iostream>
#include "ZFraction.h"
#include <ostream>

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
ZFraction& ZFraction::operator+=(ZFraction& f) 
{
	ZFraction newFraction(this->sumWith(f));
	this->setNumerator(newFraction.getNumerator());
	this->setDenominator(newFraction.getDenominator());
	return *this;
}

ZFraction& ZFraction::operator-=(ZFraction& f)
{
	ZFraction newFraction(this->sumWith(f.opposite()));
	this->setNumerator(newFraction.getNumerator());
	this->setDenominator(newFraction.getDenominator());
	return *this;
}

ZFraction& ZFraction::operator*=(ZFraction& f)
{
	ZFraction newFraction(this->productWith(f));
	this->setNumerator(newFraction.getNumerator());
	this->setDenominator(newFraction.getDenominator());
	return *this;
}

/** check if the Zfraction is positif or not.
 * @return {bool} false, if it is negatif, true else if.
 */
bool ZFraction::isPositif()
{
	return numerator >= 0 and denominator >= 0;
}

ZFraction& ZFraction::operator/=(ZFraction& f)
{
	ZFraction newFraction(this->productWith(f.inverse()));
	this->setNumerator(newFraction.getNumerator());
	this->setDenominator(newFraction.getDenominator());
	return *this;
}
// COMPARAISON
bool operator==(ZFraction& f1, ZFraction& f2)
{
	return f1.getNumerator() == f2.getNumerator() && f1.getDenominator() == f2.getDenominator();
}

bool operator<(ZFraction& f1, ZFraction& f2){
	ZFraction difference(f1-f2);
	// positif, negatif, null ??
	if (!difference.isPositif())
		return true;
	return false;
}

bool operator>(ZFraction& f1, ZFraction& f2){
	return f2 < f1;
}

bool operator!=(ZFraction& f1, ZFraction& f2){
	return ! (f1 == f2);
}

bool operator<=(ZFraction& f1, ZFraction& f2){
	return (f1 == f2) or (f1 < f2);
}

bool operator>=(ZFraction& f1, ZFraction& f2){
	return (f1 == f2) or (f1 > f2);
}
// FLUX


std::ostream& operator<<(std::ostream &flux, ZFraction& f)
{
	f.print();
	return flux;
}


void ZFraction::print()
{
	std::cout << numerator << "/" << denominator << std::endl;
}