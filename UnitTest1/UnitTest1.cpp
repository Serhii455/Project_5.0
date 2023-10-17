#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.1/5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double g;
			double e = 2.71;
			g = h(3, 3);
			if ((3-3)>e) {
				Assert::AreEqual(g, 18.1397);
			}
		}
	};
}
