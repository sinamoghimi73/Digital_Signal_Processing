#ifndef DSP_H_
#define DSP_H_

#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

class DSP {
public:
  static float average(const std::shared_ptr<std::vector<float>> &array,
                       int size);
  static float variance(const std::shared_ptr<std::vector<float>> &array,
                        int size);
};

#endif