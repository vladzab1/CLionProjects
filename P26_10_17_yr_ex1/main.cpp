#include <iostream>
#include <cstring>
int main () {
    // FILE * f = fopen("text.txt", "r");
    //
    // if (f != nullptr) {
    //     FILE * f1 = fopen("text1.txt", "w");
    //     if (f1 != nullptr) {
    //         char buf[500];
    //         while (!feof(f)) {
    //            fgets(buf, 500, f);
    //            fputs(buf, f1);
    //         }
    //         fclose(f1);
    //     }
    //     fclose(f);
    // }

    FILE * f = fopen("text.txt", "r");

    if (f != nullptr) {
        FILE * f1 = fopen("text1.txt", "w");
        if (f1 != nullptr) {
            char buf[500];
            while (!feof(f)) {
                fgets(buf, 500, f);
                char * word = strtok(buf, " ");
                while (word != nullptr) {
                    if (strlen(word) > 7) {
                        fputs(word, f1);
                    }
                    word = strtok(nullptr, " ");
                }
            }
            fclose(f1);
        }
        fclose(f);
    }







    //write
    // FILE * f = fopen("test.txt", "w");
    // if (f != nullptr) {
    //     fputs("Hello file", f);
    //     fclose(f);
    // }

    //read
    // FILE *f = fopen("test.txt", "r");
    // if (f != nullptr) {
    //     char buf[500];
    //     // while (!feof(f)) {
    //     //     fgets(buf, 500, f);
    //     //     std::cout << buf;
    //     // }
    //     // while (fgets(buf, 500, f) != nullptr) {
    //     //     fgets(buf, 500, f);
    //     //     std::cout << buf;
    //     // }
    //     while (!feof(f)) {
    //         char c = fgetc(f);
    //         if (c != -1) {
    //             std::cout << c;
    //         }
    //     }
    //     fclose(f);
    // }

    // FILE * f = fopen("test.txt", "w");
    // if (f != nullptr) {
    //     fputs("Hello file", f);
    //     fseek(f, 4, SEEK_SET);
    //     std::cout << ftell(f) << std::endl;
    //     fputc(' ', f);
    //     std::cout << ftell(f) << std::endl;
    //     fclose(f);
    // }


    // int num = 4, n =23;
    // const int * pt = &num;
    // std::cout << num << std::endl;
    // pt = &n;
    // std::cout << *pt << std::endl;
    // const int val = 555;
    // pt = &val;
    // int * const ptr =&num;
    // *ptr = 9;
    // std::cout << *ptr << std::endl;
    // int const * const cptr = &val;
    // std::cout << cptr << std::endl;
    // srand (time(0));
    // int num = rand()%10;
    // std::cout << "is a "<<(num%2==0?" even ":" odd ")<<"number"<< std::endl;
}