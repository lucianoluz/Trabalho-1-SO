/* 
 * File:   Entrada.cpp
 * Author: Luciano
 * 
 * Created on January 5, 2014, 9:05 PM
 */
#include <string>
#include "Entrada.h"
#include <cstdlib>
#include <iostream>

Entrada::Entrada() {
    this->chave = 0;
    this->valor = "";
}
int Entrada::getChave(){
    return this->chave;
}
string Entrada::getValor(){
    return valor;
}
Entrada::setChave(int chave){
    this->chave = chave;
}
Entrada::setValor(string valor){
    this->valor = valor;
}
Entrada::Entrada(const Entrada& orig) {
}

Entrada::~Entrada() {
}

