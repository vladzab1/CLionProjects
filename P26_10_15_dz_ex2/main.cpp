#include <iostream>
struct House {
    char owner[70];
    char address[50];
    double height;
    int numOfFloors;
    int numApartments;
    // in years
    int buildDate;
    char material[30];
    double costPerSquareMeter;
};
void PrintHouseInfo(House obj) {
    std::cout << "House Info" << std::endl;
    std::cout << "Owner: " << obj.owner << std::endl;
    std::cout << "Address: " << obj.address << std::endl;
    std::cout << "Height: " << obj.height << std::endl;
    std::cout << "NumOfFloors: " << obj.numOfFloors << std::endl;
    std::cout << "NumApartments: " << obj.numApartments << std::endl;
    std::cout << "ConstructionDate: " << obj.buildDate << std::endl;
    std::cout << "Material: " << obj.material << std::endl;
    std::cout << "CostPerSquareMeter: " << obj.costPerSquareMeter << std::endl;
}
void InputHouse(House &obj) {
    std::cout << "Entering House Info" << std::endl;
    std::cout << "Owner: ";
    std::cin.getline(obj.owner, 70);
    std::cout << "Address: ";
    std::cin.getline(obj.address, 50);
    std::cout << "Height: ";
    std::cin >> obj.height;
    std::cout << "NumOfFloors: ";
    std::cin >> obj.numOfFloors;
    std::cout << "NumApartments: ";
    std::cin >> obj.numApartments;
    std::cout << "ConstructionDate: ";
    std::cin >> obj.buildDate;
    std::cin.ignore();
    std::cout << "Material: ";
    std::cin.getline(obj.material, 30);
    std::cout << "CostPerSquareMeter: ";
    std::cin >> obj.costPerSquareMeter;
    std::cin.ignore();
}

void FullEditing(House &obj) {
    std::cout << "Full Editing" << std::endl;
    std::cout << "Current Owner: " << obj.owner << std::endl;
    std::cout << "New Owner: ";
    std::cin.getline(obj.owner, 70);
    std::cout << "Current Address: " << obj.address << std::endl;
    std::cout << "New Address: ";
    std::cin.getline(obj.address, 50);
    std::cout << "Current Height: " << obj.height << std::endl;
    std::cout << "New Height: ";
    std::cin >> obj.height;
    std::cout << "Current NumOfFloors: " << obj.numOfFloors << std::endl;
    std::cout << "New NumOfFloors: ";
    std::cin >> obj.numOfFloors;
    std::cout << "Current NumApartments: " << obj.numApartments << std::endl;
    std::cout << "New NumApartments: ";
    std::cin >> obj.numApartments;
    std::cout << "Current ConstructionDate: " << obj.buildDate << std::endl;
    std::cout << "New ConstructionDate: ";
    std::cin >> obj.buildDate;
    std::cin.ignore();
    std::cout << "Current Material: " << obj.material << std::endl;
    std::cout << "New Material: ";
    std::cin.getline(obj.material, 30);
    std::cout << "Current CostPerSquareMeter: " << obj.costPerSquareMeter << std::endl;
    std::cout << "New CostPerSquareMeter: ";
    std::cin >> obj.costPerSquareMeter;
    std::cin.ignore();
}

void PartialEditing(House &obj) {
    int userChoice = 0;
    std::cout << "Partial Editing" << std::endl;
    std::cout << "1. Edit Owner" << std::endl;
    std::cout << "2. Edit Address" << std::endl;
    std::cout << "3. Edit Height" << std::endl;
    std::cout << "4. Edit NumOfFloors" << std::endl;
    std::cout << "5. Edit NumApartments" << std::endl;
    std::cout << "6. Edit ConstructionDate" << std::endl;
    std::cout << "7. Edit Material"  << std::endl;
    std::cout << "8. Edit CostPerSquareMeter" << std::endl;
    std::cout << "Choose do you want to edit: " << std::endl;
    std::cin >> userChoice;
    std::cin.ignore();
    switch (userChoice) {
        case 1:
            std::cout << "Current Owner: " << obj.owner << std::endl << "New Owner: ";
            std::cin.getline(obj.owner, 70);
            break;
        case 2:
            std::cout << "Current Address: " << obj.address << std::endl << "New Address: ";
            std::cin.getline(obj.address, 50);
            break;
        case 3:
            std::cout << "Current Height: " << obj.height << std::endl << "New Height: ";
            std::cin >> obj.height;
            std::cin.ignore();
            break;
        case 4:
            std::cout << "Current NumOfFloors: " << obj.numOfFloors << std::endl << "New NumOfFloors: ";
            std::cin >> obj.numOfFloors;
            std::cin.ignore();
            break;
        case 5:
            std::cout << "Current NumApartments: " << obj.numApartments << std::endl << "New NumApartments: ";
            std::cin >> obj.numApartments;
            std::cin.ignore();
            break;
        case 6:
            std::cout << "Current ConstructionDate: " << obj.buildDate << std::endl << "New ConstructionDate: ";
            std::cin >> obj.buildDate;
            std::cin.ignore();
            break;
        case 7:
            std::cout << "Current Material: " << obj.material << std::endl << "New Material: ";
            std::cin.getline(obj.material, 30);
            break;
        case 8:
            std::cout << "Current CostPerSquareMeter: " << obj.costPerSquareMeter << std::endl << "New CostPerSquareMeter: ";
            std::cin >> obj.costPerSquareMeter;
            std::cin.ignore();
            break;
        default:
            std::cout << "Invalid choice! Try again." << std::endl;
            break;
    }
}
int main() {
    House house{};
    InputHouse(house);
    PrintHouseInfo(house);
    FullEditing(house);
    PrintHouseInfo(house);
    PartialEditing(house);
    PrintHouseInfo(house);
}