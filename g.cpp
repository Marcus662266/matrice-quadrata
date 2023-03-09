#include <iostream>
#include <random>
using namespace std;

int main()
{

    // int matrice1[5][5]; //te la crea vuota
    // //te la riempi con il for
    // int matrice[][] = { {1,2}, {3,4} };
    // int array1[2]={1,2};
    // int array2[2]={3,4};
    // int arraySpeciale[2]={array1,array2};

    int righe = 9;
    int colonne = 9;

    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = 1; // rand()%10;
        }
    }

    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {

            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
   
    // Scegli una posizione casuale per la parola "casa"
    int row = rand() % (righe -2);
    int col = rand() % (colonne -3);

    // Inserisci la parola "casa" nella matrice
    matrice[righe][colonne] = 'c';
    matrice[righe][colonne+1] = 'a';
    matrice[righe][colonne+2] = 's';
    matrice[righe][colonne+3] = 'a';

    // Stampa la matrice
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    
}