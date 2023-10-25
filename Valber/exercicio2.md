## Questão 1

Observa-se uma relação de composição entre Cliente e Dependente, em que os Dependentes depende da 
existencia de clientes para existir, enquanto os Clientes podem existir sem dependentes.

Já entre Pacote e Evento existe uma Agregação, onde existe uma relação em que os elementos de Evento
podem estar contidos em Pacote, porém não é uma relação de dependência, as duas classes podem existir
de forma independente.

Como Herança, as classes Roteiro, Deslocamento e Pernoite são subclasses ou classes "filhas" da classe
Evento, ou seja, essas 3 classes herdam características e comportamentos de classe "pai", pois elas são
um tipo de Evento.

## Questão 2

```
class Cliente
{
private:
    string nome;
    string cpf;
    vector<Pacote *> pacotes;

public:
    Cliente(string nome, string cpf) {}
    void setPacotes(Pacote *pacote) {}
    vector<Pacote *> &getPacotes() {}
    string getNome() {}
    void setNome(string nome) {}
    string getCPF() {}
    void setCPF(string cpf) {}
};

class Dependente
{
private:
    string nome;
    Cliente *dependenteDe;

public:
    string getNome() {}
    void setNome(string nome) {}
    Cliente getDependente() {}
    void setDependente(Cliente *dependenteDe) {}
    string getCpfResponsavel() {}
};

class Evento
{
private:
    string nome;
    double duracao;

public:
    Evento(string nome, double duracao) {}
    string getNome() {}
    void setNome(string nome) {}
    double getDuracao() {}
    void setDuracao(double duracao) {}
};

class Pacote
{
private:
    string nome;
    vector<Evento *> eventos;
    vector<Cliente *> clientes;

public:
    Pacote() {}
    string getNome() {}
    vector<Evento *> getEventos() {}
    vector<Cliente *> getClientes() {}
    void setClientes(Cliente *cliente) {}
    void setNome(string nome) {}
    void adicionarEvento(Evento *evento) {}
};

class Roteiro : public Evento
{
public:
    Roteiro(string nome, double duracao) : Evento(nome, duracao) {}
};

class Deslocamento : public Evento
{
public:
    Deslocamento(string nome, double duracao) : Evento(nome, duracao) {}
};

class Pernoite : public Evento
{
public:
    Pernoite(string nome, double duracao) : Evento(nome, duracao) {}
};
```
