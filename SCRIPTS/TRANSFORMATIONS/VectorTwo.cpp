#include "../../SCRIPTS/TRANSFORMATIONS/VectorTwo.hpp"

std::ostream& operator<<(
	std::ostream& ostreamComponentToDisplay,
	const VectorTwo& thisVectorTwoToDisplay)
{
	ostreamComponentToDisplay << "{ ";
	ostreamComponentToDisplay << "X : ";
	ostreamComponentToDisplay << thisVectorTwoToDisplay.GetX();
	ostreamComponentToDisplay << " , ";
	ostreamComponentToDisplay << "Y : ";
	ostreamComponentToDisplay << thisVectorTwoToDisplay.GetY();
	ostreamComponentToDisplay << " }";

	return ostreamComponentToDisplay;
}

VectorTwo::VectorTwo() :
	x(0.0F),
	y(0.0F)
{
	x = 0.0F;
	y = 0.0F;
}

VectorTwo::VectorTwo(
	const float newXToInitialize,
	const float newYToInitialize) :
	x(newXToInitialize),
	y(newYToInitialize)
{
	x = newXToInitialize;
	y = newYToInitialize;
}

VectorTwo::VectorTwo(
	const VectorTwo& otherVectorTwoToCopy) :
	x(otherVectorTwoToCopy.GetX()),
	y(otherVectorTwoToCopy.GetY())
{
	x = otherVectorTwoToCopy.GetX();
	y = otherVectorTwoToCopy.GetY();
}

VectorTwo::~VectorTwo()
{
	x = 0.0F;
	y = 0.0F;
}

const bool VectorTwo::operator==(
	const VectorTwo& otherVectorTwoToCompare) const
{
	const bool vectorTwoXComparison = GetX() == otherVectorTwoToCompare.GetX();
	const bool vectorTwoYComparison = GetY() == otherVectorTwoToCompare.GetY();

	return vectorTwoXComparison == true &&
		vectorTwoYComparison == true;
}

const bool VectorTwo::operator!=(
	const VectorTwo& otherVectorTwoToCompare) const
{
	const bool vectorTwoXComparison = GetX() != otherVectorTwoToCompare.GetX();
	const bool vectorTwoYComparison = GetY() != otherVectorTwoToCompare.GetY();

	return vectorTwoXComparison == true ||
		vectorTwoYComparison == true;
}

const VectorTwo& VectorTwo::operator=(
	const VectorTwo& otherVectorTwoToAssign)
{
	if (this == &otherVectorTwoToAssign)
	{
		return *this;
	}
	else
	{
		const float vectorTwoDesiredX = otherVectorTwoToAssign.GetX();
		const float vectorTwoDesiredY = otherVectorTwoToAssign.GetY();

		x = vectorTwoDesiredX;
		y = vectorTwoDesiredY;

		return *this;
	}
}

