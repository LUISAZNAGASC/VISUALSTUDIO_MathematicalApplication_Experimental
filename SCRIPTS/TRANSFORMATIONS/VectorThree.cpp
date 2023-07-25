#include "../../SCRIPTS/TRANSFORMATIONS/VectorThree.hpp"

std::ostream& operator<<(
	std::ostream& ostreamComponentToDisplay,
	const VectorThree& thisVectorThreeToDisplay)
{
	ostreamComponentToDisplay << "{ ";
	ostreamComponentToDisplay << "X : ";
	ostreamComponentToDisplay << thisVectorThreeToDisplay.GetX();
	ostreamComponentToDisplay << " , ";
	ostreamComponentToDisplay << "Y : ";
	ostreamComponentToDisplay << thisVectorThreeToDisplay.GetY();
	ostreamComponentToDisplay << " , ";
	ostreamComponentToDisplay << "Z : ";
	ostreamComponentToDisplay << thisVectorThreeToDisplay.GetZ();
	ostreamComponentToDisplay << " }";

	return ostreamComponentToDisplay;
}

VectorThree::VectorThree() :
	x(0.0),
	y(0.0),
	z(0.0)
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

VectorThree::VectorThree(
	const double newXToInitialize,
	const double newYToInitialize,
	const double newZToInitialize) :
	x(newXToInitialize),
	y(newYToInitialize),
	z(newZToInitialize)
{
	x = newXToInitialize;
	y = newYToInitialize;
	z = newZToInitialize;
}

VectorThree::VectorThree(
	const VectorThree& otherVectorThreeToCopy) :
	x(otherVectorThreeToCopy.GetX()),
	y(otherVectorThreeToCopy.GetY()),
	z(otherVectorThreeToCopy.GetZ())
{
	x = otherVectorThreeToCopy.GetX();
	y = otherVectorThreeToCopy.GetY();
	z = otherVectorThreeToCopy.GetZ();
}

