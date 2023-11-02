#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_1_it/PR6_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61it
{
	TEST_CLASS(UnitTest61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[5] = { 6, 2, 4, 3, 5 };
			Change(t, 5);
			int res[5] = { 0, 0, 0, 3, 0 };
			for (int i = 0; i < 5; i++)
				Assert::AreEqual(t[i], res[i]);
		}
	};
}
