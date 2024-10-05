#pragma once

#include <string>
#include <string_view>

class spreadSheetCell {
public: 
    // Constructos
    spreadSheetCell() {}
    spreadSheetCell(std::string_view initialValue);
    spreadSheetCell(double initialValue);

    // Methods
    void setValue(double value);
    double getValue() const;
    void setString(std::string_view value);
    std::string getString() const;

private:
    // Member variables and helper functions
    std::string doubleToString(double value) const;
    double stringToDouble(std::string_view value) const;
    double m_value {0};
};