VectorThree::~VectorThree()
{
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

const bool VectorThree::operator==(
	const VectorThree& otherVectorThreeToCompare) const
{
	const bool vectorThreeDesiredXComparison = GetX() == otherVectorThreeToCompare.GetX();
	const bool vectorThreeDesiredYComparison = GetY() == otherVectorThreeToCompare.GetY();
	const bool vectorThreeDesiredZComparison = GetZ() == otherVectorThreeToCompare.GetZ();

	return vectorThreeDesiredXComparison == true &&
		vectorThreeDesiredYComparison == true &&
		vectorThreeDesiredZComparison == true;
}

const bool VectorThree::operator!=(
	const VectorThree& otherVectorThreeToCompare) const
{
	const bool vectorThreeDesiredXComparison = GetX() != otherVectorThreeToCompare.GetX();
	const bool vectorThreeDesiredYComparison = GetY() != otherVectorThreeToCompare.GetY();
	const bool vectorThreeDesiredZComparison = GetZ() != otherVectorThreeToCompare.GetZ();

	return vectorThreeDesiredXComparison == true ||
		vectorThreeDesiredYComparison == true ||
		vectorThreeDesiredZComparison == true;
}

const VectorThree& VectorThree::operator=(
	const VectorThree& otherVectorThreeToAssign)
{
	if (this == &otherVectorThreeToAssign)
	{
		return *this;
	}
	else
	{
		const double vectorThreeDesiredX = otherVectorThreeToAssign.GetX();
		const double vectorThreeDesiredY = otherVectorThreeToAssign.GetY();
		const double vectorThreeDesiredZ = otherVectorThreeToAssign.GetZ();

		x = vectorThreeDesiredX;
		y = vectorThreeDesiredY;
		z = vectorThreeDesiredZ;

		return *this;
	}
}

const VectorThree VectorThree::operator+(
	const VectorThree& otherVectorThreeToAssign) const
{
	const double vectorThreeDesiredX = GetX() + otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() + otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() + otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator-(
	const VectorThree& otherVectorThreeToAssign) const
{
	const double vectorThreeDesiredX = GetX() - otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() - otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() - otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator*(
	const VectorThree& otherVectorThreeToAssign) const
{
	const double vectorThreeDesiredX = GetX() * otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() * otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() * otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator/(
	const VectorThree& otherVectorThreeToAssign) const
{
	const double vectorThreeDesiredX = GetX() / otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() / otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() / otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree& VectorThree::operator+=(
	const VectorThree& otherVectorThreeToAssign)
{
	const double vectorThreeDesiredX = GetX() + otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() + otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() + otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator-=(
	const VectorThree& otherVectorThreeToAssign)
{
	const double vectorThreeDesiredX = GetX() - otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() - otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() - otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator*=(
	const VectorThree& otherVectorThreeToAssign)
{
	const double vectorThreeDesiredX = GetX() * otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() * otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() * otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator/=(
	const VectorThree& otherVectorThreeToAssign)
{
	const double vectorThreeDesiredX = GetX() / otherVectorThreeToAssign.GetX();
	const double vectorThreeDesiredY = GetY() / otherVectorThreeToAssign.GetY();
	const double vectorThreeDesiredZ = GetZ() / otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree VectorThree::operator*(
	const double specificValueToAssign) const
{
	const double vectorThreeDesiredX = GetX() * specificValueToAssign;
	const double vectorThreeDesiredY = GetY() * specificValueToAssign;
	const double vectorThreeDesiredZ = GetZ() * specificValueToAssign;

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator/(
	const double specificValueToAssign) const
{
	const double vectorThreeDesiredX = GetX() / specificValueToAssign;
	const double vectorThreeDesiredY = GetY() / specificValueToAssign;
	const double vectorThreeDesiredZ = GetZ() / specificValueToAssign;

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree& VectorThree::operator*=(
	const double specificValueToAssign)
{
	const double vectorThreeDesiredX = GetX() * specificValueToAssign;
	const double vectorThreeDesiredY = GetY() * specificValueToAssign;
	const double vectorThreeDesiredZ = GetZ() * specificValueToAssign;

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator/=(
	const double specificValueToAssign)
{
	const double vectorThreeDesiredX = GetX() / specificValueToAssign;
	const double vectorThreeDesiredY = GetY() / specificValueToAssign;
	const double vectorThreeDesiredZ = GetZ() / specificValueToAssign;

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const double VectorThree::GetX() const
{
	return x;
}

const double VectorThree::GetY() const
{
	return y;
}

const double VectorThree::GetZ() const
{
	return z;
}

const double VectorThree::GetMagnitude() const
{
	const double vectorThreeXSquared = GetX() * GetX();
	const double vectorThreeYSquared = GetY() * GetY();
	const double vectorThreeZSquared = GetZ() * GetZ();

	return std::sqrt(
		vectorThreeXSquared +
		vectorThreeYSquared +
		vectorThreeZSquared);
}

const bool VectorThree::CompareBetween(
	const VectorThree& firstVectorThreeToCompare,
	const VectorThree& secondVectorThreeToCompare)
{
	const bool vectorThreeEqualityComparison = firstVectorThreeToCompare == secondVectorThreeToCompare;
	const bool vectorThreeDifferenceComparison = firstVectorThreeToCompare != secondVectorThreeToCompare;

	return vectorThreeEqualityComparison == true &&
		vectorThreeDifferenceComparison == true;
}

const double VectorThree::ComputeDistanceBetween(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute)
{
	const double vectorThreeFinalXDifference = firstVectorThreeToCompute.GetX() - secondVectorThreeToCompute.GetX();
	const double vectorThreeFinalYDifference = firstVectorThreeToCompute.GetY() - secondVectorThreeToCompute.GetY();
	const double vectorThreeFinalZDifference = firstVectorThreeToCompute.GetZ() - secondVectorThreeToCompute.GetZ();

	return std::sqrt(
		vectorThreeFinalXDifference * vectorThreeFinalXDifference +
		vectorThreeFinalYDifference * vectorThreeFinalYDifference +
		vectorThreeFinalZDifference * vectorThreeFinalZDifference);
}

const double VectorThree::ComputeDotProductUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute)
{
	const double vectorThreeFinalScalarX = firstVectorThreeToCompute.GetX() * secondVectorThreeToCompute.GetX();
	const double vectorThreeFinalScalarY = firstVectorThreeToCompute.GetY() * secondVectorThreeToCompute.GetY();
	const double vectorThreeFinalScalarZ = firstVectorThreeToCompute.GetZ() * secondVectorThreeToCompute.GetZ();

	return vectorThreeFinalScalarX +
		vectorThreeFinalScalarY +
		vectorThreeFinalScalarZ;
}

const VectorThree VectorThree::ComputeCrossProductUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute)
{
	const double vectorThreeDesiredX = firstVectorThreeToCompute.GetY() * secondVectorThreeToCompute.GetZ() -
		firstVectorThreeToCompute.GetZ() * secondVectorThreeToCompute.GetY();
	const double vectorThreeDesiredY = firstVectorThreeToCompute.GetZ() * secondVectorThreeToCompute.GetX() -
		firstVectorThreeToCompute.GetX() * secondVectorThreeToCompute.GetZ();
	const double vectorThreeDesiredZ = firstVectorThreeToCompute.GetX() * secondVectorThreeToCompute.GetY() -
		firstVectorThreeToCompute.GetY() * secondVectorThreeToCompute.GetX();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::ComputeUnclampedInterpolationUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute,
	const double specificTimeToCompute)
{
	const double vectorThreeDesiredX = firstVectorThreeToCompute.x +
		(secondVectorThreeToCompute.x - firstVectorThreeToCompute.x) *
		specificTimeToCompute;
	const double vectorThreeDesiredY = firstVectorThreeToCompute.y +
		(secondVectorThreeToCompute.y - firstVectorThreeToCompute.y) *
		specificTimeToCompute;
	const double vectorThreeDesiredZ = firstVectorThreeToCompute.z +
		(secondVectorThreeToCompute.z - firstVectorThreeToCompute.z) *
		specificTimeToCompute;

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::ComputeClampedInterpolationUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute,
	double specificTimeToCompute)
{
	VectorThree vectorThreeDesiredState;
	const double MinimumTimeToCompute = 0.0;
	const double MaximumTimeToCompute = 1.0;

	if (specificTimeToCompute <= MinimumTimeToCompute)
	{
		specificTimeToCompute = MinimumTimeToCompute;

		vectorThreeDesiredState = firstVectorThreeToCompute;
	}
	else if (specificTimeToCompute >= MaximumTimeToCompute)
	{
		specificTimeToCompute = MaximumTimeToCompute;

		vectorThreeDesiredState = secondVectorThreeToCompute;
	}
	else
	{
		vectorThreeDesiredState = ComputeUnclampedInterpolationUsing(
			firstVectorThreeToCompute,
			secondVectorThreeToCompute,
			specificTimeToCompute);
	}

	return vectorThreeDesiredState;
}

const VectorThree VectorThree::ComputeQuadraticBezierCurveUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute,
	const VectorThree& thirdVectorThreeToCompute,
	const double specificTimeToCompute)
{
	const VectorThree vectorThreeDesiredABPoint = ComputeClampedInterpolationUsing(
		firstVectorThreeToCompute,
		secondVectorThreeToCompute,
		specificTimeToCompute);
	const VectorThree vectorThreeDesiredBCPoint = ComputeClampedInterpolationUsing(
		secondVectorThreeToCompute,
		thirdVectorThreeToCompute,
		specificTimeToCompute);

	return ComputeClampedInterpolationUsing(
		vectorThreeDesiredABPoint,
		vectorThreeDesiredBCPoint,
		specificTimeToCompute);
}

const VectorThree VectorThree::ComputeCubicBezierCurveUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute,
	const VectorThree& thirdVectorThreeToCompute,
	const VectorThree& fourthVectorThreeToCompute,
	const double specificTimeToCompute)
{
	const VectorThree vectorThreeDesiredABCPoint = ComputeQuadraticBezierCurveUsing(
		firstVectorThreeToCompute,
		secondVectorThreeToCompute,
		thirdVectorThreeToCompute,
		specificTimeToCompute);
	const VectorThree vectorThreeDesiredBCDPoint = ComputeQuadraticBezierCurveUsing(
		secondVectorThreeToCompute,
		thirdVectorThreeToCompute,
		fourthVectorThreeToCompute,
		specificTimeToCompute);

	return ComputeClampedInterpolationUsing(
		vectorThreeDesiredABCPoint,
		vectorThreeDesiredBCDPoint,
		specificTimeToCompute);
}