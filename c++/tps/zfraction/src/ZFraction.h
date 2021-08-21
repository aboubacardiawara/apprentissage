#ifndef FRACTION_H
#define FRACTION_H

class ZFraction
{
public:
	/** constructor
	 */
	ZFraction();

	/** constructor
	 * \param {int} numerator.
	 * \param {int} denominator.
	 */
	ZFraction(int numerator, int denominator);

	/** constructor
	 * \param {int} numerator.
	 * \param {int} denominator.
	 */
	ZFraction(int numerator);

	/** return the fraction numerator.
	 * \return {int} ZFraction's numerator.
	 */
	int getNumerator() const;
	
	/** return the fraction denominator.
	 * \return {int} ZFraction's denominator.
	 */
	int getDenominator() const;

	/** change the numerator value.
	 * \param {int} newNumerator, the value to set as new numerator.
	 */
	void setNumerator(int newNumerator);

	/** change the denominator value.
	 * \param {int} newDenominator, the value to set as new denominator.
	 */
	void setDenominator(int newDenominator);

	/** return the sum of the ZFraction with another one.
	 * \param {ZFraction} another ZFraction 
	 * \return {ZFraction} the sum of the current ZFraction with another one.
	 */
	ZFraction sumWith(ZFraction f);

	/** return the product of the ZFraction with another one.
	 * \param {ZFraction} another ZFraction 
	 * \return {ZFraction} the product of the current ZFraction with another one.
	 */
	ZFraction productWith(ZFraction f);

	ZFraction opposite();

	ZFraction inverse();

	// shortcut operations
	ZFraction& operator+=(ZFraction& f);
	ZFraction& operator-=(ZFraction& f);
	ZFraction& operator*=(ZFraction& f);
	ZFraction& operator/=(ZFraction& f);

	void print();


private:
	/** ZFraction numerator */
	int numerator;

	/** ZFraction denominator*/
	int denominator;
}; // class ZFraction.

// arithmetiques operations
ZFraction operator+(ZFraction& f1, ZFraction& f2);
ZFraction operator-(ZFraction& f1, ZFraction& f2);
ZFraction operator*(ZFraction& f1, ZFraction& f2);
ZFraction operator/(ZFraction& f1, ZFraction& f2);



// comparaison operation
bool operator==(ZFraction& f1, ZFraction& f2);
bool operator!=(ZFraction& f1, ZFraction& f2);
#endif