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
	x(0.0F),
	y(0.0F),
	z(0.0F)
{
	x = 0.0F;
	y = 0.0F;
	z = 0.0F;
}

VectorThree::VectorThree(
	const float newXToInitialize,
	const float newYToInitialize,
	const float newZToInitialize) :
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
	x = 0.0F;
	y = 0.0F;
	z = 0.0F;
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
		const float vectorThreeDesiredX = otherVectorThreeToAssign.GetX();
		const float vectorThreeDesiredY = otherVectorThreeToAssign.GetY();
		const float vectorThreeDesiredZ = otherVectorThreeToAssign.GetZ();

		x = vectorThreeDesiredX;
		y = vectorThreeDesiredY;
		z = vectorThreeDesiredZ;

		return *this;
	}
}

const VectorThree VectorThree::operator+(
	const VectorThree& otherVectorThreeToAssign) const
{
	const float vectorThreeDesiredX = GetX() + otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() + otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() + otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator-(
	const VectorThree& otherVectorThreeToAssign) const
{
	const float vectorThreeDesiredX = GetX() - otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() - otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() - otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator*(
	const VectorThree& otherVectorThreeToAssign) const
{
	const float vectorThreeDesiredX = GetX() * otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() * otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() * otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator/(
	const VectorThree& otherVectorThreeToAssign) const
{
	const float vectorThreeDesiredX = GetX() / otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() / otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() / otherVectorThreeToAssign.GetZ();

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree& VectorThree::operator+=(
	const VectorThree& otherVectorThreeToAssign)
{
	const float vectorThreeDesiredX = GetX() + otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() + otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() + otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator-=(
	const VectorThree& otherVectorThreeToAssign)
{
	const float vectorThreeDesiredX = GetX() - otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() - otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() - otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator*=(
	const VectorThree& otherVectorThreeToAssign)
{
	const float vectorThreeDesiredX = GetX() * otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() * otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() * otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator/=(
	const VectorThree& otherVectorThreeToAssign)
{
	const float vectorThreeDesiredX = GetX() / otherVectorThreeToAssign.GetX();
	const float vectorThreeDesiredY = GetY() / otherVectorThreeToAssign.GetY();
	const float vectorThreeDesiredZ = GetZ() / otherVectorThreeToAssign.GetZ();

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree VectorThree::operator*(
	const float specificValueToAssign) const
{
	const float vectorThreeDesiredX = GetX() * specificValueToAssign;
	const float vectorThreeDesiredY = GetY() * specificValueToAssign;
	const float vectorThreeDesiredZ = GetZ() * specificValueToAssign;

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree VectorThree::operator/(
	const float specificValueToAssign) const
{
	const float vectorThreeDesiredX = GetX() / specificValueToAssign;
	const float vectorThreeDesiredY = GetY() / specificValueToAssign;
	const float vectorThreeDesiredZ = GetZ() / specificValueToAssign;

	return VectorThree(
		vectorThreeDesiredX,
		vectorThreeDesiredY,
		vectorThreeDesiredZ);
}

const VectorThree& VectorThree::operator*=(
	const float specificValueToAssign)
{
	const float vectorThreeDesiredX = GetX() * specificValueToAssign;
	const float vectorThreeDesiredY = GetY() * specificValueToAssign;
	const float vectorThreeDesiredZ = GetZ() * specificValueToAssign;

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const VectorThree& VectorThree::operator/=(
	const float specificValueToAssign)
{
	const float vectorThreeDesiredX = GetX() / specificValueToAssign;
	const float vectorThreeDesiredY = GetY() / specificValueToAssign;
	const float vectorThreeDesiredZ = GetZ() / specificValueToAssign;

	x = vectorThreeDesiredX;
	y = vectorThreeDesiredY;
	z = vectorThreeDesiredZ;

	return *this;
}

const float VectorThree::GetX() const
{
	return x;
}

const float VectorThree::GetY() const
{
	return y;
}

const float VectorThree::GetZ() const
{
	return z;
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

const VectorThree VectorThree::ComputeUnclampedInterpolationUsing(
	const VectorThree& firstVectorThreeToCompute,
	const VectorThree& secondVectorThreeToCompute,
	const float specificTimeToCompute)
{
	const float vectorThreeDesiredX = firstVectorThreeToCompute.x +
		(secondVectorThreeToCompute.x - firstVectorThreeToCompute.x) *
		specificTimeToCompute;
	const float vectorThreeDesiredY = firstVectorThreeToCompute.y +
		(secondVectorThreeToCompute.y - firstVectorThreeToCompute.y) *
		specificTimeToCompute;
	const float vectorThreeDesiredZ = firstVectorThreeToCompute.z +
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
	float specificTimeToCompute)
{
	VectorThree vectorThreeDesiredState;
	const float MinimumTimeToCompute = 0.0F;
	const float MaximumTimeToCompute = 1.0F;

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
	const float specificTimeToCompute)
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
	const float specificTimeToCompute)
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