#include <iostream>
#include <spreadSheetCell.hpp>



int main() {
    spreadSheetCell myCell, anotherCell;
    myCell.setString("3.2");
    anotherCell.setValue(15);

    std::cout << "cell 1: " << myCell.getValue() << std::endl;
    std::cout << "cell 2: " << anotherCell.getValue() << std::endl;

}