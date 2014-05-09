#pragma once
#include "CppUnitTest.h"

namespace MyLogger {
  void WriteMessage(const std::string& msg) {
    Microsoft::VisualStudio::CppUnitTestFramework::Logger::WriteMessage(msg.c_str());
  }
}