const VectorTwo VectorTwo::operator+(
	const VectorTwo& otherVectorTwoToAssign) const
{
	const float vectorTwoDesiredX = GetX() + otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() + otherVectorTwoToAssign.GetY();

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator-(
	const VectorTwo& otherVectorTwoToAssign) const
{
	const float vectorTwoDesiredX = GetX() - otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() - otherVectorTwoToAssign.GetY();

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator*(
	const VectorTwo& otherVectorTwoToAssign) const
{
	const float vectorTwoDesiredX = GetX() * otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() * otherVectorTwoToAssign.GetY();

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator/(
	const VectorTwo& otherVectorTwoToAssign) const
{
	const float vectorTwoDesiredX = GetX() / otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() / otherVectorTwoToAssign.GetY();

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo& VectorTwo::operator+=(
	const VectorTwo& otherVectorTwoToAssign)
{
	const float vectorTwoDesiredX = GetX() + otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() + otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator-=(
	const VectorTwo& otherVectorTwoToAssign)
{
	const float vectorTwoDesiredX = GetX() - otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() - otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator*=(
	const VectorTwo& otherVectorTwoToAssign)
{
	const float vectorTwoDesiredX = GetX() * otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() * otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(
	const VectorTwo& otherVectorTwoToAssign)
{
	const float vectorTwoDesiredX = GetX() / otherVectorTwoToAssign.GetX();
	const float vectorTwoDesiredY = GetY() / otherVectorTwoToAssign.GetY();

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo VectorTwo::operator*(
	const float specificValueToAssign) const
{
	const float vectorTwoDesiredX = GetX() * specificValueToAssign;
	const float vectorTwoDesiredY = GetY() * specificValueToAssign;

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo VectorTwo::operator/(
	const float specificValueToAssign) const
{
	const float vectorTwoDesiredX = GetX() / specificValueToAssign;
	const float vectorTwoDesiredY = GetY() / specificValueToAssign;

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo& VectorTwo::operator*=(
	const float specificValueToAssign)
{
	const float vectorTwoDesiredX = GetX() * specificValueToAssign;
	const float vectorTwoDesiredY = GetY() * specificValueToAssign;

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const VectorTwo& VectorTwo::operator/=(
	const float specificValueToAssign)
{
	const float vectorTwoDesiredX = GetX() / specificValueToAssign;
	const float vectorTwoDesiredY = GetY() / specificValueToAssign;

	x = vectorTwoDesiredX;
	y = vectorTwoDesiredY;

	return *this;
}

const float VectorTwo::GetX() const
{
	return x;
}

const float VectorTwo::GetY() const
{
	return y;
}

const bool VectorTwo::CompareBetween(
	const VectorTwo& firstVectorTwoToCompare,
	const VectorTwo& secondVectorTwoToCompare)
{
	const bool vectorTwoEqualityComparison = firstVectorTwoToCompare == secondVectorTwoToCompare;
	const bool vectorTwoDifferenceComparison = firstVectorTwoToCompare != secondVectorTwoToCompare;

	return vectorTwoEqualityComparison == true &&
		vectorTwoDifferenceComparison == true;
}

const VectorTwo VectorTwo::ComputeUnclampedInterpolationUsing(
	const VectorTwo& firstVectorTwoToCompute,
	const VectorTwo& secondVectorTwoToCompute,
	const float specificTimeToCompute)
{
	const float vectorTwoDesiredX = firstVectorTwoToCompute.x +
		(secondVectorTwoToCompute.x - firstVectorTwoToCompute.x) *
		specificTimeToCompute;
	const float vectorTwoDesiredY = firstVectorTwoToCompute.y +
		(secondVectorTwoToCompute.y - firstVectorTwoToCompute.y) *
		specificTimeToCompute;

	return VectorTwo(
		vectorTwoDesiredX,
		vectorTwoDesiredY);
}

const VectorTwo VectorTwo::ComputeClampedInterpolationUsing(
	const VectorTwo& firstVectorTwoToCompute,
	const VectorTwo& secondVectorTwoToCompute,
	float specificTimeToCompute)
{
	VectorTwo vectorTwoDesiredState;
	const float MinimumTimeToCompute = 0.0F;
	const float MaximumTimeToCompute = 1.0F;

	if (specificTimeToCompute <= MinimumTimeToCompute)
	{
		specificTimeToCompute = MinimumTimeToCompute;

		vectorTwoDesiredState = firstVectorTwoToCompute;
	}
	else if (specificTimeToCompute >= MaximumTimeToCompute)
	{
		specificTimeToCompute = MaximumTimeToCompute;

		vectorTwoDesiredState = secondVectorTwoToCompute;
	}
	else
	{
		vectorTwoDesiredState = ComputeUnclampedInterpolationUsing(
			firstVectorTwoToCompute,
			secondVectorTwoToCompute,
			specificTimeToCompute);
	}

	return vectorTwoDesiredState;
}

const VectorTwo VectorTwo::ComputeQuadraticBezierCurveUsing(
	const VectorTwo& firstVectorTwoToCompute,
	const VectorTwo& secondVectorTwoToCompute,
	const VectorTwo& thirdVectorTwoToCompute,
	const float specificTimeToCompute)
{
	const VectorTwo vectorTwoDesiredABPoint = ComputeClampedInterpolationUsing(
		firstVectorTwoToCompute,
		secondVectorTwoToCompute,
		specificTimeToCompute);
	const VectorTwo vectorTwoDesiredBCPoint = ComputeClampedInterpolationUsing(
		secondVectorTwoToCompute,
		thirdVectorTwoToCompute,
		specificTimeToCompute);

	return ComputeClampedInterpolationUsing(
		vectorTwoDesiredABPoint,
		vectorTwoDesiredBCPoint,
		specificTimeToCompute);
}

const VectorTwo VectorTwo::ComputeCubicBezierCurveUsing(
	const VectorTwo& firstVectorTwoToCompute,
	const VectorTwo& secondVectorTwoToCompute,
	const VectorTwo& thirdVectorTwoToCompute,
	const VectorTwo& fourthVectorTwoToCompute,
	const float specificTimeToCompute)
{
	const VectorTwo vectorTwoDesiredABCPoint = ComputeQuadraticBezierCurveUsing(
		firstVectorTwoToCompute,
		secondVectorTwoToCompute,
		thirdVectorTwoToCompute,
		specificTimeToCompute);
	const VectorTwo vectorTwoDesiredBCDPoint = ComputeQuadraticBezierCurveUsing(
		secondVectorTwoToCompute,
		thirdVectorTwoToCompute,
		fourthVectorTwoToCompute,
		specificTimeToCompute);

	return ComputeClampedInterpolationUsing(
		vectorTwoDesiredABCPoint,
		vectorTwoDesiredBCDPoint,
		specificTimeToCompute);
}