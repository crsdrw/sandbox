#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SandBox/MyFunction.h"
#include <chrono>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SandboxTest
{
	TEST_CLASS(AssemblyTest)
	{
	public:
		
		TEST_METHOD(TestFunction)
		{
      unsigned int i = std::chrono::duration_cast<std::chrono::hours>
        (std::chrono::system_clock::now().time_since_epoch()).count();
      unsigned int j = sbx::MyFunction(i);
      Assert::AreEqual(3u, j);
		}

	};
}