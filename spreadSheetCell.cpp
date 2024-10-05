#include <charconv>
#include <iostream>
#include <spreadSheetCell.hpp>

// void printCell(const spreadSheetCell& cell) {
//     std::cout << cell.getString() << std::endl;
// }

void spreadSheetCell::setValue(double value) {
    // printCell(*this);
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
    int number{ 0 };
	std::from_chars(value.data(), value.data() + value.size(), number);
	return number;
}

std::string spreadSheetCell::doubleToString(double value) const {
    return std::to_string(value);
}

