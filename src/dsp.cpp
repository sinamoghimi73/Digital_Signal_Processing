#include "dsp.h"

namespace DSP {
float Statistics::average(const std::shared_ptr<std::vector<float>> &array,
                          int size) {
  if (array == nullptr || size == 0)
    throw "Invalid parameters!";

  float sum{};
  for (const float num : *array) {
    sum += num;
  };
  return (sum / size);
}

float Statistics::variance(const std::shared_ptr<std::vector<float>> &array,
                           int size) {
  if (array == nullptr || size == 0)
    throw std::runtime_error("Invalid parameters!");

  float sum{}, sum2{};
  for (const float num : *array) {
    sum += num;
    sum2 += std::pow(num, 2.0);
  };

  float avg{sum / size};
  return ((sum2 - sum * avg) / (size - 1));
}

} // namespace DSP
