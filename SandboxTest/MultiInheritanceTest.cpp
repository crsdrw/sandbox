#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SandBox/Impl.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SandboxTest
{		
	TEST_CLASS(MultiInheritanceTest)
	{
	public:
		
		TEST_METHOD(TestCanUseDiamond)
		{
      sbx::Impl impl;
      impl.BaseDo();
      impl.LeftDo();
      impl.BaseMake();
      sbx::Base& base_ref = impl;
      base_ref.BaseMake();
		}

	};
}