#ifndef _VECTOR_TWO_HPP_
#define _VECTOR_TWO_HPP_

#include <iostream>

#pragma once
class VectorTwo
{
private:
	float x = 0.0F;
	float y = 0.0F;

	friend std::ostream& operator<<(
		std::ostream& ostreamComponentToDisplay,
		const VectorTwo& thisVectorTwoToDisplay);

protected:

public:
	VectorTwo();
	VectorTwo(
		const float newXToInitialize,
		const float newYToInitialize);
	VectorTwo(
		const VectorTwo& otherVectorTwoToCopy);
	~VectorTwo();

	const bool operator==(
		const VectorTwo& otherVectorTwoToCompare) const;
	const bool operator!=(
		const VectorTwo& otherVectorTwoToCompare) const;

	const VectorTwo& operator=(
		const VectorTwo& otherVectorTwoToAssign);

	const VectorTwo operator+(
		const VectorTwo& otherVectorTwoToAssign) const;
	const VectorTwo operator-(
		const VectorTwo& otherVectorTwoToAssign) const;
	const VectorTwo operator*(
		const VectorTwo& otherVectorTwoToAssign) const;
	const VectorTwo operator/(
		const VectorTwo& otherVectorTwoToAssign) const;

	const VectorTwo& operator+=(
		const VectorTwo& otherVectorTwoToAssign);
	const VectorTwo& operator-=(
		const VectorTwo& otherVectorTwoToAssign);
	const VectorTwo& operator*=(
		const VectorTwo& otherVectorTwoToAssign);
	const VectorTwo& operator/=(
		const VectorTwo& otherVectorTwoToAssign);

	const VectorTwo operator*(
		const float specificValueToAssign) const;
	const VectorTwo operator/(
		const float specificValueToAssign) const;

	const VectorTwo& operator*=(
		const float specificValueToAssign);
	const VectorTwo& operator/=(
		const float specificValueToAssign);

	const float GetX() const;
	const float GetY() const;

	static const bool CompareBetween(
		const VectorTwo& firstVectorTwoToCompare,
		const VectorTwo& secondVectorTwoToCompare);

	static const VectorTwo ComputeUnclampedInterpolationUsing(
		const VectorTwo& firstVectorTwoToCompute,
		const VectorTwo& secondVectorTwoToCompute,
		const float specificTimeToCompute);
	static const VectorTwo ComputeClampedInterpolationUsing(
		const VectorTwo& firstVectorTwoToCompute,
		const VectorTwo& secondVectorToCompute,
		float specificTimeToCompute);
	static const VectorTwo ComputeQuadraticBezierCurveUsing(
		const VectorTwo& firstVectorTwoToCompute,
		const VectorTwo& secondVectorTwoToCompute,
		const VectorTwo& thirdVectorTwoToCompute,
		const float specificTimeToCompute);
	static const VectorTwo ComputeCubicBezierCurveUsing(
		const VectorTwo& firstVectorTwoToCompute,
		const VectorTwo& secondVectorTwoToCompute,
		const VectorTwo& thirdVectorTwoToCompute,
		const VectorTwo& fourthVectorTwoToCompute,
		const float specificTimeToCompute);
};

#endif