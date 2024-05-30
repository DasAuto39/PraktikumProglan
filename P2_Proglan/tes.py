def insertion_sort(arr):
    for j in range(1, len(arr)):
        key = arr[j]
        i = j - 1
        while i >= 0 and arr[i] > key:
            arr[i + 1] = arr[i]
            i -= 1
        arr[i + 1] = key

# Example usage:
my_array = [5, 2, 9, 1, 5, 6]
insertion_sort(my_array)
print("Sorted array:", my_array)    

#include <iostream>
#include <string>

// Selalu memakai this-
class Person{
    private:
        std::string nama;// untuk menyimpan variabel nama


    public:
        Person()
        {
            std::cout<<"Saya telah lahir di dunia"<<std::endl; //untuk method tanpa parameter
        }
        Person(std::string nama)
        {
            std::cout<<"Manusia bernama "<< nama<<" telah lahir"<< std::endl; // method dengan parameter


            //buat ngeassign nilai parameter ke variabel class nama
            this->nama = nama; //untuk memasukkan nama yang didapat dari parameter method ke variabel nama yang ada di private
        }

        void intro()
        {

            std::cout<<"Perkenalkan nama saya "<<this->nama<< std::endl; // method untuk output nama yang ada di private
        }

        std::string Getnama()
        {
            return this->nama;// method untuk menggunakan variabel nama di luar class
        }

        void introduce(Person obj)
        {
            std::string nama_teman =obj.Getnama();// menyimpan variabel nama yang ada pada getnama ke nama-teman
            std::cout<<"halo" << nama_teman <<"dan nama saya"<<this->nama<<std::endl; // untuk memberikan output nama teman dan nama dari ptivate
        }



};

int main(){
    Person paizo;// untuk memanggil struct tanpa parameter
    Person person2("paizo"); // memanggil struct yang ada parameter
    Person teman("peca"); // sama dengan person2
    person2.introduce(teman); // menggunakan method introduce uang ada pada class person dan diberikan parameter teman untuk do cout
}


// buat link github isinya apa yang dipelajari dan kesimpulan deadline satu minggu dan kode diupload, dan setiap baris kode diberi penjelasan
