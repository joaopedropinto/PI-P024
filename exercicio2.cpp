#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Cliente;
class Pacote;
class Dependente;
class Evento;
class Cliente
{
private:
  string nome;
  string cpf;
  vector<Pacote *> pacotes;

public:
  Cliente(string nome, string cpf)
  {
    this->cpf = cpf;
    this->nome = nome;
    this->pacotes = {};
  }

  void setPacotes(Pacote *pacote)
  {
    this->pacotes.push_back(pacote);
  }
  vector<Pacote *> &getPacotes()
  {
    return pacotes;
  }
  string getNome()
  {
    return nome;
  }

  void setNome(string nome)
  {
    this->nome = nome;
  }

  string getCPF()
  {
    return cpf;
  }

  void setCPF(string cpf)
  {
    this->cpf = cpf;
  }
};

// Gabriel

// Gabriel

//Kayque

//Kayque

// Joao

// Joao

int main()
{
  vector<Evento> eventos;
  vector<Pacote> pacotes;
  vector<Cliente> clientes;
  vector<Dependente> dependentes;

  eventos.push_back(Roteiro("Roteiro 1", 2.0));
  eventos.push_back(Deslocamento("Deslocamento 1", 3));
  eventos.push_back(Pernoite("Pernoite 1", 1));
  while (true)
  {
    cout << "Menu:" << endl;
    cout << "1. Cadastrar evento" << endl;
    cout << "2. Criar pacote" << endl;
    cout << "3. Criar cliente" << endl;
    cout << "4. Criar dependente" << endl;
    cout << "5. Vender pacote a cliente" << endl;
    cout << "6. Listar clientes" << endl;
    cout << "7. Listar pacotes" << endl;
    cout << "8. Listar eventos" << endl;
    cout << "9. Consultar pacotes de um cliente" << endl;
    cout << "10. Consultar clientes de um pacote" << endl;
    cout << "11. Sair" << endl;

    int escolha;
    cout << "Escolha uma opção: ";
    cin >> escolha;
    cin.ignore();
    switch (escolha)
    {
    case 1:
      eventos.push_back(SistemaTuristico::cadastrarEvento());
      break;

    case 2:
      pacotes.push_back(SistemaTuristico::criarPacote(eventos));
      break;

    case 3:
      clientes.push_back(SistemaTuristico::criarCliente());
      break;

    case 4:
      SistemaTuristico::criarDependente(clientes, dependentes);
      break;

    case 5:
      SistemaTuristico::venderPacote(clientes, pacotes);
      break;

    case 6:
      SistemaTuristico::listarClientes(clientes, dependentes);
      break;

    case 7:
      SistemaTuristico::listarPacotes(pacotes);
      break;

    case 8:
      SistemaTuristico::listarEventos(eventos);
      break;

    case 9:
      SistemaTuristico::consultarPacotesCliente(clientes);
      break;

    case 10:
      SistemaTuristico::consultarClientesPacote(pacotes);
      break;

    case 11:
      return 0;

    default:
      cout << "Opção inválida." << endl;
    }
  }
  return 0;
}