#ifndef COLORPAIR_HPP_
#define COLORPAIR_HPP_

#include <iostream>
#include <string>
#include "./TelCoColorCoder.hpp"

namespace TelCoColorCoder {
    /**
     * @brief A class to represent a pair of telecom wire colors.
     *
     * This class encapsulates a major and a minor color as a color pair,
     * providing access methods and string representation.
     */
    class ColorPair {
    private:
        TelCoColorCoder::MajorColor majorColor;
        TelCoColorCoder::MinorColor minorColor;

    public:
        /**
         * @brief Constructs a ColorPair with the given major and minor colors.
         * 
         * @param major Major color from TelCoColorCoder::MajorColor enum
         * @param minor Minor color from TelCoColorCoder::MinorColor enum
         */
        ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);
        TelCoColorCoder::MajorColor getMajor() const;
        TelCoColorCoder::MinorColor getMinor() const;
        std::string ToString() const;
    };
}  // namespace TelCoColorCoder

#endif  // COLORPAIR_HPP_