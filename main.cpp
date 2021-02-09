#include <iostream>
#include <vector>

using namespace std;

class Profesor{
    private:
        string nume;
        string prenume;
        int varsta;
        float salariu;
        string facultate;
        float rate;
    public:
        Profesor(string nume, string prenume, int varsta, float salariu, string facultate, float rate);
        ~Profesor();
        virtual void getData();
        virtual void setData();
        string getNume();
        string getPrenume();
        int getVarsta();
        float getSalariu();
        string getFacultate();
        float getRate();
};

Profesor :: Profesor(string _nume = "", string _prenume = "", int _varsta = 0, float _salariu = 0, string _facultate = "", float _rate = 0){
    this -> nume = nume;
    this -> prenume = prenume;
    this -> varsta = varsta;
    this -> salariu = salariu;
    this -> facultate = facultate;
    this -> rate = rate;
}

Profesor :: ~Profesor(){
    cout << "The program is over";
}

void Profesor :: setData(){
    cout << "Nume = ";
    string nume;
    cin >> nume;
    this -> nume = nume;
    cout << "Prenume = ";
    string prenume;
    cin >> prenume;
    this -> prenume = prenume;
    cout << "Varsta = ";
    int varsta;
    cin >> varsta;
    this -> varsta = varsta;
    cout << "Salariu = ";
    float salariu;
    cin >> salariu;
    this -> salariu = salariu;
    cout << "Facultatea = ";
    string facultatea;
    cin >> facultatea;
    this -> facultate = facultatea;
    cout << "Suma datorata = ";
    float rate;
    cin >> rate;
    this -> rate = rate;
}

void Profesor :: getData(){
    cout << "\nNume = " << nume << "\nPrenume = " << prenume << "\nVarsta = " << varsta << "\nSalariu = " << salariu << "\nFacultatea = " << facultate << "\nSuma datorata = " << rate << '\n';
}

string Profesor :: getNume(){
    return nume;
}

string Profesor :: getPrenume(){
    return prenume;
}

int Profesor :: getVarsta(){
    return varsta;
}

float Profesor :: getSalariu(){
    return salariu;
}

string Profesor :: getFacultate(){
    return facultate;
}

float Profesor :: getRate(){
    return rate;
}

class Universitar : public Profesor{
    private:
        int vechime;
        string materie;
    public:
        Universitar(string nume, string prenume, int varsta, float salariu, string facultate, float rate, int vechime, string materie);
        ~Universitar();
        void setData();
        void getData();
        int getVechime();
        string getMaterie();
};

Universitar :: Universitar(string nume = "", string prenume = "", int varsta = 0, float salariu = 0, string facultate = "", float rate = 0, int vechime = 0, string materie = "") : Profesor(nume, prenume, varsta, salariu, facultate, rate){
    this -> vechime = vechime;
    this -> materie = materie;
}

Universitar :: ~Universitar(){
    cout << "The program is over";
}

void Universitar :: setData(){
    Profesor :: setData();
    cout << "Vechime = ";
    int vechime;
    cin >> vechime;
    this -> vechime = vechime;
    cout << "Materia predata = ";
    string materie;
    cin >> materie;
    this -> materie = materie;
}

void Universitar :: getData(){
    Profesor :: getData();
    cout << "Vechime = " << vechime << "\nMateria predata = " << materie << '\n';
}

int Universitar :: getVechime(){
    return vechime;
}

string Universitar :: getMaterie(){
    return materie;
}

class exProfesor : public Profesor{
    private:
        int anPlecare;
    public:
        exProfesor(string nume, string prenume, int varsta, float salariu, string facultate, float rate, int anPlecare);
        ~exProfesor();
        void setData();
        void getData();
        int getAnPlecare();
};

exProfesor :: exProfesor(string nume = "", string prenume = "", int varsta = 0, float salariu = 0, string facultate = "", float rate = 0, int anPlecare = 0) : Profesor(nume, prenume, varsta, salariu, facultate, rate){
    this -> anPlecare = anPlecare;
}

exProfesor :: ~exProfesor(){
    cout << "The program is over";
}
void exProfesor :: setData(){
    Profesor :: setData();
    cout << "Anul plecarii = ";
    int anPlecare;
    cin >> anPlecare;
    this -> anPlecare = anPlecare;
}

void exProfesor :: getData(){
    Profesor :: getData();
    cout << "Anul plecarii = " << anPlecare << '\n';
}

int exProfesor :: getAnPlecare(){
    return anPlecare;
}

class Meniu{
    private:
        vector<Profesor*> arr;
    public:
        void proces();
        void db();
        void venit();
        void sub4();
        void pensionare();
        void soldRate();
        void facult();
        void plecare();
};

void Meniu :: proces(){
    cout << "Numarul de obiecte = ";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        Profesor* p;
        string s;
        cout << "\nDenumirea obiectului " << i + 1 << " = ";
        cin >> s;
        if(s == "Universitar"){
            p = new Universitar;
            p -> setData();
            arr.push_back(p);
        }
        else
            if(s == "Ex-profesor"){
                p = new exProfesor;
                p -> setData();
                arr.push_back(p);
            }
            else{
                cout << "Ati introdus o data gresita! Incercati Universitar sau Ex-profesor!";
                i--;
            }
    }
}

void Meniu :: db(){
    cout << "\n\nBaza de date cuprinde urmatoarele obiecte :\n";
    for(auto it : arr)
        it -> getData();
}

void Meniu :: venit(){
    cout << "\n\nGenerarea fluturasilor cu venitul lunar :\n";
    for(auto it : arr)
        cout << it -> getNume() << " " << it -> getPrenume() << " = " << it -> getSalariu() << " RON\n";

}

void Meniu :: sub4(){
    cout << "\n\nSalariatii ce au un salariu un salariu mai mic decat 400 Ron :\n";
    for(auto it : arr)
        if(it -> getSalariu() < 400)
            cout << it -> getNume() << " " << it -> getPrenume() << " = " << it -> getSalariu() << " RON\n";
}

void Meniu :: pensionare(){
    cout << "\n\nPersoanele ce au varsta pensionarii :\n";
    for(auto it : arr)
        if(it -> getVarsta() > 65)
            cout << it -> getNume() << " " << it -> getPrenume() << '\n';
}

void Meniu :: soldRate(){
    cout << "\n\nPersoanele ce au de achitat rate si suma totala :\n";
    for(auto it : arr)
        if(it -> getRate() > 0)
            cout << it -> getNume() << " " << it -> getPrenume() << " = " << it -> getRate() << " RON\n";
}

void Meniu :: facult(){
    cout << "\n\nCadrele didactice de la Facultatea de Matematica si Informatica, Universitatea din Bucuresti : \n";
    for(auto it : arr)
        if(it -> getFacultate() == "Matematica-Informatica")
            cout << it -> getNume() << " " << it -> getPrenume() << '\n';
}

void Meniu :: plecare(){
    cout << "\n\nCadrele didactice de la facultate care au plecat in ultimii 5 ani : \n";
    for(auto it : arr)
        if(exProfesor *xp = dynamic_cast<exProfesor*>(it)){
            int an = xp -> getAnPlecare();
            if(an >= 2015)
                cout << xp -> getNume() << " " << xp -> getPrenume() << '\n';
        }
}
int main(){
    Meniu X;
    X.proces();
    X.db();
    X.venit();
    X.sub4();
    X.pensionare();
    X.soldRate();
    X.facult();
    X.plecare();
    return 0;
}
