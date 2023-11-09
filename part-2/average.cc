// Ethan Tran
// ethantran@csu.fullerton.edu
// @svtethan
// Partners:

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  bool first = true;
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum{0};
  for (const std::string& num : arguments) {
    if (first) {
      first = false;
      continue;
    }
    sum += std::stod(num);
  }
  double average{sum / static_cast<double>(arguments.size() - 1)};
  std::cout << "average = " << average << "\n";
  return 0;
}
