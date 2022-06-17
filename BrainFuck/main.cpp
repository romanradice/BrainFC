#include <iostream>
#include <string>

#include "BrainFunctions.h"
using namespace std;

int main()
{
    //TEST BRAINFUCK
    string code = "++++++++++[>+>+++>+++++++>++++++++++<<<<-]>>>++++.>+.<<++.>>++++++++++++++.++.------------.++++++++++.<<.>++++++++.>----.--.------------.+++++++++++++.<<.>.>-------------.+++.+++++.------.++.";
    string codeBasic = "++++++++++[>+>+++>+++++++>++++++++++<<<<-]>>>++.>+.+++++++..+++.<<++.>>++++++++.--------.+++.------.--------.<<.+.";
    //START FUNCTION
    cout <<"---- Lancement de l'interpreteur BrainFuck ----"<<endl;
    int detectError = BrainFuckError(codeBasic);
    if (detectError == 0)
	{
        BrainFuck(codeBasic);
    }
    cout <<"---- Fin du programme ----" <<endl;
    return 0;
}
