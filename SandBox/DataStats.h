#pragma once

class DataStats {
  float sum_;
  int   size_;
public:
  DataStats() : size_(0), sum_(0.0) {}
  template<typename T> void addValue(T value) { sum_ += value; ++size_; }
  float getAverage() { return size_ > 0 ? sum_ / size_ : 0.0f; }
};