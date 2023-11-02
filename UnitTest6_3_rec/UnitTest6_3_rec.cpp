#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_3_rec/PR6_3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63rec
{
	TEST_CLASS(UnitTest63rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[7] = { 0, 1, 4, 3, 5, 8, 6 };
			bool result;
			Check(t, 7, result, 0);
			Assert::AreEqual(result, false);
		}
	};
}
