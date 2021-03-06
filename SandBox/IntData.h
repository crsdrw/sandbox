#pragma once
#include <vector>

class IntData {
  std::vector<int> data_;
public:
  IntData(int size) : data_(size) {}
  int   getInt(int index) const { return data_[index]; }
  void  setInt(int index, int value) { data_[index] = value; }
  int   getSize() const { return data_.size(); }
};

