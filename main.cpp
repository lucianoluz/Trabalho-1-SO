/* 
 * File:   main.cpp
 * Author: Luciano
 *
 * Created on January 5, 2014, 3:49 PM
 */

#include <cstdlib>
#include "Entrada.h"
#include "TabelaHash.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    TabelaHash tabela(1500,10);
    tabela.add(3,"Pode cre3");
    tabela.add(2,"Pode cre2");
    
    tabela.add(4,"Pode cre4");
    tabela.add(1,"Pode cre");
    tabela.add(20,"PRIM");
    tabela.add(40,"SECOND");
    //tabela.printAll();
    tabela.print(3);
    //tabela.remove(3);
    tabela.print(2);
    tabela.print(1);
    tabela.print(4);
    tabela.print(20);
    tabela.print(40);
    return 0;
}

