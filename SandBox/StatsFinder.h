#pragma once
#include "DataStats.h"

template<typename T, class D>
class DataValue {
};

template<class D>
class DataValue<int, D> {
 public:
  static inline int getValue(const D& data, int index) { return data.getInt(index); }
};

template<class D>
class DataValue<float, D> {
 public:
  static inline float getValue(const D& data, int index) { return data.getFloat(index); }
};

template<typename T, class D>
class StatsFinder {
public:
  static DataStats find(const D& data);
};

template<typename T, class D> DataStats
StatsFinder<T, D>::find(const D& data) {
  DataStats data_stats;
  int data_size = data.getSize();
  for (int i = 0; i != data_size; ++i) {
    data_stats.addValue(DataValue<T, D>::getValue(data, i));
  }
  return data_stats;
}
