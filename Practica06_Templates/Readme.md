# Templates
## Práctica 06 : Guillermo Alberto Jiménez Frías

### Referencias:
<https://en.cppreference.com/w/cpp/language/templates>

## ¿Que son los templates?
Los _templates_ (o plantillas) son una característica de C++, que permite a funciones y clases ser operadas con tipos genéricos. Esto permite a una función o clase trabajar con muchos tipos de datos diferentes sin tener que reescribirlas para cada uno

## ¿Implementación?

Se implementan en los archivos headers debido a ....

## Sintáxis
```
template<parameter list> declaration;

```

Ejemplo: Valor Absoluto de un número \\
Nota que no sabemos que tipo de dato es número

// class & typename son sinónimos
template<typename T>
void Print(T value){
    std::cout << value << std::endl;
}

int main(){
    //Print(5);
    //Print("Helo");
    //Print(5.5f);

    Print<int>(6);

    std::cin.get();
    return 0;
}


## Notas

- Si nunca utilizamos la función Print, realmente la función nunca existe. Es una plantilla, solo cuando es llamada crea una función. En otro caso podemos tener errores y el compilador no los idetificará.


Otro ejemplo:
```
template<typename T, int N>
class Array{
private:
    T n_Array[N];
public:
    int GetSize() const { return N; }
};

int main(){

    Array<std::string, 50> array;
    std::cout << array.GetSize() << std::endl;

    std::cin.get();
    return 0;
}
```




