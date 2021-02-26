#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 7.3-1(ітерація).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7311
{
	TEST_CLASS(UnitTest7311)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3][3] = { { -1, 2, 3 },{ 4, 5, 6 },{ 7, 8, -9 } };
			int* pa[3] = { a[0], a[1], a[2] };
			int S = 0;

			S = Sum(pa, 3, 3);

			Assert::AreEqual(S, 10);
		}
	};
}
