#pragma once
#include "ColorPair.h"

namespace Utility
{
	ColorPair GetColorFromPairNumber(int pairNumber) {
		auto const zeroBasedPairNumber = pairNumber - 1;
		auto const majorColor =
			static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
		auto const minorColor =
			static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
		return{ majorColor, minorColor };
	}

	int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
		return major * numberOfMinorColors + minor + 1;
	}
}