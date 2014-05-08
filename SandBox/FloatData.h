#pragma once
#include <vector>

class FloatData {
  std::vector<float> data_;
public:
  FloatData(int size) : data_(size) {}
  float getFloatAt(int index) const { return data_[index]; }
  void  setFloatAt(int index, float value) { data_[index] = value; }
  int   getSize() const { return data_.size(); }
};

