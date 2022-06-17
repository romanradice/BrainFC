#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>

#include "BrainFunctions.h"

using namespace std;

int BrainFuckError(string code){
    int slash = 0;
    for(int i = 0; i < code.size();i++){
        if( code[i] == '[')
            slash++;
        else if (code[i] == ']')
            slash--;
        }
    if (slash > 0)
        cout << "Erreur : Il manque ']' "<<endl;
    else if(slash < 0)
        cout << "Erreur : Il manque '[' "<<endl;
    return slash;
}

void BrainFuck(string code){
    vector<char>memoire (30000,0);
    unsigned int indextab(0);
    string mot;
    int slash;
    for (int i = 0;i < code.size();i++)
	{
        switch(code[i])
		{
            case '>':
                indextab+=1;
                if(indextab == 30000)
                    indextab = 0;
                break;
            case '<':
                if(indextab == 0)
                    indextab = 30000;
                indextab-=1;
                break;
            case '+':
                memoire[indextab]+=1;
                break;
            case '-':
                memoire[indextab]-=1;
                break;
            case '.':
                mot += char(memoire[indextab]);
                break;
            case ',':
                memoire[indextab] = getchar();
                break;
            case '[':
                if (memoire[indextab] == 0)
				{
                    slash = 1;
                    while (slash > 0)
					{
                        i++;
                        if (code[i] == '[')
						{
                            slash++;
                        }
                        else if(code[i] == ']')
						{
                            slash--;
                        }
                    }
                }
                break;
            case ']':
                if (memoire[indextab] != 0)
				{
                    slash = 1;
                    while (slash > 0)
					{
                        i--;
                        if (code[i] == '[')
						{
                            slash--;
                        }
                        else if(code[i] == ']')
						{
                            slash++;
                        }
                    }
                }
                break;

            default:
                break;
        }
    }
    cout <<mot <<endl;
}
