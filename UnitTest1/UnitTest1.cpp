#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3_PDC/Lab3_PDC.cpp"

extern int combinations(int n, int r);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestCombinations)
		{
			Assert::AreEqual(715, combinations(13, 4), L"Combinations of 13 taken 4 at a time should be 715");
			Assert::AreEqual(10, combinations(5, 3), L"Combinations of 5 taken 3 at a time should be 10");
		}
	};
}
