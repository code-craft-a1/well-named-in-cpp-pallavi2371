// Header file for telecom color code logic: enums, constants, and function declarations.
#ifndef TELCOCOLORCODER_HPP_
#define TELCOCOLORCODER_HPP_

namespace TelCoColorCoder {
/**
 * @brief Enum representing the five major colors used in telecom color coding.
 */
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
/**
 * @brief Enum representing the five minor colors used in telecom color coding.
 */
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern int numberOfMajorColors;
extern const char* MinorColorNames[];

extern int numberOfMinorColors;

// Forward declaration of the ColorPair class
class ColorPair;
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}  // namespace TelCoColorCoder

#endif  // TELCOCOLORCODER_HPP_