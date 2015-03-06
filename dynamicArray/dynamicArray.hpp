
template <class T>
DynamicArray<T>::DynamicArray(){
	capacite = 100;
	tabElements = new T[100];
	for (int i = 0; i < 100; i++){
		tabElements[i] = T();
	}
}
template <class T>
DynamicArray<T>::DynamicArray(int _capacite){
	if (_capacite < 1){
		throw invalid_argument("Le tableau doit avoir une grandeur d'au moins 1");
	}
	else{
		capacite = _capacite;
		tabElements = new T[_capacite];
		for (int i = 0; i < _capacite; i++){
			tabElements[i] = T();
		}
	}

}
template <class T>
DynamicArray<T>::DynamicArray(const DynamicArray<T> & _source)
	:capacite(_source.capacite), tabElements(new T[_source.capacite])
{
	for (int i = 0; i < capacite; i++){
		tabElements[i] = _source.tabElements[i];
	}
}
template <class T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray<T> & _rhs) {
	if (&_rhs != this)
	{
		delete[] tabElements;
		this->capacite = _rhs.capacite;
		this->tabElements = new T[this->capacite];
		for (unsigned int i = 0; i < this->capacite; i++)
		{
			this->tabElements[i] = _rhs.tabElements[i];
		}
	}
	return *this;
}
template <class T>
bool DynamicArray<T>::operator==(const DynamicArray<T> & _rhs) const{

	if (this->capacite != _rhs.capacite){
		return false;
	}

	for (int i = 0; i < this->capacite; i++){
		if (this->tabElements[i] != _rhs.tabElements[i]){
			return false;
		}
	}

	return true;
}
template <class T>
void DynamicArray<T>::operator+=(const DynamicArray<T> & _rhs) {
	int oldCapacite = this->capacite;
	int newCapacite = oldCapacite + _rhs.capacite;
	this->setCapacite(newCapacite);
	int compteur = 0;
	for (int i = oldCapacite; i < newCapacite; i++){
		this->setElement(i, _rhs.tabElements[compteur]);
		compteur++;
	}

}
template <class T>
DynamicArray<T>::~DynamicArray(){

}
template <class T>
void DynamicArray<T>::setElement(int _index, T _valeur){
	if (_index >= capacite){
		setCapacite(_index + 1);
	}

	tabElements[_index] = _valeur;
}
template <class T>
T DynamicArray<T>::getElement(int _index){
	if (capacite <= _index || _index < 0){
		throw out_of_range("L'index est en dehors des bornes du tableau");
	}
	else{
		return tabElements[_index];
	}

}
template <class T>
int DynamicArray<T>::getCapacite(){

	return capacite;
}
template <class T>
void DynamicArray<T>::setCapacite(int _capacite){
	if (_capacite >= 1){
		T * tempTabChangeCapacite = new T[_capacite];
		for (int i = 0; i < _capacite; i++){
			tempTabChangeCapacite[i] = T();
		}
		if (capacite > _capacite){
			for (int i = 0; i < _capacite; i++){
				tempTabChangeCapacite[i] = tabElements[i];
			}
		}
		else{
			for (int i = 0; i < capacite; i++){
				tempTabChangeCapacite[i] = tabElements[i];
			}
		}

		capacite = _capacite;
		delete tabElements;
		tabElements = tempTabChangeCapacite;

	}
	else{
		throw invalid_argument("Le tableau doit au moins avoir une capacité de 1");
	}

}