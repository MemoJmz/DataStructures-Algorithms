#include <iostream>
#include <cstdlib>

using namespace std;

class Node{
private:
	int info;
	Node *prev;
	Node *next;
public:
	Node(){
        prev=NULL;
        next=NULL;
	}
	Node(int Valor){
       info=Valor;
	}
	void set_info(int x){ 
		info=x; 
	}
	void set_prev(Node *x){ 
		prev=x; 
	}
	void set_next(Node *x){ 
		next=x; 
	}
	int get_info(){ 
		return this->info; 
	}
	Node *get_prev(){ 
		return this->prev; 
	}
	Node *get_next(){ 
		return this->next; 
	}
};

class ListaDoble
{
private:
	Node *head;
public:
	ListaDoble()
	{
		head=new Node();
		head->set_info(0);
		head->set_prev(NULL);
		head->set_next(NULL);
	}
    void inserta_al_inicio(int valor);
};

// void ListaDoble::inserta_al_inicio(int valor){
//     Node *newNode = new Node(valor);    // Declara un apuntador a un nodo. Luego lo inicializa con un valor. En este momento tenemos un objeto NewNode
//     newNode->set_next(head->get_next());
//     if(head->get_next()!=NULL){
//         (head->get_next())->set_prev(newNode);
//     }
//     head->set_next()

// }

int main()
{
	int n,x;
	ListaDoble l=ListaDoble();
	return 0;
}