
template <typename T>
T TrouverMax(const T _tabType[], const int& nbElement)
{
	T max = _tabType[0];

	for (int i = 0; i < nbElement; i++)
	{
		if (_tabType[i] > max)
		{
			max = _tabType[i];
		}
	}

	return max;
}

template <typename T>
T CalculerSomme(const T _tabType[], const int& nbElement)
{
	T somme = _tabType[0];

	for (int i = 1; i < nbElement; i++)
	{
		somme += _tabType[i];
	}

	return somme;
}

template <typename T>
unsigned int CompterElement(const T _valeur, const T _tabType[], const int& nbElement)
{
	unsigned int compteur = 0;

	for (int i = 0; i < nbElement; i++)
	{
		if (_tabType[i] == _valeur)
		{
			compteur++;
		}
	}

	return compteur;
}