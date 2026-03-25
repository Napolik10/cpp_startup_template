#include "Studente.h"
//DEFINIZIONE COSTRUTTORE DI DEFAULT
Studente::Studente()
{
    nome="";
    cognome="";
    matricola=0;
    eta=0;
    mediaVoti=0.0;
    provincia="";
    residenza="";
    sesso=' ';
}
//DEFINIZIONE COSTRUTTORE PARAMETRICO
Studente::Studente(int m, const string &n, const string &c, unsigned char e, float mv, const string &p, const string &r, char s)
{
    nome=n;
    cognome=c;
    matricola=m;
    eta=e;
    mediaVoti=mv;
    provincia=p;
    residenza=r;
    sesso=s;
}
//DEFINIZIONE METODI GETTER
string Studente::getNome()
{
    return nome;
}
string Studente::getCognome()
{
    return cognome;
}
int Studente::getMatricola()
{
    return matricola;
}
unsigned char Studente::getEta()
{
    return eta;
}
float Studente::getMediaVoti()
{
    return mediaVoti;
}
string Studente::getProvincia()
{
    return provincia;
}
string Studente::getResidenza()
{
    return residenza;
}
char Studente::getSesso()
{
    return sesso;
}
//DEFINIZIONE METODI SETTER
void Studente::setNome(const string &n)
{
    nome = n;
}
void Studente::setCognome(const string &c)
{
    cognome = c;
}
void Studente::setMatricola(int m)
{
    matricola = m;
}
void Studente::setEta(unsigned char e)
{
    eta = e;
}
void Studente::setMediaVoti(float mv)
{
    mediaVoti = mv;
}
void Studente::setProvincia(const string &p)
{
    provincia = p;
}
void Studente::setResidenza(const string &r)
{
    residenza = r;
}
void Studente::setSesso(char s)
{
    sesso = s;
}
float leggiFloat()
{
    float dato;
    while(!(cin>>dato && dato >= 0))
    {
        cout<<"INSERISCI UN NUMERO FLOAT VALIDO: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    return dato;

}
int leggiInt()
{
    int dato;
    while(!(cin>>dato && dato >= 0))
    {
        cout<<"INSERISCI UN NUMERO INTERO VALIDO: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    return dato;

}
unsigned char leggiUchar()
{
    int dato;
    while(!(cin>>dato && dato >= 0))
    {
        cout<<"INSERISCI UN NUMERO TRA 0-255: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    return static_cast<unsigned char>(dato) ;

}
//DEFINIZIONE METODO PER LA STAMPA DEI DATI DI UNO STUDENTE
void Studente::stampaStudente()
{
    cout<<"NOME: "<<nome<<endl;
    cout<<"COGNOME: "<<cognome<<endl;
    cout<<"MATRICOLA: "<<matricola<<endl;
    cout<<"ETA: "<<static_cast<int>(eta)<<endl;
    cout<<"MEDIA VOTI: "<<mediaVoti<<endl;
    cout<<"PROVINCIA: "<<provincia<<endl;
    cout<<"RESIDENZA: "<<residenza<<endl;
    cout<<"SESSO: "<<sesso<<endl;
}
//DEFINIZIONE METODO PER L'INSERIMENTO DEI DATI DI UNO STUDENTE
void Studente::setStudente()
{
    unsigned char scelta = 0;
    bool sesso = false; // Variabile per validare il sesso
    cout<<"INSERISCI MATRICOLA: ";
    matricola = leggiInt();

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Pulisce il buffer dopo la lettura dell'intero
 
    cout<<endl<<"INSERISCI NOME: ";
    getline(cin, nome);
    cout<<endl<<"INSERISCI COGNOME: ";
    getline(cin, cognome);
    cout<<endl<<"INSERISCI ETA: ";
    eta = leggiUchar();

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Pulisce il buffer dopo la lettura dell'unsigned char

    cout<<endl<<"INSERISCI MEDIA VOTI: ";
    mediaVoti = leggiFloat();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Pulisce il buffer dopo la lettura del float

    cout<<endl<<"INSERISCI PROVINCIA: ";
    getline(cin, provincia);
    cout<<endl<<"INSERISCI RESIDENZA: ";
    getline(cin, residenza);

    do
    {
        cout<<endl<<"SCELTA SESSO: ";
        cout<<endl<<"[1] MASCHIO";
        cout<<endl<<"[2] FEMMINA";
        scelta = leggiUchar();

        switch(scelta)
        {
            case 1:
                this->sesso = 'M';
                sesso = true;
                break;
            case 2:
                this->sesso = 'F';
                sesso = true;
                break;
            default:
                cout<<"LE SCELTE POSSIBILI SONO 1 E 2"<<endl;
        }
    }while(!sesso); // Continua a chiedere finché non viene inserito un sesso valido
}

