#pragma once
#include <iostream>
#include <cassert>
#include <string>
#include "Utility.h"

namespace FunctionalityTests
{
	void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
	{
		ColorPair colorPair =
			Utility::GetColorFromPairNumber(pairNumber);
		std::cout << "Got pair " << colorPair.ToString() << std::endl;
		assert(colorPair.getMajor() == expectedMajor);
		assert(colorPair.getMinor() == expectedMinor);
	}

	void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
	{
		auto const pairNumber = Utility::GetPairNumberFromColor(major, minor);
		std::cout << "Got pair number " << pairNumber << std::endl;
		assert(pairNumber == expectedPairNumber);
	}
}