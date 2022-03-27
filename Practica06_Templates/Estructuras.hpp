template <typename T>
class FakeStructure{
    private:
    T dato;

    public:
    // constructor
    FakeStructure(T dato){
        this->dato=dato;
    }

    // operator overloading
    bool operator < (FakeStructure f);
    bool operator > (FakeStructure f);
    bool operator == (FakeStructure f);
    bool operator != (FakeStructure f);

    FakeStructure<T> operator + (FakeStructure f);

    // getters and setters
    T getter();
};


// getter definition
template <typename T>
T FakeStructure<T>::getter(){
    return dato;
}

// overloading definitions
template <typename T>
bool FakeStructure<T>::operator <(FakeStructure f){
    return this->dato < f.dato;
}

template <typename T>
bool FakeStructure<T>::operator >(FakeStructure f){
    return this->dato > f.dato;
}

template <typename T>
bool FakeStructure<T>::operator ==(FakeStructure f){
    return this->dato == f.dato;
}

template <typename T>
bool FakeStructure<T>::operator !=(FakeStructure f){
    return this->dato != f.dato;
}

template <typename T>
FakeStructure<T> FakeStructure<T>::operator + (FakeStructure f){
    return FakeStructure(this->dato + f.dato);
}