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

int main() {
    Fixa *fixa1 = new Fixa("zelena");
    fixa1->pis();

    for (int i = 0; i < 15; ++i) {
        std::cout << "pokus" << i << std::endl;
        fixa1->pis();
    }

    return 0;
}
