#include <cstring>
#include <iostream>
enum class Category{
    Unknows,
    Food,
    Tech,
    Sport
};

struct Product {
    int id = 0;
    char * name = nullptr;
    char * brand = nullptr;
    double price = 0;
    Category category{};
};
Category Str_To_Category(const char * str) {
    if (strcmp(str, "food") == 0) {
        return Category::Food;
    } else if (strcmp(str, "sport") == 0) {
        return Category::Sport;
    } else if (strcmp(str, "tech") == 0) {
        return Category::Tech;
    } else {
        return Category::Unknows;
    }
}
void inputProduct (Product &prod) {
    char buf[500]{};
    std::cout << "Product name: ";
    std::cin.getline(buf, 500);
    prod.name = new char[strlen(buf) + 1];
    strcpy(prod.name, buf);
    std::cout << "Product brand: ";
    std::cin.getline(buf, 500);
    prod.brand = new char[strlen(buf) + 1];
    strcpy(prod.brand, buf);
    std::cout << "Product price: ";
    std::cin >> prod.price;
    std::cin.ignore();
    std::cout << "Product category(food/tech/sport): ";
    std::cin.getline(buf, 500);
    prod.category = Str_To_Category(buf);
}
const char * category_to_str(Category category) {
    switch (category) {
        case Category::Food:
            return "Food";
        case Category::Tech:
            return "Tech";
        case Category::Sport:
            return "Sport";
        default:
            return "Unknown";
    }
}
void printProduct (Product prod) {
    std::cout << "Product name: ";
    std::cout << (prod.name?prod.name:"Noname") << std::endl;
    std::cout << "Product brand: ";
    std::cout << (prod.brand?prod.brand:"Unknown") << std::endl;
    std::cout << "Product price: ";
    std::cout << prod.price << std::endl;
    std::cout << "Product category: ";
    std::cout << category_to_str(prod.category) << std::endl;
}
void add_product (Product *&arr, int &size, int &id) {
    if (size == 0) {
        arr = new Product[1]{};
    } else {
        Product * tmp = new Product[size+1]{};
        for (int i = 0; i < size; i++) {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }
    arr[size].id = id++;
    inputProduct(arr[size]);
    size++;
}
void romove_at(Product *&arr, int & size, int pos) {
    Product * tmp = new Product[size-1] {};

    int j = 0;
    for (int i = 0; i < size; i++) {
        if (i < pos) {
            tmp[j] = arr[i];
            j++;
        } else if (i > pos) {
            tmp[j] = arr[i];
            j++;
        }
    }
    delete[] arr[pos].name;
    delete[] arr[pos].brand;

    delete [] arr;
    arr = tmp;
    size--;
}
int main() {
    // Product p1{};
    // inputProduct(p1);
    // printProduct(p1);
    // delete[] p1.name;
    // delete[] p1.brand;

    int size = 0;
    int id = 1;
    Product * produucts = nullptr;
    add_product(produucts, size, id);


    for (int i = 0; i < size; i++) {
        printProduct(produucts[i]);
    }

    romove_at(produucts, size, 1);
    std::cout << std::endl;
    for (int i = 0; i < size; i++) {
        printProduct(produucts[i]);
    }

    for (int i = 0; i < size; i++) {
        delete[] produucts[i].name;
        delete[] produucts[i].brand;
    }

    delete[]produucts;
}