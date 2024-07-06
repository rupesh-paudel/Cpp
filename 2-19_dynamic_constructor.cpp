#include <iostream>
#include <cstring>
using namespace std;

class String {
    char *name;
    int length;
public:
    // Default constructor
    String() {
        length = 0;
        name = new char[length + 1]; // Dynamic constructor
        name[0] = '\0'; // Initialize with empty string
    }
    
    // Parameterized constructor
    String(const char *s) {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }
    
    // Destructor to free allocated memory
    ~String() {
        delete[] name;
    }
    
    // Display function
    void display() const {
        cout << "\nThe string is: " << name;
    }
    
    // Join function to concatenate two strings
    void join(const String &a, const String &b) {
        length = a.length + b.length;
        delete[] name; // Properly delete the allocated memory
        name = new char[length + 1];
        strcpy(name, a.name);
        strcat(name, b.name);
    }
};

int main() {
    String name1("Rupesh");
    String name2("Paudel");
    String s1;
    s1.join(name1, name2);
    s1.display();
    return 0;
}
