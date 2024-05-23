//#include <iostream>
//#include <string>
//
// //no 1
//
//class rockubando {
//private: // ini salah seharusnya privat
//    int song = 1;
//    void play(std::string str) {
//        std::cout << str << std::endl;
//    }
//
//    void play(std::string str, int num) {
//        for (;;++song) {
//            std::cout << str << " ";
//            if (num<=song) break;
//        }
//        std::cout << std::endl;//ini tidak dibutuhkan
//    }
//};
//
//int main() {
//    rockubando band("kessoku band!");//rovckubando tidak mempunyai konstruktor sehingga tidak dibutuhkan parameter
//    band.play("lets rockk!!");
//    band.play("bando!", 3);
//
//    return 0;
//}
//
// no 2

#include <iostream>

class kessokuband {
private:
    int songs;

public:
    kessokuband(int count) {
        songs = count;
    }
    
    void play() {
        for (;songs>0;songs--) {
            std::cout << "kita!";
        }
        std::cout << std::endl;
    }

    void play(std::string songs) {
        std::cout << songs << std::endl;
    }
};

int main() {
    kessokuband orenoband(3);
    orenoband.play("ano bando");
    orenoband.play();

    return 0;
}
