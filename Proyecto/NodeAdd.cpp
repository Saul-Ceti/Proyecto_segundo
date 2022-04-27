
#include <iostream>
#include <vector>
#include "Node.h"

int main() {

    int option = 0;
    int value = 0;
    Node* p = nullptr;
    Node* source = nullptr;

    std::cout << "Ingrese el valor inicial para la estructura" << std::endl;
    std::cin >> value;

    source->createNode(value);
    p->add(source, value);

    while (option != 3)
    {
        std::cout << "Menu principal////////////////////////////////////////////////" << std::endl;
        std::cout << "**************************************************************" << std::endl;
        std::cout << "1.Agregar algun elemento al nodo" << std::endl;
        std::cout << "2.Eliminar algun elemento al nodo" << std::endl;
        std::cout << "3.Salir" << std::endl;
        std::cin >> option;

        switch (option){
            case 1:
                std::cout << "OPC-1||AGREGAR////////////////////////////////////////////////" << std::endl;
                std::cout << "**************************************************************" << std::endl;
                std::cout << "Ingrese el nuevo valor del nodo: "; std::cin >> value;
                
                source->createNode(value);
                p->add(source, value);

                break;

            case 2:
                std::cout << "Ingrese el valor del node" << std::endl;
                std::cin >> value;
                p->rem(source, value);

                break;

            case 3:
                std::cout << "Saliendo del programa, gracias por usarlo..." << std::endl;
                std::cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
                std::cout << "////////////////////////////////////////////////////////ADIOS/////////////////////////////////////////////////////////" << std::endl;
                std::cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
                break;

            default:
                std::cout << "Esa opcion no existe, elige una que si sea valida: " << std::endl;
        }

    }
    system("pause");
    return 1;
}
