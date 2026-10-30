#include <iostream>
void fill_array(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

bool contains(int *arr, int size, int val) {
    for (int i = 0; i < size; ++i) {
        if(arr[i] == val)
            return true;
    }
    return false;
}

int main() {
        srand(time(0));
        // int size1, size2, size = 0;
        // std::cout << "Enter the first array size->";
        // std::cin >> size1;
        // std::cout << "Enter the second array size->";
        // std::cin >> size2;
        //
        // int *arr1 = new int[size1]{};
        // int *arr2 = new int[size2]{};
        //
        // fill_array(arr1,size1);
        // print_array(arr1, size1);
        // fill_array(arr2, size2);
        // print_array(arr2, size2);
        //
        // for (int i = 0; i < size1; ++i) {
        //     if(!contains(arr2,size2,arr1[i]) && !contains(arr1, i, arr1[i])) {
        //         size++;
        //     }
        // }
        //
        // std::cout<<size<<std::endl;
        //
        // int *arr = new int[size]{};
        // size = 0;
        //
        // for (int i = 0; i < size1; ++i) {
        //     if(!contains(arr2,size2,arr1[i]) && !contains(arr1, i, arr1[i])) {
        //         arr[size++] = arr1[i];
        //     }
        // }
        //
        // print_array(arr,size);
        //
        // delete[] arr1;
        // delete[] arr2;
        // delete[] arr;


        int size1, size2, size = 0;
        std::cout << "Enter the first array size->";
        std::cin >> size1;
        std::cout << "Enter the second array size->";
        std::cin >> size2;

        int *arr1 = new int[size1]{};
        int *arr2 = new int[size2]{};

        fill_array(arr1,size1);
        print_array(arr1, size1);
        fill_array(arr2, size2);
        print_array(arr2, size2);

    for (int i = 0; i < size1; ++i) {
        if(!contains(arr2,size2,arr1[i]) && !contains(arr1, i, arr1[i])) {
            size++;
        }
    }
    for (int i = 0; i < size2; ++i) {
        if(!contains(arr1,size1,arr2[i]) && !contains(arr2, i, arr2[i])) {
            size++;
        }
    }

        std::cout<<size<<std::endl;

        int *arr = new int[size]{};
        size = 0;

        for (int i = 0; i < size1; ++i) {
            if(!contains(arr2,size2,arr1[i]) && !contains(arr1, i, arr1[i])) {
                arr[size++] = arr1[i];
            }
        }
    for (int i = 0; i < size2; ++i) {
        if(!contains(arr1,size1,arr2[i]) && !contains(arr2, i, arr2[i])) {
            arr[size++] = arr2[i];
        }
    }

        print_array(arr,size);

        delete[] arr1;
        delete[] arr2;
        delete[] arr;
}
