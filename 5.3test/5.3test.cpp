#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.3/lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My53test
{
	TEST_CLASS(My53test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x1 = 0.5;
			double expected1 = 0.4794255386;

			Assert::AreEqual(expected1, t(x1), 0.000001);
		}
	};
}
