#ifndef COLORPAIR_HPP
#define COLORPAIR_HPP

#include <string>

// Class representing a pair of major and minor colors
class ColorPair {
public:
    ColorPair(const std::string& majorColor, const std::string& minorColor);

    // Returns a formatted string representing the color pair
    std::string ToString() const;

    // Getter for major color
    std::string GetMajorColor() const;

    // Getter for minor color
    std::string GetMinorColor() const;

private:
    std::string majorColor_;  // Major color
    std::string minorColor_;  // Minor color
};

#endif // COLORPAIR_HPP