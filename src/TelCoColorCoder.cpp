#include "TelCoColorCoder.hpp"
#include <iostream>
#include <stdexcept>

namespace TelCoColorCoder {

// Define major and minor colors
const std::vector<std::string> majorColors = {"White", "Red", "Black", "Yellow", "Violet"};
const std::vector<std::string> minorColors = {"Blue", "Orange", "Green", "Brown", "Slate"};

// Returns ColorPair object for a given pair number
ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
    int majorIndex = zeroBasedPairNumber / minorColors.size();
    int minorIndex = zeroBasedPairNumber % minorColors.size();

    if (majorIndex >= majorColors.size() || minorIndex >= minorColors.size()) {
        throw std::out_of_range("Invalid pair number");
    }

    return ColorPair(majorColors[majorIndex], minorColors[minorIndex]);
}

// Returns pair number for a given major/minor color
int GetPairNumberFromColor(const std::string& majorColor, const std::string& minorColor) {
    int majorIndex = -1, minorIndex = -1;

    for (size_t i = 0; i < majorColors.size(); ++i) {
        if (majorColors[i] == majorColor) {
            majorIndex = static_cast<int>(i);
            break;
        }
    }

    for (size_t i = 0; i < minorColors.size(); ++i) {
        if (minorColors[i] == minorColor) {
            minorIndex = static_cast<int>(i);
            break;
        }
    }

    if (majorIndex == -1 || minorIndex == -1) {
        throw std::invalid_argument("Invalid color names");
    }

    return majorIndex * static_cast<int>(minorColors.size()) + minorIndex + 1;
}

// Prints a reference manual of all color codes
void PrintColorCodeManual() {
    int pairNumber = 1;
    for (const auto& major : majorColors) {
        for (const auto& minor : minorColors) {
            std::cout << pairNumber << " | " << major << " | " << minor << std::endl;
            ++pairNumber;
        }
    }
}

} // namespace TelCoColorCoder