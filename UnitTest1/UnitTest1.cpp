#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_12.10/Lab_12.10.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Node* NoDe = new Node;
			NoDe->data = 10;
			Node* node = createNode(10);

			Assert::AreEqual(node, NoDe);
		}
	};
}
