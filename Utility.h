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

	void PrintManual()
	{
		int colorCodes = numberOfMajorColors * numberOfMinorColors;
		for(int i = 1; i<=colorCodes; i++)
		{
			ColorPair colorPair = GetColorFromPairNumber(i);
			std::cout << "Color code: " << i << " " << colorPair.ToString() << std::endl;
		}
	}
}