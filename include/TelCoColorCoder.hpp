#ifndef TELCOCOLORCODER_HPP
#define TELCOCOLORCODER_HPP

#include "ColorPair.hpp"
#include <vector>
#include <string>

// Contains utility functions for color code conversions in telecom
namespace TelCoColorCoder {

// Converts pair number to a ColorPair object
ColorPair GetColorFromPairNumber(int pairNumber);

// Converts a pair of colors to its corresponding pair number
int GetPairNumberFromColor(const std::string& majorColor, const std::string& minorColor);

// Prints the complete color code manual
void PrintColorCodeManual();

extern const std::vector<std::string> majorColors;
extern const std::vector<std::string> minorColors;

} // namespace TelCoColorCoder

#endif // TELCOCOLORCODER_HPP