/* 
 * File:   TabelaHash.h
 * Author: Luciano
 *
 * Created on January 5, 2014, 11:02 PM
 */
#include <string>
#include "Entrada.h"
#include <cstdlib>
#include <iostream>

#ifndef TABELAHASH_H
#define	TABELAHASH_H

using namespace std;
class TabelaHash {
public:
    TabelaHash(int tamanho,int blocos);
    TabelaHash(const TabelaHash& orig);
    void add(int chave, string valor);
    void remove(int chave);
    void print(int chave);
    void printAll();
    Entrada* get(int chave);
    int funcaoHash(int chave);
    int getBloco(int index);
    virtual ~TabelaHash();
private:
    int blocos[];
    int tamanho;
    int tamanhoBloco;
    Entrada* tabela;
    pthread_t* threads;
    
};

#endif	/* TABELAHASH_H */

