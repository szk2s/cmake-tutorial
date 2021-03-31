// A simple program that computes the square root of a number
#include "TutorialConfig.h"
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include "MathFunctions.h"

int main(int argc, char *argv[]) {
  // if (argc < 2) {
  //   // report version
  //   std::cout << "Version " << TUTORIAL_VERSION_MAJOR << "."
  //             << TUTORIAL_VERSION_MINOR << std::endl;
  //   std::cout << "Usage: " << argv[0] << " number" << std::endl;

  //   const std::unordered_map<std::string, double> map{
  //       {"a", 0.0}, {"b", 1.0}, {"c", 2.0}};
        
  //   // map.contains() is C++20 feature
  //   std::cout << (map.contains("a") ? "true" : "false") << std::endl;

  //   return 1;
  // }

  // convert input to double
  constexpr double inputValue = 9;
  // calculate square root
  constexpr double outputValue = mysqrt(inputValue);
  static_assert(outputValue == 3);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;

  return 0;
}
