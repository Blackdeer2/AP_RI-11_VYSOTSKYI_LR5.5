#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.5/PR5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int depth = 0;
			t = sum(147896523, 0, depth);
			Assert::AreEqual(t, 45);
		}
	};
}
