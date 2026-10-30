#include <cstring>
#include <iostream>

// struct Person {
//     char first_name[20];
//     char last_name[20];
//     int age;
// };

struct Person {
    char * first_name;
    char * last_name;
    int age;
};

int main () {

    // int size = 3;
    // Person* arr = new Person[size];
    // arr[0].first_name = new char[strlen("Vasya")+1];
    // strcpy(arr[0].first_name, "Vasya");
    // arr[0].last_name = new char[strlen("Pupkin")+1];
    // strcpy(arr[0].last_name, "Pupkin");
    // arr[0].age = 23;
    //
    // arr[1].first_name = new char[strlen("Petya")+1];
    // strcpy(arr[1].first_name, "Petya");
    // arr[1].last_name = new char[strlen("Vasin")+1];
    // strcpy(arr[1].last_name, "Vasin");
    // arr[1].age = 17;
    //
    // arr[2].first_name = new char[strlen("Masha")+1];
    // strcpy(arr[2].first_name, "Masha");
    // arr[2].last_name = new char[strlen("Petrova")+1];
    // strcpy(arr[2].last_name, "Petrova");
    // arr[2].age = 25;
    //
    // FILE*f = fopen("person.bin", "wb");
    // if (f != nullptr) {
    //
    //     fwrite(&size, sizeof(int ), 1, f);
    //
    //     for (int i = 0; i < size; i++) {
    //         fwrite(&arr[i].age, sizeof(int), 1, f);
    //
    //         int len = strlen(arr[i].first_name)+1;
    //         fwrite(&len, sizeof(int), 1, f);
    //
    //         fwrite(arr[i].first_name, sizeof(char), len, f);
    //         len = strlen(arr[i].last_name)+1;
    //
    //         fwrite(&len, sizeof(int), 1, f);
    //         fwrite(arr[i].last_name, sizeof(char), len, f);
    //     }
    //     fclose(f);
    // }
    // for (int i = 0; i < size; i++) {
    //     delete[] arr[i].first_name;
    //     delete[] arr[i].last_name;
    // }
    // delete[] arr;


    int size = 0;
    Person *arr = nullptr;

    FILE *f = fopen("person.bin", "rb");
    if(f!= nullptr)
    {
        fread(&size, sizeof(int), 1, f);
        arr = new Person[size];
        for (int i = 0; i < size; ++i)
        {
            fread(&arr[i].age, sizeof(int), 1, f);
            int len = 0;
            fread(&len, sizeof(int), 1, f);
            arr[i].first_name = new char[len];
            fread(arr[i].first_name, sizeof(char), len,f);
            fread(&len, sizeof(int), 1, f);
            arr[i].last_name = new char[len];
            fread(arr[i].last_name, sizeof(char), len,f);
        }
        fclose(f);
    }
    for (int i = 0; i < size; ++i)
    {
        std::cout<<arr[i].first_name<<" "<<arr[i].last_name<<", "<<arr[i].age<<std::endl;
    }
    for (int i = 0; i < size; ++i)
    {
        delete[] arr[i].last_name;
        delete[] arr[i].first_name;
    }
    delete[] arr;



    // Person arr[3] {};
    // FILE *f = fopen("person.bin", "rb");
    // if (f!= nullptr) {
    //     fread(arr, sizeof(Person), 3, f);
    //     fclose(f);
    // }
    //
    // for (int i = 0; i < 3; i++) {
    //     std::cout << arr[i].first_name << arr[i].last_name << arr[i].age << std::endl;
    // }


    // Person arr[] {
    //     Person{"Vasa", "Pubkin", 23},
    //     Person{"Petau", "BABBASd", 17},
    //     Person{"MAsha", "Petrova", 25}
    // };
    // FILE *f = fopen("person.bin", "wb");
    // if (f!= nullptr) {
    //     fwrite(arr, sizeof(Person), 3, f);
    //     fclose(f);
    // }












    // srand(time(NULL));
    // int size = 0;
    // int* arr = nullptr;
    //
    //
    // FILE*f = fopen("array.bin","rb");
    // if (f!= nullptr) {
    //     fread(&size, sizeof(int), 1, f);
    //     arr = new int[size]{};
    //     fread(arr, sizeof(int), size, f);
    // }
    //
    //
    // for (int i = 0; i < size; i++) {
    //     std::cout<< arr[i] << " ";
    // }
    // delete[] arr;









    // srand(time(NULL));
    // int size = rand()% 10+10;
    // int* arr = new int[size];
    // for (int i = 0; i < size; i++) {
    //     arr[i] = rand()%26+65;
    // }
    //
    // FILE *f = fopen("array.bin", "wb");
    // if (f != nullptr) {
    //     fwrite(&size, sizeof(int), 1, f);
    //     fwrite(arr, sizeof(int), size, f);
    //     fclose(f);
    // }
    //
    //
    // delete[] arr;



    // int a[5]{65,66,67,68,69}, b[5]{};
    // FILE * f = fopen("array.bin", "wb");
    // if (f!= nullptr) {
    //     fwrite(a, sizeof(int), 5, f);
    //     fclose(f);
    // }
    //
    // f = fopen("array.bin", "rb");
    // if (f!= nullptr) {
    //     fread(b, sizeof(int), 5, f);
    // }
    // for (int i = 0; i < 5; i++) {
    //     std::cout << b[i] << std::endl;
    // }


    // FILE * f = fopen ("text.txt", "r");
    //
    // int counter = 0;
    // char** lines = nullptr;
    // if (f != nullptr) {
    //     char buf[500];
    //     while (fgets(buf, 500,f)) {
    //         counter++;
    //     }
    //     lines = new char*[counter]{};
    //     fseek(f, 0, SEEK_SET);
    //     for (int i = 0; i < counter; i++) {
    //         fgets (buf, 500, f);
    //         lines[i] = new char[strlen(buf) + 1]{};
    //         strcpy (lines[i], buf);
    //     }
    //     fclose (f);
    // }
    // f = fopen ("text1.txt", "w");
    // if (f != nullptr) {
    //     for (int i = counter-1; i >= 0; --i) {
    //         fputs (lines[i], f);
    //     }
    //     fclose (f);
    // }
    //
    // for (int i = 0; i < counter; i++) {
    //     delete[] lines[i];
    // }
    // delete[] lines;

}