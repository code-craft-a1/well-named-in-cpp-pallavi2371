#include "TelCoColorCoder.hpp"
#include <iostream>

int main() {
    try {
        // Print reference manual
        TelCoColorCoder::PrintColorCodeManual();

        // Demonstrate color to pair number mapping
        int pairNum = TelCoColorCoder::GetPairNumberFromColor("Red", "Green");
        std::cout << "\nPair number for Red & Green: " << pairNum << std::endl;

        // Demonstrate pair number to color mapping
        ColorPair color = TelCoColorCoder::GetColorFromPairNumber(12);
        std::cout << "Pair 12 maps to: " << color.ToString() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
