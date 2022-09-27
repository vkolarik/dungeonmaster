//
// Created by xkolari1 on 13.09.2022.
//

// můj první soubor

#include <iostream>


class Student {
private:
    std::string m_rc;
    std::string m_jmeno;
    int m_vek;
public:
    void vypisInfo() {
        std::cout << "Jmenuju se " + this->m_jmeno + ", moje RC je " + this->m_rc + " a je mi " +
                     std::to_string(this->m_vek) << std::endl;
    }

    std::string getMJmeno() {
        return m_jmeno;
    }

    void setMJmeno(std::string mJmeno) {
        m_jmeno = mJmeno;
    }

    std::string getMRc() {
        return m_rc;
    }

    int getMVek() {
        return m_vek;
    }

    void setMRc(std::string mRc) {
        m_rc = mRc;
    }

    void setMVek(int mVek) {
        m_vek = mVek;
    }

};

int main() {
    Student *student1 = new Student();
    student1->setMJmeno("Pepa");
    student1->setMRc("123456");
    student1->setMVek(12);

    Student *student2 = new Student();
    student2->setMJmeno("Anicka");
    student2->setMRc("654321");
    student2->setMVek(69);
    student2->setMJmeno("Hildegarda");

    student1->vypisInfo();
    student2->vypisInfo();

    return 0;
}

