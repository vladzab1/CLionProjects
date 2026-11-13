//
// Created by vladosik on 11/13/26.
//

class my_string {
    char * string;
    int length;
    public:
    my_string();
    my_string(int len);
    my_string(const char * str);
    my_string(const my_string &obj);
    void write_string();
    void print_string();
    const char * get_string() const;
    ~my_string();
};

