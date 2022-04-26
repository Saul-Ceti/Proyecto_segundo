
#include <iostream>
#include "Date.h"
#include <memory>



int main() {
    int opc = 0, mes = 0, dia = 0, año = 0;

    //Logica para no poner fechas incorrectas
    //Logica de meses
    do
    {
        std::cout << "Ingrese el mes" << std::endl;
        std::cin >> mes;
    } while (mes > 12 || mes < 1);

    //Logica de dias
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        do
        {
            std::cout << "Ingrese el dia" << std::endl;
            std::cin >> dia;
        } while (dia > 31 || mes < 1);
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        do
        {
            std::cout << "Ingrese el dia" << std::endl;
            std::cin >> dia;
        } while (dia > 30 || mes < 1);
    }
    else
    {
        do
        {
            std::cout << "Ingrese el dia" << std::endl;
            std::cin >> dia;
        } while (dia > 29 || mes < 1);
    }

    //Logica de años
    do
    {
        std::cout << "Ingrese el año" << std::endl;
        std::cin >> año;
    } while (año < 1 || año>9999);

    Date a(mes, dia, año);

    while (opc != 7) {
        std::cout << "  1- Sumar dia\n  2- Sumar mes\n  3- Sumar año" << std::endl;
        std::cout << "  4- Restar dia\n  5- Restar mes\n  6- Restar año\n  7- Salir" << std::endl;
        std::cin >> opc;
        switch (opc) {
        default:
            break;
        case 1:
            a.incrementDay();
            std::cout << a << std::endl;
            break;
        case 2:
            a.incrementMes();
            std::cout << a << std::endl;
            break;
        case 3:
            a.incrementYear();
            std::cout << a << std::endl;
            break;
        case 4:
            a.DecrementDay();
            std::cout << a << std::endl;
            break;
        case 5:
            a.DecrementMes();
            std::cout << a << std::endl;
            break;
        case 6:
            a.DecrementYear();
            std::cout << a << std::endl;
            break;
        }
        //Date b(a+10);
        //++a;
        //a++;
        //std::cout << b << std::endl;
    }
}