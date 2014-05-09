#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SandBox/FloatData.h"
#include "../SandBox/IntData.h"
#include "../SandBox/DataStats.h"
#include "../SandBox/StatsFinder.h"
#include "MyLogger.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SandboxTest
{
	TEST_CLASS(DataStatsTest)
	{
	public:
		
		TEST_METHOD(TestStatsFinderInt)
		{
      IntData int_data(3);
      int_data.setInt(1, 6);
      DataStats data_stats = StatsFinder<int, IntData>::find(int_data);
      MyLogger::WriteMessage(std::to_string(data_stats.getAverage()));
		}

	};
}