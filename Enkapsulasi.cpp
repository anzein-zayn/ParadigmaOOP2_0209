#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNo[10];

public:
    void setSaklarNo (int i, string value)
    {
        saklarNo[i] = value;
    }

    string getSaklarNo(int i)
    {
        return saklarNo[i];
    }
};

int main ()
{
    remoteLampu lampurRumah;

    lampurRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampurRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampurRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampurRumah.setSaklarNo(3, "Lampu Dapur");

    cout << lampurRumah.getSaklarNo(0) << endl;
    cout << lampurRumah.getSaklarNo(1) << endl;
    cout << lampurRumah.getSaklarNo(2) << endl;
    cout << lampurRumah.getSaklarNo(3) << endl;

    return 0
}