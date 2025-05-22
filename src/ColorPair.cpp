#include "ColorPair.hpp"

// Constructor implementation
ColorPair::ColorPair(const std::string& majorColor, const std::string& minorColor)
    : majorColor_(majorColor), minorColor_(minorColor) {}

// Returns formatted string
std::string ColorPair::ToString() const {
    return majorColor_ + " | " + minorColor_;
}

// Getters
std::string ColorPair::GetMajorColor() const {
    return majorColor_;
}

std::string ColorPair::GetMinorColor() const {
    return minorColor_;
}