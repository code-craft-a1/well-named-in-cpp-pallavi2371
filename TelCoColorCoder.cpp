#include "./ColorPair.hpp"
#include "./TelCoColorCoder.hpp"

namespace TelCoColorCoder {
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

     /**
     * @brief Converts a given pair number to a ColorPair object.
     *
     * Telecom pair numbers range from 1 to 25 (for 5 major × 5 minor colors).
     * This function calculates the corresponding major and minor colors
     * based on the given pair number.
     *
     * @param pairNumber The pair number to convert (1-based index)
     * @return ColorPair object with the corresponding major and minor colors
     */
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor =
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    /**
     * @brief Converts a ColorPair to its corresponding pair number.
     *
     * Given a major and minor color, this function returns the
     * 1-based pair number using the formula:
     * (major index × number of minor colors) + minor index + 1
     *
     * @param major The major color (enum value)
     * @param minor The minor color (enum value)
     * @return The corresponding pair number (1–25)
     */
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}  // namespace TelCoColorCoder