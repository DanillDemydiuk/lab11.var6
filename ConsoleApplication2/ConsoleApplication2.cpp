
#include <iostream>

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int a, b;
    std::cout << "Введіть ціле число a: ";
    std::cin >> a;
    std::cout << "Введіть ціле число b: ";
    std::cin >> b;

    
    int* ptrA = &a;
    int* ptrB = &b;

   
    if (*ptrA > *ptrB) {
        *ptrA *= 5;  
        *ptrB -= 5;  
    }
    else {
        *ptrB *= 5;  
        *ptrA -= 5;  
    }

   
    std::cout << "Значення a після змін: " << a << std::endl;
    std::cout << "Значення b після змін: " << b << std::endl;

    return 0;
}