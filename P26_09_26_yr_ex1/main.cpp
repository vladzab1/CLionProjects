#include <iostream>
#include <ctime>

void fill_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}


// void push_back(int ** arr, int *size, int val) {
//     int *tmp = new int[*size+1]{};
//
//     for (int i = 0; i < *size; i++) {
//         tmp[i] = *(*arr+i);
//     }
//
//     delete[] *arr;
//     *arr = tmp;
//
//     tmp[*size++] = val;
// }

void push_back(int *& arr, int &size, int val) {
    int *tmp = new int[size+1]{};

    for (int i = 0; i < size; i++) {
        tmp[i] = arr[i];
    }

    delete[] arr;
    arr = tmp;

    arr[size++] = val;
}
void FindSum_prod_in_arr(int *arr, int size, int &sum, int &prod) {
     for (int i = 0; i < size; i++) {
         sum += arr[i];
     }
     for (int i = 0; i < size; i++) {
         prod *= arr[i];
     }
}

void Find_number_negat_Posit_zero(int *arr, int size, int &numNegat, int &numPosit, int &numZero) {
    numNegat = 0;
    numPosit = 0;
    numZero = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            numNegat++;
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            numPosit++;
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            numZero++;
        }
    }
}

void mergeArrays(int *& mainArr, int &mainSize, int secondArr[], int secondSize) {
        int *tmp = new int[mainSize+secondSize]{};

        for (int j = 0; j < mainSize; j++) {
            tmp[j] = mainArr[j];
        }

        delete[] mainArr;
        mainArr = tmp;

       for (int j = 0; j < secondSize; j++) {
           mainArr[mainSize++] = secondArr[j];
       }

}
int main () {
    srand (time(0));
    int size = 5;
    int *arr = new int[size]{};
    int *arr2 = new int[size-2]{};


    fill_array(arr, size);
    print_array(arr, size);
    std::cout << std::endl;
    fill_array(arr2, size-2);
    print_array(arr2, size-2);
    std::cout << std::endl;
    mergeArrays(arr, size, arr2, size-2);
    print_array(arr, size);





    // int NumNegat = 0, NumPosit = 0, NumZero = 0;

    // Find_number_negat_Posit_zero(arr, size, NumNegat, NumPosit, NumZero);
    // std::cout << "Number of Negative number: " <<NumNegat <<" Number of positive number: "
    // << NumPosit<< " Number of Zero number: "<<NumZero<<std::endl;

    // int sum = 0;
    // int prod = 1;

    // FindSum_prod_in_arr(arr, size, sum, prod);
    // std::cout << sum << std::endl;
    // std::cout << prod << std::endl;

    // int size = 5;
    // int *arr = new int[size]{1,2,3,4,5};
    // print_array(arr, size);
    // std::cout << std::endl;
    //
    // push_back(arr, size, 5);
    //
    //
    // print_array(arr, size);
    //
    // delete[] arr;
    // int a =5;
    // int *pa = &a;
    // int &ra = a;
    // int **ppa = &pa;
    // int *&
    // ra= 12;
    // std::cout << *pa << std::endl;


    // int n, m;
    // std::cout << "Please enter the size of the array 1 : ";
    // std::cin >> m;
    // std::cout << "Please enter the size of the array 2 : ";
    // std::cin >> n;
    //
    // int *arr1 = new int[m];
    // int *arr2 = new int[n];
    //
    // fill_array(arr1, m);
    // print_array(arr1, n);
    // fill_array(arr2, n);
    // print_array(arr2, n);


    // const int size = 10;
    // int arr[size]{};
    // fill_array(arr, size);
    //
    // print_array(arr, size);
    //
    // int EvenNumber = 0;
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] % 2 == 0) {
    //         EvenNumber++;
    //     }
    // }
    // std::cout << "number of integers in the array = " << EvenNumber << std::endl;

    // delete [] arr1;
    // delete [] arr2;




    // int size = 5;
    // int *arr = new int[size]{1,2,3,4,5};
    // print_array(arr, size);
    // std::cout << std::endl;
    //
    // push_back(arr, size, 5);
    //
    //
    // print_array(arr, size);
    //
    // delete[] arr;
}

