#include <iostream>
#include <memory>
#include <spreadSheetCell.hpp>



int main() {
    spreadSheetCell myCell{3.75}, anotherCell{10.834};
    spreadSheetCell herCell;

    herCell.setValue(3.2);
    std::cout << "cell 1: " << myCell.getValue() << std::endl;
    std::cout << "cell 2: " << anotherCell.getValue() << std::endl;

    // raw pointer
    spreadSheetCell* myCell_p { new spreadSheetCell {9.4} }; // not recommended
    std::cout << "Cell 1 raw pointer: " << myCell_p->getValue() << "  " << myCell_p->getString() << std::endl;
    delete myCell_p;
    myCell_p = nullptr;

    // smart pointer
    auto myCell2_p { std::make_unique<spreadSheetCell>(5.3) };
    std::cout << myCell2_p->getValue() << std::endl;

}