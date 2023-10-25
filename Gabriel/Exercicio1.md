## Questão 1 ##

As classes estão ligadas por uma relação de Composição, especificamente Dependente é uma parte essencial da classe Cliente, não podendo existir de forma independente. No entanto, essa relação não é recíproca, já que a classe Cliente pode existir sem depender de Dependente.
Além disso, observa-se uma relação de Herança entre as classes Evento, Roteiro, Deslocamento e Pernoite, onde as últimas três classes herdam propriedades e comportamentos da classe Evento. Isso implica uma generalização de conceitos, visto que Roteiro, Deslocamento e Pernoite são tipos específicos de Evento e compartilham características semelhantes, como a duração, por exemplo.Também pode-se notar uma relação de Agregação entre as classes Pacote e Evento, indicando que essas classes se complementam mutuamente, mas cada uma pode existir de forma independente, sem depender da outra para sua existência.


## Questão 2 ##

```
class Evento {
private:
    string nome;
    double duracao;

public:
    Evento(string nome, double duracao) : nome(nome), duracao(duracao) {}

    string getNome() {
        return nome;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    double getDuracao() {
        return duracao;
    }

    void setDuracao(double duracao) {
        this->duracao = duracao;
    }
};

class Cliente {
private:
    string nome;
    string cpf;
    vector<Evento*> pacotes;

public:
    Cliente(string nome, string cpf) : nome(nome), cpf(cpf) {}

    string getNome() {
        return nome;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    string getCPF() {
        return cpf;
    }

    void setCPF(string cpf) {
        this->cpf = cpf;
    }

    void adicionarPacote(Evento* pacote) {
        pacotes.push_back(pacote);
    }

    vector<Evento*>& getPacotes() {
        return pacotes;
    }
};

class Dependente {
private:
    string nome;
    Cliente* dependenteDe;

public:
    Dependente(string nome, Cliente* dependenteDe) : nome(nome), dependenteDe(dependenteDe) {}

    string getNome() {
        return nome;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    Cliente* getDependenteDe() {
        return dependenteDe;
    }

    void setDependenteDe(Cliente* dependenteDe) {
        this->dependenteDe = dependenteDe;
    }

    string getCpfResponsavel() {
        return dependenteDe->getCPF();
    }
};

class Pacote {
private:
    string nome;
    vector<Evento*> eventos;
    vector<Cliente*> clientes;

public:
    Pacote(string nome) : nome(nome) {}

    string getNome() {
        return nome;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    void adicionarEvento(Evento* evento) {
        eventos.push_back(evento);
    }

    vector<Evento*>& getEventos() {
        return eventos;
    }

    void adicionarCliente(Cliente* cliente) {
        clientes.push_back(cliente);
    }

    vector<Cliente*>& getClientes() {
        return clientes;
    }
};

class Roteiro : public Evento {
public:
    Roteiro(string nome, double duracao) : Evento(nome, duracao) {}
};

class Deslocamento : public Evento {
public:
    Deslocamento(string nome, double duracao) : Evento(nome, duracao) {}
};

class Pernoite : public Evento {
public:
    Pernoite(string nome, double duracao) : Evento(nome, duracao) {}
};
```