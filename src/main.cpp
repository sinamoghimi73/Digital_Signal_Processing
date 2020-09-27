#include "dsp.h"

int main() {

  int size{};
  while (size <= 0 && !std::cin.eof()) {
    std::cout << "Number of input values ? ";
    std::cin >> size;
  }

  std::shared_ptr<std::vector<float>> sig{
      std::make_shared<std::vector<float>>(size, 0)};

  if (sig == nullptr) {
    std::cerr << "Cannot allocate memory\n";
    return 0;
  }

  std::cout << "\nEnter values:\n";
  for (int count{0}; count < size; ++count) {
    if (!std::cin.eof())
      std::cin >> sig->at(count);
  }

  std::cout << DSP::Statistics::average(sig, size) << std::endl;
  std::cout << DSP::Statistics::variance(sig, size) << std::endl;
  return 0;
}