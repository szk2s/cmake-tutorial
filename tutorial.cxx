// A simple program that computes the square root of a number
#include "TutorialConfig.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    // report version
    std::cout << "Version " << TUTORIAL_VERSION_MAJOR << "."
              << TUTORIAL_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }

  // convert input to double
  const double inputValue = atof(argv[1]);

  // calculate square root
  const double outputValue = sqrt(inputValue);
  std::cout << "The square root of " << inputValue << " is " << outputValue
            << std::endl;

  return 0;
}
