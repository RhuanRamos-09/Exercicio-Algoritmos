#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main(){

    int qnt_alunos = 0; 
    string nome_aluno[5]; 
    float nota1 [5], nota2 [5], nota3[5], media[5]; 
    string situacao[5];
    
    while (qnt_alunos < 5){ 
        cout << "Digite o nome do aluno " << qnt_alunos + 1 <<": ";
        getline(cin, nome_aluno[qnt_alunos]); 
        
        cout << "Digite as 3 notas do " << nome_aluno[qnt_alunos] << ": "; 
        cin >> nota1[qnt_alunos] >> nota2[qnt_alunos] >> nota3[qnt_alunos];
            
        while (nota1[qnt_alunos] < 0 or nota1[qnt_alunos] > 10 or nota2[qnt_alunos] < 0 or nota2[qnt_alunos] > 10 or nota3[qnt_alunos] < 0 or nota3[qnt_alunos] > 10) {
            
            cout << endl << "Número Inválido! Digite notas entra 0 e 10." << endl;
            cout << "Digite novamente as 3 notas do(a) " << nome_aluno[qnt_alunos] << ": ";
            cin >> nota1[qnt_alunos] >> nota2[qnt_alunos] >> nota3[qnt_alunos];
        }
        
        cin.ignore();
        
        media[qnt_alunos] = (nota1[qnt_alunos] + nota2[qnt_alunos] + nota3[qnt_alunos]) / 3;
        
        if (media[qnt_alunos] >= 7){
            situacao[qnt_alunos] = "APROVADO";
        } else {
            situacao[qnt_alunos] = "REPROVADO";
        }
        
        qnt_alunos++;
    }
    
    cout << fixed << setprecision(1);
    
    cout << endl << left << setw(30) << "ALUNO" << setw(8) << "N1" << setw(8) << "N2" << setw(8) << "N3" << setw(8) << "MÉDIA" << setw(10) << " SITUACAO" << endl;
    
    qnt_alunos = 0;
    
    while (qnt_alunos < 5){
    cout << left << setw(30) << nome_aluno[qnt_alunos] << setw(8) << nota1[qnt_alunos] << setw(8) << nota2[qnt_alunos] << setw(8) << nota3[qnt_alunos] << setw(8) << media[qnt_alunos] << setw(10) << situacao[qnt_alunos] << endl;
    
    qnt_alunos++;
    }

    return 0;
}
