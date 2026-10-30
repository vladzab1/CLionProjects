#include <iostream>
#include <cstring>
int main() {
    // FILE * f= fopen("text.txt", "r");
    // if (f != nullptr) {
    //     char buf[500];
    //     while (!feof(f)) {
    //         fgets(buf, 500, f);
    //         char buf1[500];
    //         bool found = false;
    //         FILE * f2 = fopen("text1.txt", "r");
    //         if (f2 != nullptr) {
    //             while (!feof(f2)) {
    //                 fgets(buf1, 500, f2);
    //                 if (strcmp(buf, buf1) == 0) {
    //                     found = true;
    //                 }
    //             }
    //             if (found == false) {
    //                 std::cout << buf << std::endl;
    //             }
    //             fclose(f2);
    //         }
    //     }
    //     fclose(f);
    // }




    int chars = 0, lines = 0, vowels = 0, consonants = 0, digits = 0;
    FILE * f = fopen("text.txt", "r");
    if (f != nullptr) {
        char buf;
        while (!feof(f)) {
            buf = fgetc(f);
            chars++;
            if (buf == 'a' || buf == 'e' || buf == 'i'
                || buf == 'o' || buf == 'u' || buf == 'A'
                || buf == 'E' || buf == 'I' || buf == 'O'
                || buf == 'U') {
                vowels++;
                } else if (buf == 'b' || buf == 'c' || buf == 'd' || buf == 'f' || buf == 'g' ||
                   buf == 'h' || buf == 'j' || buf == 'k' || buf == 'l' || buf == 'm' ||
                   buf == 'n' || buf == 'p' || buf == 'q' || buf == 'r' || buf == 's' ||
                   buf == 't' || buf == 'v' || buf == 'w' || buf == 'x' || buf == 'y' ||
                   buf == 'z' ||
                   buf == 'B' || buf == 'C' || buf == 'D' || buf == 'F' || buf == 'G' ||
                   buf == 'H' || buf == 'J' || buf == 'K' || buf == 'L' || buf == 'M' ||
                   buf == 'N' || buf == 'P' || buf == 'Q' || buf == 'R' || buf == 'S' ||
                   buf == 'T' || buf == 'V' || buf == 'W' || buf == 'X' || buf == 'Y' ||
                   buf == 'Z') {

                    consonants++;
                   }
                else if (isdigit(buf)) {
                    digits++;
                } else if (buf == '\n') {
                    lines++;
                }
        }
        fclose(f);
    }
    FILE * f1 = fopen("text1.txt", "w");
    if (f1 != nullptr) {
        char buf[100];
        sprintf(buf, "%d %d %d %d %d", --chars, lines ,vowels, consonants, digits);
        fputs(buf, f1);
        fclose(f1);
    }
}