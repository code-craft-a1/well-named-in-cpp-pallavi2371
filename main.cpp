#include <assert.h>
#include <iostream>
#include "./TelCoColorCoder.hpp"
#include "./ColorPair.hpp"

/**
 * @brief Tests the conversion from pair number to color pair.
 * 
 * This function calls GetColorFromPairNumber and checks if the result matches
 * the expected major and minor colors.
 * 
 * @param pairNumber The input pair number to test
 * @param expectedMajor Expected major color from the TelCoColorCoder enum
 * @param expectedMinor Expected minor color from the TelCoColorCoder enum
 */
void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor) {
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}
/**
 * @brief Tests the conversion from color pair to pair number.
 * 
 * This function calls GetPairNumberFromColor and checks if the result matches
 * the expected pair number.
 * 
 * @param major Major color from the TelCoColorCoder enum
 * @param minor Minor color from the TelCoColorCoder enum
 * @param expectedPairNumber The expected pair number for the given color pair
 */
void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber) {
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    //Test conversion from color to number
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    //Test conversion to number
    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
