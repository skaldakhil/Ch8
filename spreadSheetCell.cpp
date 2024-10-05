#include <charconv>
#include <iostream>
#include <spreadSheetCell.hpp>

spreadSheetCell::spreadSheetCell(std::string_view initialValue) {
    setString(initialValue);
}

spreadSheetCell::spreadSheetCell(double initialValue) {
    setValue(initialValue);
}

void spreadSheetCell::setValue(double value) {
    m_value = value;
}

double spreadSheetCell::getValue() const {
    return m_value;
}

std::string spreadSheetCell::getString() const {
    return doubleToString(m_value);
}

void spreadSheetCell::setString(std::string_view value) {
    m_value = stringToDouble(value) ;
}

double spreadSheetCell::stringToDouble (std::string_view value) const {
    double number{0};
	std::from_chars(value.data(), value.data() + value.size(), number);
	return number;
}

std::string spreadSheetCell::doubleToString(double value) const {
    return std::to_string(value);
}

