#include "FunctionalityTests.h"
using namespace FunctionalityTests;

int main() {
	testNumberToPair(4, WHITE, BROWN);
	testNumberToPair(5, WHITE, SLATE);

	testPairToNumber(BLACK, ORANGE, 12);
	testPairToNumber(VIOLET, SLATE, 25);

	std::cout << "------------ Printing Manual -------------" << std::endl;

	Utility::PrintManual();

	return 0;
}
