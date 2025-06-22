#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void write_file() {
    std::ofstream file("output.txt");
    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }
    file << "Hello from modern C++!" << std::endl;
    file << "This is written using RAII" << std::endl;
}

void read_file() {
    std::ifstream file("data.txt");
    if(!file) return;

    std::string line;
    std::getline(file, line);
    std::cout << line << std::endl;
}
int main() {
    read_file();
    write_file();
    std::cout << "File opened successfully!" << std::endl;
    std::string name;
    int age;
    cout << "Enter your name: ";
    std::getline(std::cin, name);
    cout << "Enter your age: ";
    cin >> age;
    std::ofstream file("user.txt");
    if (!file) {
        std::cerr << "Error opening file!" << endl;
        return 1;
    }
    file << "Name of user: " << name << std::endl;
    file << "age of user: " << age << endl;
    std::ifstream ReadUserFile("user.txt");
    if (!ReadUserFile) {
        cerr << "error opening file" << endl;
        return 1;
    }
    string line;
    getline(ReadUserFile, line);
    std::cout << line << endl;
}
