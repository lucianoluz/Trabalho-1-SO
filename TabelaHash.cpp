/* 
 * File:   TabelaHash.cpp
 * Author: Luciano
 * 
 * Created on January 5, 2014, 11:02 PM
 */

#include "TabelaHash.h"
#include <string>
#include "Entrada.h"
#include <cstdlib>
#include <iostream>
#include <pthread.h>
TabelaHash::TabelaHash(int tamanho, int blocos) {
    this->tamanho = tamanho;
    this->blocos[blocos];
    this->tamanhoBloco = tamanho/blocos;
    this->tabela = new Entrada[tamanho];   
    this->threads = new pthread_t[blocos];
    
}

TabelaHash::TabelaHash(const TabelaHash& orig) {
}
int TabelaHash::getBloco(int index){
    cout<<index/(this->tamanhoBloco)<<endl;
    return index/(this->tamanhoBloco);
}
TabelaHash::~TabelaHash() {
}
int TabelaHash::funcaoHash(int chave){
    int result = this->tamanho % (chave+1) ;
    return result;
}
void TabelaHash::add(int chave, string valor){
    Entrada* entrada = &this->tabela[funcaoHash(chave)];
    int index = funcaoHash(chave);
    if((entrada->getValor().compare("null")==0)){
        entrada->setValor(valor);
        entrada->setChave(chave);
        return;
    }
    else{
        index++;
        
       // cout<<index<<endl;
        //cout<<get(index)->getValor()<<endl;
        Entrada* candidato = &tabela[index];
        
        while(((candidato->getValor().compare("null")!=0)||!(candidato->getValor().compare(valor)))){
            index++;
            candidato = &tabela[index];
        }
        candidato->setValor(valor);
        candidato->setChave(chave);
    }
    
}
Entrada* TabelaHash::get(int chave){
    
    int index = funcaoHash(chave);
    
    while((this->tabela[index].getChave()!=chave)){
        index++;
    }
    return (&tabela[index]);
}
void TabelaHash::remove(int chave){
    Entrada* entrada = get(chave);
    entrada->setChave(0);
    entrada->setValor("null");
}
void TabelaHash::print(int chave){
    cout << get(chave)->getValor()<< endl;
}
void TabelaHash::printAll(){
    for(int i = 0; i<this->tamanho; i++){
        cout<<" chave: "<< tabela[i].getChave()<<" valor:"<<tabela[i].getValor();
    }
}
