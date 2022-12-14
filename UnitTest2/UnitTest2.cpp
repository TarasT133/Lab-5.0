#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k;
			k = t(1.);
			Assert::AreEqual(k, 2,4);

		}
	};
}
