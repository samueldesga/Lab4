#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace fonctionsModelesTests
{		
	TEST_CLASS(exemplesFonctionsGeneriques)
	{
	public:

		// Exemple de fonctions génériques 

		TEST_METHOD(ExempleAvecMax_elementDeLaClasseAlgorithm)
		{
			//Une fonction similaire à TrouverMax existe dans la classe algorithm
			float tabFloat[5] = { 22.2f, 11.1f, 33.1f, -55.5f, -99.9f };
			Assert::AreEqual(33.1f, *max_element(tabFloat, tabFloat + 5));
		}

		TEST_METHOD(ExempleAvecAccumalteDeLaClasseAlgoritm)
		{
			//Une fonction similaire à CalculerSomme existe dans la classe numeric
			float tabFloat[5] = { 22.2f, 11.1f, 33.1f, -55.5f, -99.9f };
			float sommeAttendue = tabFloat[0] + tabFloat[1] + tabFloat[2] + tabFloat[3] + tabFloat[4];
			Assert::AreEqual(sommeAttendue, accumulate(tabFloat, tabFloat + 5, float(0)));

			string tabString[5] = { "Huit", "Cinq", "Deux", "Trois", "Quatre" };
			string concatenationAttendue = tabString[0] + tabString[1] + tabString[2] + tabString[3] + tabString[4];
			Assert::AreEqual(concatenationAttendue, accumulate(tabString, tabString + 5, string("")));
		}

	};
}