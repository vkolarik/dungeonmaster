#include <iostream>

class Fixa {
private:
    std::string m_barva;
    float m_stav_n;
public:
    Fixa(std::string barva) {
        m_barva = barva;
        m_stav_n = 100;
    };

    void pis() {
        if (m_stav_n > 0) {
            std::cout << "Jsem fixa a pisu " + m_barva << std::endl;
            m_stav_n -= 10;
        } else {
            std::cout << "Dosla napln" << std::endl;
        }

    }
};

class Balik {
private:
    std::string m_mistoOdeslani, m_mistoDoruceni;
    int m_vaha;
    float m_cena;
    bool m_pojisteno;
public:
    //Pobocka komplet
    Balik(std::string mistoDoruceni, std::string mistoOdeslani, int vaha, float cena) {
        m_mistoDoruceni = mistoDoruceni;
        m_mistoOdeslani = mistoOdeslani;
        m_vaha = vaha;
        m_cena = cena;
        m_pojisteno = cena != 0;
    }

    //Kuryr komplet
    Balik(std::string mistoDoruceni, std::string mistoOdeslani, float cena) : Balik(mistoDoruceni, mistoOdeslani, 0,
                                                                                    cena) {

    }

    void setVaha(int vaha) {
        m_vaha = vaha;
    }

    void printInfo() {
        std::cout << "Balik - odeslan z " << m_mistoOdeslani << " do " << m_mistoDoruceni << ", vaha je " << m_vaha
                  << ", cena je " << m_cena << " a pojisteni je nastaveno na " << m_pojisteno << std::endl;
    }
};

int main() {
    //Fixa
    /*Fixa *fixa1 = new Fixa("zelena");
    fixa1->pis();

    for (int i = 0; i < 15; ++i) {
        std::cout << "pokus" << i << std::endl;
        fixa1->pis();
    }*/

    //Baliky
    auto *b = new Balik("Vyskov", "Brno", 12, 5000);
    b->printInfo();
    return 0;
}
