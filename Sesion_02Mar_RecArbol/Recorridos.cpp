
#include <iostream>
using namespace std;

    typedef struct Node {
        int info;
        struct Node *left;
        struct Node *right;
    }nodo;


class arbol{

    /* Cada nodo de un árbol contiene a lo más dos hijos (uno izquierdo y uno derecho) */


    nodo *root;


public:
    arbol();
    ~arbol();

    nodo *getRoot();
    void setRoot(int X);
    nodo *createNode(int data);
    nodo *insertaHijoIzquierdo(nodo* actual,int data);
    nodo *insertaHijoDerecho(nodo* actual,int data);
    nodo *getHijoIzq(nodo *actual);
    nodo *getHijoDer(nodo *actual);
    int getInfo(nodo *actual);
    void recorridoInOrder(nodo *actual);
    void recorridoPreOrder(nodo *actual);
    void recorridoPostOrder(nodo *actual);
    void recorridoAlrevez(nodo *actual);
};

arbol::arbol(){
    root=NULL;
}
 

arbol::~arbol(){

}

//Recorrido inorder
void arbol::recorridoInOrder(nodo *actual){
    if (actual){
        nodo *hijoIzq=actual->left;
        nodo *hijoDer=actual->right;
        recorridoInOrder(hijoIzq);
        cout<<"Visitando el nodo:"<<actual->info<<endl;
        recorridoInOrder(hijoDer);
    }
}

//Recorrido preorder

void arbol::recorridoPreOrder(nodo *actual){
    if (actual){
        nodo *hijoIzq=actual->left;
        nodo *hijoDer=actual->right;
        cout<<"Visitando el nodo:"<<actual->info<<endl;
        recorridoPreOrder(hijoIzq);
        recorridoPreOrder(hijoDer);
    }
}


//Recorrido postorder

void arbol::recorridoPostOrder(nodo *actual){
    if (actual){
        nodo *hijoIzq=actual->left;
        nodo *hijoDer=actual->right;
        recorridoPostOrder(hijoIzq);
        recorridoPostOrder(hijoDer);
        cout<<"Visitando el nodo:"<<actual->info<<endl;

    }
}

//Recorrido Alrevez

void arbol::recorridoAlrevez(nodo *actual){
    if (actual){
        nodo *hijoIzq=actual->left;
        nodo *hijoDer=actual->right;
        recorridoAlrevez(hijoDer);
        cout<<"Visitando el nodo:"<<actual->info<<endl;
        recorridoAlrevez(hijoIzq);

    }
}

nodo *arbol::getRoot(){
    return root;
}

void arbol::setRoot(int X){
    nodo *newNode=createNode(X);
    /*nodo *newNode=new Node();
    newNode->info=X;
    newNode->hijoIzq=NULL;
    newNode->hijoDer=NULL;*/
    root=newNode;
}


nodo *arbol::createNode(int data){
    nodo *newNode= new Node();
    newNode->info=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

nodo *arbol::insertaHijoIzquierdo(nodo* actual,int data){
    nodo *hijoIzq=createNode(data);
    actual->left=hijoIzq;
    return hijoIzq;
}
 

nodo *arbol::insertaHijoDerecho(nodo* actual,int data){
    nodo *hijoDer=createNode(data);
    actual->right=hijoDer;
    return hijoDer;
}

 nodo *arbol::getHijoIzq(nodo *actual){
    nodo *hijoIzq=actual->left;
    return hijoIzq;
 }
 

 nodo *arbol::getHijoDer(nodo *actual){
    nodo *hijoDer=actual->right;
    return hijoDer;
 }


 int arbol::getInfo(nodo *actual){
    int x=actual->info;
    return x;
 }
 
 
/* Driver program to test above functions*/
int main()
{
    arbol T;
    nodo *nodoActual;
    nodo *newNode;
    int valor;
    bool inserta=false;
    cout<<"Introduce un valor entero a insertar en el arbol (Utilice -1 para terminar):\n";
    cin>>valor;
    while (valor!=-1){
        if (T.getRoot()==NULL){ //Eres el primer elemento en ingresar al arbol
            cout<<"Insertando la raiz:"<<valor<<endl;
            T.setRoot(valor);
        }
        else{  //La raiz ya existe
            nodoActual=T.getRoot();
            inserta=false;
            while (!inserta){
                if (T.getInfo(nodoActual)==valor){
                    cout<<"Elemento existente\n";
                    inserta=true;
                }
                else if (valor<T.getInfo(nodoActual)){
                    //Me muevo hacia la izq
                    if (nodoActual->left!=NULL){
                        nodoActual=nodoActual->left;
                    }
                    else{//Alli debes insertar
                        newNode=T.createNode(valor);
                        nodoActual->left=newNode;
                        cout<<"Insertando a la izquierda de: "<<T.getInfo(nodoActual)<<" nodo:"<<valor<<endl;
                        inserta=true;
                    }
                }
                else{
                    //Me muevo hacia la der
                        if (nodoActual->right!=NULL){
                            nodoActual=nodoActual->right;
                        }
                        else{
                            newNode=T.createNode(valor);
                            nodoActual->right=newNode;
                            cout<<"Insertando a la derecha de: "<<T.getInfo(nodoActual)<<" nodo:"<<valor<<endl;    
                            inserta=true;                        
                        }
                }
            }
        }
        cout<<"Introduce un valor entero a insertar en el arbol (Utilice -1 para terminar):\n";
        cin>>valor;
    }
    cout<<"Recorrido InOrder:\n";
    T.recorridoInOrder(T.getRoot());
    cout<<"Recorrido Alrevez:\n";
    T.recorridoAlrevez(T.getRoot());
    return 0;
}











