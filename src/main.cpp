#include <iostream>

int main(int argc, char** argv) {
   float temp{};

   std::cout << "Enter a temperature in Fahrenheit: "
   std::cin >> temp;

   if ( temp < 32 ) {
       std::cout << "Above freezing!\n"
   } else {
       std::cout << "Below freezing!\n"
   }

   return 0;
}
