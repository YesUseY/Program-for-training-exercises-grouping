#include <iostream>
#include <fstream>

using namespace std;

struct sportas{
    string pratimas;
    int pakartojimai;
};
int main()
{
    ifstream fin("data.txt");
    int a;
    fin >> a;
    sportas P[a];
    for (int i=0; i<a; i++) {
        fin >> P[i].pratimas >> P[i].pakartojimai;
        cout << P[i].pratimas << " " << P[i].pakartojimai << endl;
    }
    for (int i=0; i<a; i++) {
        for (int j=i+1; j<a; j++) {
            if (P[i].pratimas==P[j].pratimas){
                P[i].pakartojimai = P[i].pakartojimai + P[j].pakartojimai;
                P[j].pratimas = "-";
            }
        }
    }

    for (int i = 0; i<a; i++){
         if (P[i].pratimas!="-"){
            cout << P[i].pratimas << " " << P[i].pakartojimai << endl;
         }

    }

    return 0;
}
