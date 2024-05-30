#include <iostream>
#include <string>
class Person
{
    private:

    public:
        int nrpcl;
        std::string namacl;
        Person(){};
        Person(std::string nama,int nrp)
        :namacl(nama),nrpcl(nrp)
        {
            std::cout<<"nama"<<namacl<<", NRP :" <<nrpcl <<std::endl;
        }
        virtual void mengajar() = 0;
};

class Dosen : public Person
{
    public :
        std::string Matkulcl;
        Dosen(std::string Matkul,std::string nama,int nrp)
        :Person(nama, nrp),Matkulcl(Matkul)
        {
            std::cout<<" matkul mengaajar "<< Matkulcl << "nama "<<namacl<<"nrp : "<<nrpcl<<std::endl;
        }
        void mengajar() override
        {
            std::cout<<"Saya mengajar "<< Matkulcl << " dan Nama saya " << namacl << "NRP :" <<nrpcl<< std::endl;
        }
};

int main()
{
    //Person tes();
    Dosen tes1("Fisika","aba",222);
    tes1.mengajar();
}
