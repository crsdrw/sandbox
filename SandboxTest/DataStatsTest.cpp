#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\SandBox\DataStats.h"
#include "..\SandBox\StatsFinder.h"
#include "..\SandBox\IntData.h"
#include "..\SandBox\FloatData.h"
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
      int_data.setInt(2, 6);
      StatsFinder<int, IntData> stats_finder(int_data);
      DataStats data_stats = stats_finder.find();
     // MyLogger::WriteMessage(std::to_string(data_stats.getAverage()));
      Assert::AreEqual(2.0f, data_stats.getAverage());
    }

	};
}