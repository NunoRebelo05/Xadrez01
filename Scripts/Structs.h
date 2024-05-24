#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct Pecas
{
    int Cor; // Black - 0  | White - 1
    int TipoDePeca; // Peão | Torre | Bispo | Rainha | Rei
    int Dead; // Verificação se peça é jogavel
    char PecaFig;

}*Peca;


typedef struct Tabuleiro
{
    Peca Mapa[8][8];
    int scoreJog1;
    int scoreJog2;
    int Turn;// 0 - White | 1 - Black
}*Tab;




#endif
