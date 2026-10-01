#include <iostream>
#include <ctime>




int main() {
    srand(time(0));
    // const int size = 5;
    // int arr[size]{};
    // int *arrP = &arr[0];
    // int arr2[size]{};
    // int *arrP2 = &arr2[0];
    //
    // for (int i = 0; i < size; i++) {
    //     *arrP = rand() % 10;
    //     arrP++;
    // }
    // arrP -= size;
    // for (int i = 0; i < size; i++) {
    //     std::cout << *arrP << " ";
    //     arrP++;
    // }
    // arrP -= size;
    //
    // std::cout << std::endl;
    //
    // for (int i = 0; i < size; i++) {
    //     *arrP2 = *arrP;
    //     arrP++;
    //     arrP2++;
    // }
    // arrP -= size;
    // arrP2 -= size;
    //
    // for (int i = 0; i < size; i++) {
    //     std::cout << *arrP2 << " ";
    //     arrP2++;
    // }

    // const int size = 5;
    // int arr[size];
    // int *arrP = &arr[0];
    //
    //
    // for (int i = 0; i < size; i++) {
    //     *arrP = rand() % 10;
    //     arrP++;
    // }
    // arrP -= size;
    // for (int i = 0; i < size; i++) {
    //     std::cout << *arrP << " ";
    //     arrP++;
    // }
    // arrP -= size;
    //
    // std::cout << std::endl;
    //
    // int tmp;
    // int *tmpP = &tmp;
    // int *endP = &arr[size-1];
    // for (int i = 0; i < size/2; i++) {
    //     *tmpP = *arrP;
    //     *arrP = *endP;
    //     *endP = *tmpP;
    //     arrP++;
    //     endP--;
    // }
    // arrP -= size/2;
    //
    // for (int i = 0; i < size; i++) {
    //     std::cout << *arrP << " ";
    //     arrP++;
    // }


    const int size = 5;
    int arr[size]{};
    int arr2[size]{};
    int *arrP = &arr[0];
    int *arrP2 = &arr2[0];

    for (int i = 0; i < size; i++) {
        *arrP = rand() % 10;
        arrP++;
    }
    arrP -= size;
    for (int i = 0; i < size; i++) {
        std::cout << *arrP << " ";
        arrP++;
    }
    arrP -= size;

    std::cout << std::endl;

    int *arrP22 = &arr2[size-1];
    for (int i = 0; i < size; i++) {
        *arrP22 = *arrP;
        arrP++;
        arrP22--;
    }

    for (int i = 0; i < size; i++) {
        std::cout << *arrP2 << " ";
        arrP2++;
    }
}