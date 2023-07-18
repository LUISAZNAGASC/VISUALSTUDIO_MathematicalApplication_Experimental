#ifndef _VECTOR_THREE_HPP_
#define _VECTOR_THREE_HPP_

#include <iostream>

#pragma once
class VectorThree
{
private:
	float x = 0.0F;
	float y = 0.0F;
	float z = 0.0F;

	friend std::ostream& operator<<(
		std::ostream& ostreamComponentToDisplay,
		const VectorThree& thisVectorThreeToDisplay);

protected:

public:
	VectorThree();
	VectorThree(
		const float newXToInitialize,
		const float newYToInitialize,
		const float newZToInitialize);
	VectorThree(
		const VectorThree& otherVectorThreeToCopy);
	~VectorThree();

	const bool operator==(
		const VectorThree& otherVectorThreeToCompare) const;
	const bool operator!=(
		const VectorThree& otherVectorThreeToCompare) const;

	const VectorThree& operator=(
		const VectorThree& otherVectorThreeToAssign);

	const VectorThree operator+(
		const VectorThree& otherVectorThreeToAssign) const;
	const VectorThree operator-(
		const VectorThree& otherVectorThreeToAssign) const;
	const VectorThree operator*(
		const VectorThree& otherVectorThreeToAssign) const;
	const VectorThree operator/(
		const VectorThree& otherVectorThreeToAssign) const;

	const VectorThree& operator+=(
		const VectorThree& otherVectorThreeToAssign);
	const VectorThree& operator-=(
		const VectorThree& otherVectorThreeToAssign);
	const VectorThree& operator*=(
		const VectorThree& otherVectorThreeToAssign);
	const VectorThree& operator/=(
		const VectorThree& otherVectorThreeToAssign);

	const VectorThree operator*(
		const float specificValueToAssign) const;
	const VectorThree operator/(
		const float specificValueToAssign) const;

	const VectorThree& operator*=(
		const float specificValueToAssign);
	const VectorThree& operator/=(
		const float specificValueToAssign);

	const float GetX() const;
	const float GetY() const;
	const float GetZ() const;

	static const bool CompareBetween(
		const VectorThree& firstVectorThreeToCompare,
		const VectorThree& secondVectorThreeToCompare);

	static const VectorThree ComputeUnclampedInterpolationUsing(
		const VectorThree& firstVectorThreeToCompute,
		const VectorThree& secondVectorThreeToCompute,
		const float specificTimeToCompute);
	static const VectorThree ComputeClampedInterpolationUsing(
		const VectorThree& firstVectorThreeToCompute,
		const VectorThree& secondVectorThreeToCompute,
		float specificTimeToCompute);
	static const VectorThree ComputeQuadraticBezierCurveUsing(
		const VectorThree& firstVectorThreeToCompute,
		const VectorThree& secondVectorThreeToCompute,
		const VectorThree& thirdVectorThreeToCompute,
		const float specificTimeToCompute);
	static const VectorThree ComputeCubicBezierCurveUsing(
		const VectorThree& firstVectorThreeToCompute,
		const VectorThree& secondVectorThreeToCompute,
		const VectorThree& thirdVectorThreeToCompute,
		const VectorThree& fourthVectorThreeToCompute,
		const float specificTimeToCompute);
};

#endif