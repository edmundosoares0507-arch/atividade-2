/*4 - Crie um programa que: 
	*Possua um vetor em 5 minutos inteiros
	*Peça ao usuário para digitar os valores
	*Exiba todos os valores digitados*/

#include <iostream>
using namespace std;

int main() {
	int numeros[5];
	for (int i = 0; i < 5; i++) {
    	cin >> numeros[i];
	}
	for (int i = 0; i < 5; i++) {
    	cout << numeros[i] << endl;
	}
	return 0;
}

/*5 - Usando o vetor do exercício anterior, calcule e exiba:
	*A soma total dos números
	*A média aritmética dos valores
#include <iostream>
using namespace std;*/

int main() {
	int numeros[5], soma = 0;
	for (int i = 0; i < 5; i++) {
    	cin >> numeros[i];
    	soma += numeros[i];
	}
	cout << "Soma: " << soma << endl;
	cout << "Média: " << soma / 5.0 << endl;
	return 0;}
/*6 - Leia 8 números inteiros para dentro de um vetor e determine
	*O maior valor e a posição em que está
	*O menor valor e a posição em que está*/
#include <iostream>
using namespace std;

int main() {
	int numeros[8], maior, menor, posMaior, posMenor;
	for (int i = 0; i < 8; i++) cin >> numeros[i];

	maior = menor = numeros[0];
	posMaior = posMenor = 0;

	for (int i = 1; i < 8; i++) {
    	if (numeros[i] > maior) { maior = numeros[i]; posMaior = i; }
    	if (numeros[i] < menor) { menor = numeros[i]; posMenor = i; }
	}

	cout << "Maior: " << maior << " na posição " << posMaior + 1 << endl;
	cout << "Menor: " << menor << " na posição " << posMenor + 1 << endl;
	return 0;
}



/*7 - Crie um vetor com 10 números digitados pelo usuário
Depois peça um número x e informe:
	*se X está no vetor
	*E em qual posição ele aparece pela primeira vez*/
#include <iostream>
using namespace std;

int main() {
	int numeros[10], x, pos = -1;
	for (int i = 0; i < 10; i++) cin >> numeros[i];
	cin >> x;

	for (int i = 0; i < 10; i++) {
    	if (numeros[i] == x) { pos = i; break; }
	}

	if (pos != -1) cout << "Número " << x << " na posição " << pos + 1 << endl;
	else cout << "Número não encontrado" << endl;

	return 0;
}


/*8 - Crie um vetor de 6 nomes (strings)
          O programa deve:
*Ler os nomes
         	*Perguntar um nome a ser buscado
           	*Informar se ele existe no vetor*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6], busca;
    for(int i = 0; i < 6; i++)
        cin >> nomes[i];

    cin >> busca;

    bool found = false;
    for(int i = 0; i < 6; i++)
        if(nomes[i] == busca) found = true;

    if(found) cout << "Existe";
    else cout << "Nao existe";

    return 0;
}
