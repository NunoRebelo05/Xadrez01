#include "Structs.h"
#include <stdio.h>
#include <stdlib.h>

void basicsettings(Peca Vazio,Tab Tabuleiro){
//Setting the Void    
Vazio->Cor = -1;
Vazio->TipoDePeca = -1;
Vazio->Dead =-1;
Vazio->PecaFig = ' ';
//Setting the Tab
Tabuleiro->Turn = 0;
for(int i = 0; i < 8; i++){
    for(int j= 0; j < 8; j++)
        Tabuleiro->Mapa[i][j] = Vazio;

}
Tabuleiro->scoreJog1 = 0;
Tabuleiro->scoreJog2 = 0;

}

void printGame(Tab Tabuleiro){

    for(int i = 0; i < 8; i++){
        for(int j= 0; j < 8; j++){
            printf("|%c", Tabuleiro->Mapa[i][j]->PecaFig);
        }
        printf("\n----------------\n");        

    }

}


int main(){

    Tab Tabuleiro;
    Peca Vazio;
    basicsettings(Vazio,Tabuleiro);
    printGame(Tabuleiro);
    return 0;
}