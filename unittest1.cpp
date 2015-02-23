#include "stdafx.h"
#include "CppUnitTest.h"
#include "../fonctionsModeles/fonctionsModele.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define NB_ELEMENTS 5

namespace fonctionsModelesTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float  tabFloat[5] = { 22.2f, 11.1f, 11.1f, -55.5f, -99.9f };
			Assert::AreEqual(22.2f, TrouverMax(tabFloat, NB_ELEMENTS));
		}

	};
}