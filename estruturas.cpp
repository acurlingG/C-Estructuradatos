#include <iostream>
#include <queue>     // Para trabajar con colas
#include <stack>     // Para trabajar con pilas
#include <list>      // Para trabajar con listas enlazadas
#include <algorithm> // Para buscar elementos en listas

using namespace std;

// Declaración de funciones
void menu();
void menuListas();
void menuPilas();
void menuColas();

// Funciones para listas enlazadas
void agregarLista(list<int>&);
void borrarLista(list<int>&);
void consultarLista(list<int>&);
void imprimirLista(list<int>&);

// Funciones para pilas
void agregarPila(stack<int>&);
void borrarPila(stack<int>&);
void consultarPila(stack<int>&);
void imprimirPila(stack<int>&);

// Funciones para colas
void agregarCola(queue<int>&);
void borrarCola(queue<int>&);
void consultarCola(queue<int>&);
void imprimirCola(queue<int>&);

int main() {
    menu();
    return 0;
}

// Opcion Principal
void menu() {
    int opcion;
    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Listas Enlazadas\n";
        cout << "2. Pilas\n";
        cout << "3. Colas\n";
        cout << "4. Salir\n";
        cout << "Seleccione una Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                menuListas();
                break;
            case 2:
                menuPilas();
                break;
            case 3:
                menuColas();
                break;
            case 4:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no válida. Intente nuevamente.\n";
        }
    } while (opcion != 4);
}

// --- Listas Enlazadas ---
// Una lista enlazada es una estructura de datos en la que cada elemento (nodo) contiene un valor
// y una referencia (puntero) al siguiente elemento de la lista.
void menuListas() {
    list<int> lista; // Se define una lista de enteros
    int opcion;
    do {
        cout << "\n--- Opcion Listas Enlazadas ---\n";
        cout << "1. Agregar\n";
        cout << "2. Borrar\n";
        cout << "3. Consultar\n";
        cout << "4. Imprimir\n";
        cout << "5. Regresar al Opcion principal\n";
        cout << "Seleccione una Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarLista(lista);
                break;
            case 2:
                borrarLista(lista);
                break;
            case 3:
                consultarLista(lista);
                break;
            case 4:
                imprimirLista(lista);
                break;
            case 5:
                return;
            default:
                cout << "Opcion no válida. Intente nuevamente.\n";
        }
    } while (opcion != 5);
}

void agregarLista(list<int>& lista) {
    int valor;
    cout << "Ingrese un valor para agregar a la lista: ";
    cin >> valor;
    lista.push_back(valor); // Agrega el elemento al final de la lista
    cout << "Valor agregado a la lista.\n";
}

void borrarLista(list<int>& lista) {
    if (!lista.empty()) {
        lista.pop_back(); // Elimina el último elemento de la lista
        cout << "Último valor borrado de la lista.\n";
    } else {
        cout << "La lista está vacía.\n";
    }
}

void consultarLista(list<int>& lista) {
    int valor;
    cout << "Ingrese un valor para buscar en la lista: ";
    cin >> valor;
    auto it = find(lista.begin(), lista.end(), valor);
    if (it != lista.end()) {
        cout << "Valor encontrado en la lista.\n";
    } else {
        cout << "Valor no encontrado en la lista.\n";
    }
}

void imprimirLista(list<int>& lista) {
    cout << "Elementos en la lista: ";
    for (int val : lista) {
        cout << val << " ";
    }
    cout << endl;
}

// --- Pilas ---
// Una pila es una estructura de datos que sigue el principio LIFO (Last In, First Out),
// es decir, el último elemento en entrar es el primero en salir.
void menuPilas() {
    stack<int> pila;
    int opcion;
    do {
        cout << "\n--- Opcion Pilas ---\n";
        cout << "1. Agregar\n";
        cout << "2. Borrar\n";
        cout << "3. Consultar\n";
        cout << "4. Imprimir\n";
        cout << "5. Regresar al Opcion principal\n";
        cout << "Seleccione una Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarPila(pila);
                break;
            case 2:
                borrarPila(pila);
                break;
            case 3:
                consultarPila(pila);
                break;
            case 4:
                imprimirPila(pila);
                break;
            case 5:
                return;
            default:
                cout << "Opcion no válida. Intente nuevamente.\n";
        }
    } while (opcion != 5);
}

void agregarPila(stack<int>& pila) {
    int valor;
    cout << "Ingrese un valor para agregar a la pila: ";
    cin >> valor;
    pila.push(valor); // Agrega el elemento a la pila
    cout << "Valor agregado a la pila.\n";
}

void borrarPila(stack<int>& pila) {
    if (!pila.empty()) {
        pila.pop(); // Elimina el último elemento agregado
        cout << "Último valor borrado de la pila.\n";
    } else {
        cout << "La pila está vacía.\n";
    }
}

void consultarPila(stack<int>& pila) {
    if (!pila.empty()) {
        cout << "Elemento superior de la pila: " << pila.top() << endl;
    } else {
        cout << "La pila está vacía.\n";
    }
}

void imprimirPila(stack<int>& pila) {
    stack<int> copia = pila;
    cout << "Elementos en la pila: ";
    while (!copia.empty()) {
        cout << copia.top() << " ";
        copia.pop();
    }
    cout << endl;
}

// --- Colas ---
// Una cola es una estructura de datos que sigue el principio FIFO (First In, First Out),
// es decir, el primer elemento en entrar es el primero en salir.
void menuColas() {
    queue<int> cola;
    int opcion;
    do {
        cout << "\n--- Opcion Colas ---\n";
        cout << "1. Agregar\n";
        cout << "2. Borrar\n";
        cout << "3. Consultar\n";
        cout << "4. Imprimir\n";
        cout << "5. Regresar al Opcion principal\n";
        cout << "Seleccione una Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarCola(cola);
                break;
            case 2:
                borrarCola(cola);
                break;
            case 3:
                consultarCola(cola);
                break;
            case 4:
                imprimirCola(cola);
                break;
            case 5:
                return;
            default:
                cout << "Opcion no válida. Intente nuevamente.\n";
        }
    } while (opcion != 5);
}

void agregarCola(queue<int>& cola) {
    int valor;
    cout << "Ingrese un valor para agregar a la cola: ";
    cin >> valor;
    cola.push(valor); // Agrega el elemento a la cola
    cout << "Valor agregado a la cola.\n";
}

void borrarCola(queue<int>& cola) {
    if (!cola.empty()) {
        cola.pop(); // Elimina el primer elemento agregado
        cout << "Primer valor borrado de la cola.\n";
    } else {
        cout << "La cola está vacía.\n";
    }
}

void consultarCola(queue<int>& cola) {
    if (!cola.empty()) {
        cout << "Elemento frontal de la cola: " << cola.front() << endl;
    } else {
        cout << "La cola está vacía.\n";
    }
}

void imprimirCola(queue<int>& cola) {
    queue<int> copia = cola;
    cout << "Elementos en la cola: ";
    while (!copia.empty()) {
        cout << copia.front() << " ";
        copia.pop();
    }
    cout << endl;
}

