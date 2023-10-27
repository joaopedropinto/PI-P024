# Questão1 #

    Cliente e Dependente:
        Relação: Composição
        Descrição: Dependentes são componentes ou partes de um Cliente. Eles não podem existir independentemente do Cliente.

    Pacote e Evento:
        Relação: Agregação
        Descrição: Eventos podem estar contidos em um Pacote, mas ambos podem existir de forma independente um do outro.

    Herança entre Roteiro, Deslocamento e Pernoite:
        Relação: Herança (ou Generalização)
        Descrição: Roteiro, Deslocamento e Pernoite são subtipos de Evento. Isso significa que eles herdam características e comportamentos de Evento, pois são todos tipos de eventos.

# Questão2 #

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cliente 
{
private:
  string nome;
  string cpf;
  vector<class Pacote*> pacotes;

public:
  Cliente(string nome, string cpf)
  {
    this->cpf = cpf;
    this->nome = nome;
  }

  void adicionarPacote(class Pacote* pacote)
  {
    this->pacotes.push_back(pacote);
  }

  const vector<class Pacote*>& getPacotes() const
  {
    return pacotes;
  }

  const string& getNome() const
  {
    return nome;
  }

  void setNome(const string& nome)
  {
    this->nome = nome;
  }

  const string& getCPF() const
  {
    return cpf;
  }

  void setCPF(const string& cpf)
  {
    this->cpf = cpf;
  }
};

class Dependente
{
private:
  string nome;
  class Cliente* dependenteDe;

public:
  const string& getNome() const
  {
    return nome;
  }

  void setNome(const string& nome)
  {
    this->nome = nome;
  }

  const class Cliente* getDependente() const
  {
    return dependenteDe;
  }

  void setDependente(class Cliente* dependenteDe)
  {
    this->dependenteDe = dependenteDe;
  }

  const string& getCpfResponsavel() const
  {
    return dependenteDe->getCPF();
  }
};

class Evento
{
private:
  string nome;
  double duracao;

public:
  Evento(string nome, double duracao)
  {
    this->nome = nome;
    this->duracao = duracao;
  }

  const string& getNome() const
  {
    return nome;
  }

  void setNome(const string& nome)
  {
    this->nome = nome;
  }

  double getDuracao() const
  {
    return duracao;
  }

  void setDuracao(double duracao)
  {
    this->duracao = duracao;
  }
};

class Pacote
{
private:
  string nome;
  vector<class Evento*> eventos;
  vector<class Cliente*> clientes;

public:
  Pacote(string nome)
  {
    this->nome = nome;
  }

  const string& getNome() const
  {
    return nome;
  }

  const vector<class Evento*>& getEventos() const
  {
    return eventos;
  }

  const vector<class Cliente*>& getClientes() const
  {
    return clientes;
  }

  void adicionarCliente(class Cliente* cliente)
  {
    this->clientes.push_back(cliente);
  }

  void adicionarEvento(class Evento* evento)
  {
    this->eventos.push_back(evento);
  }
};

class Roteiro : public Evento
{
public:
  Roteiro(string nome, double duracao) : Evento(nome, duracao)
  {
  }
};

class Deslocamento : public Evento
{
public:
  Deslocamento(string nome, double duracao) : Evento(nome, duracao)
  {
  }
};

class Pernoite : public Evento
{
public:
  Pernoite(string nome, double duracao) : Evento(nome, duracao)
  {
  }
};
