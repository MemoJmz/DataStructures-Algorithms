#include <iostream>
#include <string>
using namespace std;

class Empleado {
    private:
        // Private attribute (No podemos acceder mas que con un método)
        int salary;
        struct nom_empleado{
            string nombre;
            string apellido;
        }nom;

        struct horas_trabajadas{
            int horas_totales;
            double salario_base;
            double salario_extra;
        }hrs;

    public:
        //constructor
        Empleado(int xSalary){
            salary=xSalary;
        }
        ~Empleado(){};
        // Setter
        void setSalary(int s) {
            salary = s;
        }
        void set_nombre(string xNom, string xApellido){
            nom.nombre=xNom;
            nom.apellido=xApellido;
        }

        // Getter
        int getSalary() {
            return salary;
        }

        string get_nombre(){
            return nom.nombre;
        }

        string get_apellido(){
            return nom.apellido;
        }
        void crea_empleado();
        void imprimeEmpleado();

        double void TotalSalary(){
            double extra =  (double)(hrs.horas_totales - 40);
            if (extra > 0):
                return hrs.salario_base + hrs.salario_extra*extra;
            else:
                return hrs.salario_base;

        }
};

void Empleado::crea_empleado(){
    string xNom;
    string xApellido;
    cout<<"Introduzca el nombre del empleado:\n";
    cin >> xNom;
    cout<<"Introduzca el apellido del empleado:\n";
    cin >> xApellido;
    set_nombre(xNom,xApellido);
}


void Empleado::imprimeEmpleado(){
    //cout<<"Nombre:"<<nom.nombre<<"\n";
    cout<<"Nombre del empleado:"<<get_nombre()<<" "<<get_apellido()<<"\n";
}

//Elaborar una funciรณn que calcule el salario a pagarle al empleado
//El salario sera igual al salario base multiplicado por las horas trabajadas.
//En caso que tener mas de 40 horas trabajadas, las horas adicionales se pagaran a salario_extra multiplicado por las horas extra trabajadas

int main() {
    Empleado myObj=Empleado(30000);
    myObj.crea_empleado();
    myObj.imprimeEmpleado();
    cout << "Salario actual:" <<myObj.getSalary()<<" actual\n";
    myObj.setSalary(50000);
    cout << "Salario nuevo:" <<myObj.getSalary()<<" nuevo\n";

    return 0;
}
