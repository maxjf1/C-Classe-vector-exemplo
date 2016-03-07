#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Exemplo de uso da classe vector
int main()
{
    cout <<"\n Vetor: \n"<<endl;

    vector <int> vet1(5,3);             //Declarando Vector do tipo <int> de nome vet1(tamanho, valor inicial)
    for(int i = 0; i<vet1.size(); i++)  //vet1.size() retorna tamanho do vetor
        cout << "Pos: " << i << " Val: "<< vet1[i] << "\t"; //Imprimindo vetor que tem tamanho 5 e valor inicial 3


/* ******************************************************************** */

    cout <<"\n Matriz: \n"<<endl;

    vector< vector<string> > matriz1(10, vector<string>(5, "ola"));    /*Declarando Matriz de <strings> onde se cria um vector
                                                                         * de < vector<string> de nome matriz1 onde
                                                                         *matriz1(tamanhoX, vector<tipo>(tamanhoY, ValorInicial));*/

    for(int i = 0; i <matriz1.size(); i++)
        for(int j = 0; j< matriz1[i].size(); j++)
            cout << "Pos: " << i << "-"<< j << " Val: "<< matriz1[i][j] <<endl;
    return 0;
}
