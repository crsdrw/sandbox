#pragma once
#include "CppUnitTest.h"

namespace MyLogger {
  void WriteMessage(const std::string& msg) {
    using Microsoft::VisualStudio::CppUnitTestFramework::Logger;
    Logger::WriteMessage(msg.c_str());
  }
}
