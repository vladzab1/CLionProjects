#include <cstring>
#include <iostream>
struct Film {
    int id;
    char * name = nullptr;
    char * director = nullptr;
    char * genre = nullptr;
    double rating;
    double price;
};
void PrintFIlmInfo(Film &film) {
    std::cout << "Film name: ";
    std::cout << film.name << std::endl;
    std::cout << "FIlm director: ";
    std::cout << film.director << std::endl;
    std::cout << "FIlm genre: ";
    std::cout << film.genre << std::endl;
    std::cout << "Film rating: ";
    std::cout << film.rating << std::endl;
    std::cout << "Film price: ";
    std::cout << film.price << std::endl;
}

void InputFilm (Film &film) {
    char buf[500]{};
    std::cout << "Enter film name: ";
    std::cin.getline(buf, 500);
    film.name = new char[strlen(buf) + 1];
    strcpy(film.name, buf);

    std::cout << "Enter film director: ";
    std::cin.getline(buf, 500);
    film.director = new char[strlen(buf) + 1];
    strcpy(film.director, buf);

    std::cout << "Enter film genre: ";
    std::cin.getline(buf, 500);
    film.genre = new char[strlen(buf) + 1];
    strcpy(film.genre, buf);

    std::cout << "Enter film rating: ";
    std::cin >> film.rating;
    std::cout << "Enter film price: ";
    std::cin >> film.price;
    std::cin.ignore();
}
void add_Film (Film *&arr, int &size, int &id) {
    if (size == 0) {
        arr = new Film[1]{};
    } else {
        Film * tmp = new Film[size+1]{};
        for (int i = 0; i < size; i++) {
            tmp[i] = arr[i];
        }
        delete [] arr;
        arr = tmp;
    }
    arr[size].id = id++;
    InputFilm(arr[size]);
    size++;
}
void del_Film(Film *&arr, int & size)
{
    if (size == 0) {
        return;
    }
    delete[] arr[size-1].name;
    delete[] arr[size-1].director;
    delete[] arr[size-1].genre;
    if(size == 1)
    {
        delete[] arr;
        size = 0;
        return;
    }
    Film *tmp = new Film[--size];
    for (int i = 0; i < size; ++i)
    {
        tmp[i] = arr[i];
    }
    delete[] arr;
    arr = tmp;
}
int IdToIndex(Film *arr,int size ,int id) {
    for (int i = 0; i < size; i++) {
        if (arr[i].id == id) {
            return i;
        }
    }
    return -1;
}
void del_Film_By_Id(Film *&arr, int & size, int id) {
    int pos = IdToIndex(arr,size,id);

    if(pos < 0 || pos >=size)
        return;
    delete[] arr[pos].name;
    delete[] arr[pos].director;
    delete[] arr[pos].genre;
    if(size == 1)
    {
        delete[] arr;
        size = 0;
        return;
    }
    Film *tmp = new Film[--size];
    for (int i = 0, j = 0; i < size; ++i, ++j)
    {
        if(i==pos)
            j++;
        tmp[i] = arr[j];
    }
    delete[] arr;
    arr = tmp;
}

void WriteFilmArrToFile(Film arr[],int size) {
    FILE*f = fopen("film.bin", "wb");
    if (f != nullptr) {
        fwrite(&size, sizeof(int ), 1, f);

        for (int i = 0; i < size; i++) {
            fwrite(&arr[i].price, sizeof(double), 1, f);
            fwrite(&arr[i].rating, sizeof(double), 1, f);
            fwrite(&arr[i].id, sizeof(int), 1, f);

            int len = strlen(arr[i].name)+1;
            fwrite(&len, sizeof(int), 1, f);
            fwrite(arr[i].name, sizeof(char), len, f);

            len = strlen(arr[i].director)+1;
            fwrite(&len, sizeof(int), 1, f);
            fwrite(arr[i].director, sizeof(char), len, f);

            len = strlen(arr[i].genre)+1;
            fwrite(&len, sizeof(int), 1, f);
            fwrite(arr[i].genre, sizeof(char), len, f);
        }
        fclose(f);
    }
}


void ReadFIlmArrFromFile(Film *&arr, int &size) {
    FILE *f = fopen("film.bin", "rb");
    if(f!= nullptr)
    {
        fread(&size, sizeof(int), 1, f);
        arr = new Film[size];
        for (int i = 0; i < size; ++i)
        {
            fread(&arr[i].price, sizeof(double), 1, f);
            fread(&arr[i].rating, sizeof(double), 1, f);
            fread(&arr[i].id, sizeof(int), 1, f);

            int len = 0;
            fread(&len, sizeof(int), 1, f);
            arr[i].name = new char[len];
            fread(arr[i].name, sizeof(char), len,f);

            fread(&len, sizeof(int), 1, f);
            arr[i].director = new char[len];
            fread(arr[i].director, sizeof(char), len,f);

            fread(&len, sizeof(int), 1, f);
            arr[i].genre = new char[len];
            fread(arr[i].genre, sizeof(char), len,f);
        }
        fclose(f);
    }
}

int main() {
    int size = 0;
    int id = 1;
    Film * films = nullptr;
    add_Film(films, size, id);
    add_Film(films, size, id);
    add_Film(films, size, id);

    for (int i = 0; i < size; i++) {
        PrintFIlmInfo(films[i]);
    }

    WriteFilmArrToFile(films, size);

    del_Film(films, size);
    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        PrintFIlmInfo(films[i]);
    }

    del_Film_By_Id(films, size, 1);
    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        PrintFIlmInfo(films[i]);
    }
    std::cout << std::endl;

    for (int i = 0; i < size; i++) {
        delete[] films[i].name;
        delete[] films[i].director;
        delete[] films[i].genre;
    }

    delete [] films;




    int size1 = 0;
    Film * films1 = nullptr;
    ReadFIlmArrFromFile(films1, size1);
    for (int i = 0; i < size1; i++) {
        PrintFIlmInfo(films1[i]);
    }

    for (int i = 0; i < size1; i++) {
        delete[] films1[i].name;
        delete[] films1[i].director;
        delete[] films1[i].genre;
    }
    delete [] films1;
}