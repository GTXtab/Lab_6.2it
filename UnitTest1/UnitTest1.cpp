#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2it/Lab_6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 10;
			int arr[size];
			genArray(arr, size);

			for (int i = 0; i < size; i++)
				Assert::AreEqual(i + 1, arr[i]);
		}
	};
}
