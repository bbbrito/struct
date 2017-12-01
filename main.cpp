#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

struct data
{
    int dia;
    int mes;
    int ano;
};

struct funcionario
{
    char nome[50];
    int idade;
};


int main(  )
{
	// Estrutura de dados para mostrar uma data
	data hoje;
    hoje.dia = 01;
    hoje.mes = 12;
    hoje.ano = 2017;
    cout <<"Hoje sao: " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << '\n';
    
    // Estrutura de dados para mostrar nome e idade de funcionários
    struct funcionario func[ 50 ];
    int i = 0;

    for( i = 1; i < 3; i++ )
    {
    	cout <<"\nNome do Funcionario " << i << ": " << '\n';
    	cin >> func[i].nome;
    	
    	cout <<"Idade do Funcionario " << i << ": " << '\n';
    	cin >> func[i].idade;
    };

    for( i = 1; i < 3; i++ )
    {
    	cout << "-----------------------------------\n";
    	cout << "Nome do Funcionario " << i << ": " << func[i].nome << '\n';
    	cout << "\nIdade do Funcionario " << i << ": " << func[i].idade << '\n';
        cout << "-----------------------------------\n";
        cout << "\n";
    };
 
    system ("pause"); 
    return 0;

}
