#include <iostream>

using namespace std;

int main(int argc, char** argv) {
   float temp{};

   cout << "Enter a temperature in Fahrenheit: ";
   cin >> temp;

   if ( temp < 32 ) {
       cout << "Below freezing!\n";
   } else {
       cout << "Above freezing!\n";
   }

   return 0;
}
