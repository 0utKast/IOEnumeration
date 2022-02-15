
#if 0
#include <iostream>

enum Color
{
    azul, // asignado 0
    violeta, // asignado 1
    negro, // asignado 2
    verde, // asignado 3
    amarillo, // asignado 4
    blanco, // asignado 5
    rosa, // asignado 6
    rojo // asignado 7
};

int main()
{
    Color bicicleta{ verde}; // realmente almacena el valor integral 3
    std::cout << bicicleta;

    return 0;
}





enum Animal
{
    gato = -3,
    gallina,         // asignado -2
    tigre,         // asignado -1
    caballo = 5,
    elefante = 5, // comparte mismo valor que caballo
    ballena      // asignado 6
};




#include <iostream>

enum Color
{
    amarillo,
    azul,
    verde,
};

// este uso de sobrecarga de operadores aún no lo hemos visto
// si no lo entiendes totalmente no debes preocuparte
// std::ostream es el tipo de std::cout
// El tipo parámetro y el tipo return son referencias (para evitar tener que hacer copias)
std::ostream& operator << (std::ostream& salida, Color color)
{
    switch (color)
    {
    case amarillo: salida << "amarilla";  break;
    case azul:   salida << "azul";    break;
    case verde:  salida << "verde";   break;
    default:    salida << "???";    break;
    }

    return salida;
}

int main()
{
    Color bicicleta{ verde };
    std::cout << "Tu bicicleta es " << bicicleta; // devuelve nombre

    return 0;
}


#include <iostream>

enum Animal
{
    gato, // asignado 0
    perro, // asignado 1
    caballo, // asignado 2
    ballena, // asignado 3
};

int main()
{
    Animal animal{ 2 }; // error de compilación: valor integer 2 no se puede convertir implicítamente a "Animal"
    pet = 3;       // error de compilación: valor int 3 no se puede convertir implícitamente a "Animal"

    return 0;
}


#include <iostream>
enum Animal
{
    gato, // asignado 0
    perro, // asignado 1
    caballo, // asignado 2
    ballena, // asignado 3
};


int main()
{
    Animal animal{ static_cast<Animal>(2) }; // convierte integer 2 en valor int del enum Animal 
    std::cout << animal <<'\n';
    animal = static_cast<Animal>(3);       // convierte caballo a ballena su valor int
    std::cout << animal << '\n';
    return 0;
}



#include <iostream>

enum Animal : int // especificamos una base
{
    gato, // asignado 0
    perro, // asignado 1
    caballo, // asignado 2
    ballena, // asignado 3
};

int main()
{
    Animal animal { 2 }; // ok: podemos inicializar con un integer
    animal = 3;       // error compilación: no podemos asignar con un integer

    return 0;
}
#endif

#include <iostream>

enum Animal 
{
    gato, // asignado 0
    perro, // asignado 1
    caballo, // asignado 2
    ballena, // asignado 3
};

int main()
{
    Animal animal { perro };
    std::cin >> animal; // error compilación, std::cin no sabe como escribir un Animal

    return 0;
}



#if 0
#include <iostream>
enum Animal 
{
    gato, // asignado 0
    perro, // asignado 1
    caballo, // asignado 2
    ballena, // asignado 3
};

int main()
{
    std::cout << "Escribe un animal (0=gato, 1=perro, 2=caballo, 3=ballena): ";

    int input{};
    std::cin >> input; // escribe un integer

    Animal animal { static_cast<Animal>(input) }; // static_cast integer al "valor integer" de un Animal

    return 0;
}

#endif



