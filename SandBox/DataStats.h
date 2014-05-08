#pragma once

class DataStats {
  float sum_;
  int   size_;
  DataStats(int size) : size_(size) {}
public:
  template<typename T> addValue(T value) { sum_ += value; }
  float getAverage() { sum_ / size_; }
};