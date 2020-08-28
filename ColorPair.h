#include <iostream>
#include "TelCoColorCoder.h"
using namespace TelCoColorCoder;

class ColorPair {
private:
	MajorColor majorColor;
	MinorColor minorColor;
public:
	ColorPair(MajorColor major, MinorColor minor) :
		majorColor(major), minorColor(minor)
	{}

	MajorColor getMajor() const {
		return majorColor;
	}

	MinorColor getMinor() const {
		return minorColor;
	}
	std::string ToString() const{
		std::string colorPairStr = MajorColorNames[majorColor];
		colorPairStr += " ";
		colorPairStr += MinorColorNames[minorColor];
		return colorPairStr;
	}
};
