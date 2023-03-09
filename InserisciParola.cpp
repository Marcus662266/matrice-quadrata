#include <array>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{

    // Crea una matrice 10x10
    int riga = 10;
    int colonna = 10;
    char matrice[riga][colonna];
 for (int i = 0; i < riga; i++)
    {
        for (int j = 0; j < colonna; j++)
        {
            matrice[i][j] = 1; // rand()%10;
        }
    }

    cout << "    ";
    for (int i = 0; i < colonna; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonna * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < riga; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonna; j++)
        {

            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Inizializza la matrice con caratteri casuali
    for (int i = 0; i < riga; i++)
    {
        for (int j = 0; j < colonna; j++)
        {
            matrice[i][j] = 'a' + rand() % 1;
        }
    }
    string word = "word";
    if( word.length()> colonna ){
        cout <<  "error: ";
        return -1;
    }
    // Scegli una posizione casuale per la parola "casa"
    int row = rand() % riga;
    int col = rand() % colonna-word.length();
    for (int i =0; i< word.lenght();i++){
        cout << row << " " << col+i << endl;
        matrice[row][col+i]=word[i];
    }

    // Inserisci la parola "casa" nella matrice
    // matrice[0][0] = 'c';
    // matrice[0][1] = 'a';
    // matrice[0][3] = 'a';
    matrice[ row ][col] = 'C';
        matrice[ row ][col+1] = 'A';
            matrice[ row ][col+2] ='S';
                matrice[ row ][col+3] ='A';

                    // Stampa la matrice
        for (int i = 0; i < riga; i++)
    {
        for (int j = 0; j < colonna; j++)
        {
            cout << matrice[i][j] << "-  -";
        }
        cout << endl;
    }

    return 0;
}