#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
 
    int size = 15; 
    int center = size / 2;

    

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
       
            int distance = std::max(std::abs(i - center), std::abs(j - center));
            

            if (distance % 2 == 0) {
                std::cout << "1 ";
            } else {
                std::cout << "0 ";
            }
        }
        std::cout << "\n"; 

    return 0;
}