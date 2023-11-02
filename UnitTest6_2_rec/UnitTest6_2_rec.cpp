#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_2_rec/PR6_2_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62rec
{
	TEST_CLASS(UnitTest62rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[2] = { 5, 9 };
			Inverse(t, 2, 0);
			int res[4] = { 9, 5 };
			for (int i = 0; i < 2; i++)
				Assert::AreEqual(t[i], res[i]);
		}
	};
}
