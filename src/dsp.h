#ifndef DSP_H_
#define DSP_H_

#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

namespace DSP {

class Statistics {
public:
  static float average(const std::shared_ptr<std::vector<float>> &array,
                       int size);
  static float variance(const std::shared_ptr<std::vector<float>> &array,
                        int size);
};

} // namespace DSP

#endif