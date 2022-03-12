namespace Lista
{
    class listaSimple
    {
        typedef struct nodo{
            int info;
            nodo *sig;
        } lista;
    
    lista *head;        
    public:
        listaSimple(){
            head=NULL;  
        }


        lista *getHead(){
            return head;
        }

      void inserta_al_final(int valor); // inserta un valor en orden no decreciente
      int elimina_del_inicio();
      int consulta_del_inicio();
      void imprimeLista();
    };


    void listaSimple::inserta_al_final(int valor){
        lista *i=(lista*)malloc(sizeof(lista));
        i->info=valor;
        if (head==NULL){
            head=i;
        }  
        else{
            i->sig=head;
            head=i;
        }
        return;
    }

    int listaSimple::elimina_del_inicio(){
        int x=-1;
        lista *p=getHead();
        if (p){
            x=p->info;
            std::cout<<"Sacando de la pila al elemento "<<x<<std::endl;
            head=p->sig;
            free(p);
        }
        else{
            std::cout<<"Pila vacia\n";
            exit(EXIT_FAILURE);
        }
        return x;
    }

    int listaSimple::consulta_del_inicio(){
        int x=-1;
        lista *p=getHead();
        if (p){
            x=p->info;
            std::cout<<"Consultando de la pila al elemento "<<x<<std::endl;
        }
        else{
            std::cout<<"Pila vacia\n";
            exit(EXIT_FAILURE);
        }
        return x;
    }

    void listaSimple::imprimeLista(){
        lista *p=getHead();
        while (p){
            std::cout<<p->info<<" ";
            p=p->sig;
        }
        std::cout<<"\n";
    }
}