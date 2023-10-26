#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5_5/PR5_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t, depth = 0;
			t = f(10, 11, 5, 1, depth);
			Assert::AreEqual(t, 35);
			Assert::AreEqual(depth, 2);

		}
	};
}
