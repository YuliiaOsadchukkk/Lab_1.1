#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.1/Progression.h"
#include "../Lab_1.1/Progression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Progression pgr;
			Assert::AreEqual(pgr.Init(1, 0), false);

		}
	};
}
