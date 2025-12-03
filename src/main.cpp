#include <iostream>
int main() {
    if (__cplusplus == 201703L) {
        std::cout << "C++17" << std::endl;
    } else if (__cplusplus == 201402L) {
        std::cout << "C++14" << std::endl;
    } else if (__cplusplus == 201103L) {
        std::cout << "C++11" << std::endl;
    } else if (__cplusplus == 199711L) {
        std::cout << "C++98/03" << std::endl;
    } else {
        std::cout << "Unknown C++ standard or newer version" << std::endl;
    }
    std::cout << "__cplusplus value: " << __cplusplus << std::endl;
    return 0;
}