// ColorPair.cpp
// Implements the ColorPair class that represents a pair of telecom wire colors.

#include <string>
#include "./ColorPair.hpp"

namespace TelCoColorCoder {

/**
 * @brief Constructs a ColorPair object with given major and minor colors.
 *
 * @param major Major color from the enum TelCoColorCoder::MajorColor
 * @param minor Minor color from the enum TelCoColorCoder::MinorColor
 */
ColorPair::ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor)
    : majorColor(major), minorColor(minor) {}

/**
 * @brief Returns the major color of the color pair.
 *
 * @return MajorColor enum value
 */
TelCoColorCoder::MajorColor ColorPair::getMajor() const {
    return majorColor;
}

/**
 * @brief Returns the minor color of the color pair.
 *
 * @return MinorColor enum value
 */
TelCoColorCoder::MinorColor ColorPair::getMinor() const {
    return minorColor;
}

/**
 * @brief Converts the color pair into a human-readable string format.
 *
 * Uses the predefined color name arrays to construct a string like "White Blue".
 *
 * @return A string representation of the color pair
 */
std::string ColorPair::ToString() const {
    std::string colorPairStr = TelCoColorCoder::MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += TelCoColorCoder::MinorColorNames[minorColor];
    return colorPairStr;
}

}  // namespace TelCoColorCoder
