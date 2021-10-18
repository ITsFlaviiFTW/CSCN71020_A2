#include "pch.h"
#include "CppUnitTest.h"
extern "C"
{
#include "main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task1
{
	TEST_CLASS(Task1)
	{
	public:
		
		TEST_METHOD(GetPerimeter)
		{
			int result;
			int k = 3;
			int l = 3;
			result = getPerimeter(&k, &l);
			Assert::AreEqual(12, result);
		}
		TEST_METHOD(GetArea)
		{
			int result;
			int x = 5;
			int y = 10;
			result = getArea(&x, &y);
			Assert::AreEqual(50, result);
		}

		
		TEST_METHOD(SetLength1)
		{
			int k = 5;
			int l;
			setLength(k, &l);
			Assert::AreEqual(k, l);
		}
		TEST_METHOD(SetLength2)
		{
			int x = 0;
			int y;
			setLength(x, &y);
			Assert::AreNotEqual(x, y);
		}
		TEST_METHOD(SetLength3)
		{
			int k = 100;
			int l;
			setLength(k, &l);
			Assert::AreNotEqual(k, l);
		}
		TEST_METHOD(SetWidth1)
		{
			int x = 74;
			int y;
			setWidth(x, &y);
			Assert::AreEqual(x, y);
		}
		TEST_METHOD(SetWidth2)
		{
			int k = 0;
			int l;
			setWidth(k, &l);
			Assert::AreNotEqual(k, l);
		}
		TEST_METHOD(SetWidth3)
		{
			int x = 100;
			int y;
			setWidth(x, &y);
			Assert::AreNotEqual(x, y);
		}
		
	};
}
