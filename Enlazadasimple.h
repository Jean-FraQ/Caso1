void add (info pdato){}                  //Agrega un elemento al final de la lista
bool isempty (){}                        //Revisa si la lista está vacía
int lenght (){}                          //Obtiene el número de elementos de la lista (o su largo)
void addpos (info pdato, int posicion){} //Agrega un elemento en la posición seleccionada, si es mayor al largo de la lista lo inserta al final y si resibe una posición negativa, al inicio
void errase (){}                         //Elimina el último elemento agregdo a la lista
void errasepos (int posicion){}          //Elimina el elemento de la posiión solicitada, si es mayor al largo de la lista lo elimina al del final y si resibe una posición negativa, al del inicio
void erraseitem (info pdato){}           //Elimina los elementos que contengan el item seleccionado
void display (int posicion){}            //Imprime el elemento seleccionado 
void displayall (){}                     //Imprime todos los elementos de la lista
int findpos (info pdato){}               //Busca la posición del elemento deseado
info findinfo (int posicion){}           //Obtiene el elemento de en una posicion
bool isin (String llave, int pos){}      //Indica el elemento del a posición dada contiene la llave