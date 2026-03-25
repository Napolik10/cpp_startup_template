#ifndef STUDENTE_H
#define STUDENTE_H

#include <iostream>
#include <string>
#include <limits>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::numeric_limits;
using std::streamsize;

class Studente
{
    public:
        Studente();
        Studente(int, const string &, const string &, unsigned char, float, const string &, const string &, char);
        string getNome();
        string getCognome();
        int getMatricola();
        unsigned char getEta();
        float getMediaVoti();
        string getProvincia();
        string getResidenza();
        char getSesso();
        void setNome(const string &);
        void setCognome(const string &);
        void setMatricola(int);
        void setEta(unsigned char);
        void setMediaVoti(float);
        void setProvincia(const string &);
        void setResidenza(const string &);
        void setSesso(char);
        void stampaStudente();
        void setStudente();
    private:
        string nome;
        string cognome;
        int matricola;
        unsigned char eta;
        float mediaVoti;
        string provincia;
        string residenza;
        char sesso;
};

float leggiFloat();
int leggiInt();
unsigned char leggiUchar();
#endif