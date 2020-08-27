#include "FunctionalityTests.h"
using namespace FunctionalityTests;

int main() {
	testNumberToPair(4, WHITE, BROWN);
	testNumberToPair(5, WHITE, SLATE);

	testPairToNumber(BLACK, ORANGE, 12);
	testPairToNumber(VIOLET, SLATE, 25);
	return 0;
}
