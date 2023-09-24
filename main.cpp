#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                //nem egyeznek a változó nevek
    std::cout << '1-100 ertekek duplazasa'      //nem egy aposztróf, hanem duplának kell lennie, illetve pontosvessző hiányzik
    for (int i = 0;)                            //hiányzik az "i = 0", után az "i < N_ELEMENTS; i++"
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)                    //hiányzik az i = N_ELEMENTS
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                                  // int atlag = 0;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
