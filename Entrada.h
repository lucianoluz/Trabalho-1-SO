/* 
 * File:   Entrada.h
 * Author: Luciano
 *
 * Created on January 5, 2014, 9:05 PM
 */
#include <cstdlib>
#include <iostream>
#include <string>
#ifndef ENTRADA_H
#define	ENTRADA_H
using namespace std;
class Entrada {
public:
    Entrada();
    Entrada(const Entrada& orig);
    virtual ~Entrada();
    int getChave();
    string getValor();
    void setChave(int chave);
    void setValor(string valor);
    
private:
    int chave;
    string valor;
    
};

#endif	/* ENTRADA_H */

