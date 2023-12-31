## Questão 1 ##

Cliente e Dependente: A relação entre o Cliente e Dependente é de composição, representada pela linha sólida e preenchida no diagrama. Isso significa que um Cliente possui um ou mais Dependentes e que o ciclo de vida dos Dependentes está ligado ao Cliente. Se um Cliente for removido/destruído, seus Dependentes também serão.

Cliente e Pacote: A relação entre Cliente e Pacote é de agregação, representada pela linha sólida e diamante vazio. Um Cliente pode possuir vários Pacotes, mas os Pacotes não são necessariamente destruídos quando o Cliente é. Os Pacotes podem existir independentemente do Cliente.

Pacote e Evento: O relacionamento entre Pacote e Evento é representado por uma linha comum, sugerindo uma associação, o que pode ser interpretado como uma agregação, significando que um Pacote pode ter vários Eventos. No entanto, a destruição do Pacote não implica na destruição dos Eventos. Cada Evento tem um ciclo de vida independente.

Evento, Roteiro, Deslocamento e Pernoite: A relação entre Evento e Roteiro, Deslocamento e Pernoite é de composição. Cada Evento possui um Roteiro, um Deslocamento e um Pernoite. A exclusão de um Evento resultará na exclusão de seu Roteiro, Deslocamento e Pernoite associados.

Em resumo:

Herança: 
Não há indicação de herança no diagrama.

Composição:
Cliente e Dependente
Evento e Roteiro
Evento e Deslocamento
Evento e Pernoite

Agregação:
Cliente e Pacote
Pacote e Evento

## Questão 2 ##

Esboço em c++:

#include <vector>

using namespace std;

// Forward declaration
class Evento;

class Cliente {
private:
    vector<Dependente> dependentes; // Composição
    vector<Pacote*> pacotes; // Agregação
public:
    // Construtores, destrutores, getters, setters e outros métodos
    void adicionarPacote(Pacote* pacote);
    void removerPacote(Pacote* pacote);
};

class Dependente {
private:
    // Atributos do dependente
public:
    // Construtores, destrutores, getters, setters e outros métodos
};

class Pacote {
private:
    vector<Evento*> eventos; // Agregação
public:
    // Construtores, destrutores, getters, setters e outros métodos
    void adicionarEvento(Evento* evento);
    void removerEvento(Evento* evento);
};

class Evento {
private:
    Roteiro roteiro; // Composição
    Deslocamento deslocamento; // Composição
    Pernoite pernoite; // Composição
public:
    // Construtores, destrutores, getters, setters e outros métodos
};

class Roteiro {
private:
    // Atributos do roteiro
public:
    // Construtores, destrutores, getters, setters e outros métodos
};

class Deslocamento {
private:
    // Atributos do deslocamento
public:
    // Construtores, destrutores, getters, setters e outros métodos
};

class Pernoite {
private:
    // Atributos da pernoite
public:
    // Construtores, destrutores, getters, setters e outros métodos
};




