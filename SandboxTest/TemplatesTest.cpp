#include "stdafx.h"
#include "CppUnitTest.h"
#include "../SandBox/MyClass.h"
#include "../SandBox/Bar.h"
#include "../SandBox/Foo.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SandboxTest {
	TEST_CLASS(TemplatesTest) {
	public:
		
		TEST_METHOD(TestInternalTemplate) {
      sbx::MyClass mc;
      mc.MyFunction(false);
      mc.MyFunction(true);
		}

    TEST_METHOD(TestClassTemplate) {
      Foo<int> x;
      x.f();
      x.g();
      x.h();
    }

    TEST_METHOD(TestMemberFunctionTemplate) {
      sbx::MyClass mc;
      mc.MyTemplateFunction<int>();
    }
	};
} // namespace SandboxTest