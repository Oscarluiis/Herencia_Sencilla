#include <iostream>
using namespace std;

//A nivel de atributo solo public o private
//A nivel de clase, si heredan publica, heredan todos los atributos tal y como estan en la padre,
// en private, lo mismo, pero privado.
class Padre{
public:
    int variable_padre;
    void funcionPadre() {
        cout << "Ejecutando funcionPadre" << endl;
    }
};

class Hijo : public Padre{
public:
    void funcionPadre(){
        Padre::funcionPadre();
        cout<<"Ejecutando funcionPadre desde el hijo"<<endl;
    }
};

class Nieto : Hijo{
public:
    void otraPrueba(){
        variable_padre=20;
        cout<<variable_padre<<endl;

    }
};

int main (){

    //Polimorfismo (solo con aputadores)

    /*Padre *ptr = new Hijo();
    ((Hijo*)ptr)->funcionPadre();
*/
    /* Con apuntador :
     *
    Hijo hijo;
    Hijo *ptr = &hijo;
    ptr ->funcionPadre();
    */

    //ó

        /*Hijo hijo;
        hijo.funcionPadre();
        Nieto nieto;
        nieto.otraPrueba();
*/

    return 0;
};