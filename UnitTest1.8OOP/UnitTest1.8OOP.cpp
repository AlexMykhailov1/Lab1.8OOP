#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1.8OOP/Payment.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest18OOP
{
	TEST_CLASS(UnitTest18OOP)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment P1;
			P1.SetName("a");
			string name = "a";
			Assert::AreEqual(name, P1.GetName());
			
		}
	};
}
