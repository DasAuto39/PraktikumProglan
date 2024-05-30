// no1
#include <iostream>

class Mage{
    public:
        void attack(){
            std::cout << "aktifkan spell explosion!!!!" << std::endl;
        }

        void heal(){
            std::cout << "hp poin +5" << std::endl;
        }
};

class user : private Mage{
    public:
        void walk(){
            std::cout << "berjalan 5 langkah kedepan" << std::endl;
        }

        void heal() override {
            std::cout << "hp poin +99" << std::endl;
        }
};

int main(){
    user Kazuma;
    Kazuma.attack();
    Kazuma.walk();
}

//no2
#include <iostream>

class pendeta{

    public:
        void purrification(){
            heal_point += 10;
        }
        
        int heal_point = 10;
};

class petualang : public pendeta{
    public:
        void test_hp(){
            std::cout << "hp saat ini adalah : " << heal_point << std::endl;
        }
};

int main(){
    petualang Aqua;
    Aqua.test_hp();
    Aqua.purrification();
    Aqua.test_hp();
}
