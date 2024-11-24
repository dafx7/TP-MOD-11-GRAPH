#include <iostream>
#include "graph.h"

using namespace std;

int main() {
    graph G;
    initGraph_103012300198(G);

    cout << "Masukkan ID vertex (A-Z), tekan selain huruf untuk berhenti:" << endl;
    buildGraph_103012300198(G);

    // Menampilkan isi graf
    cout << "Daftar vertex dalam graf:" << endl;
    adrVertex Q = firstVertex(G);
    while (Q != NULL) {
        cout << "Vertex ID: " << idVertex(Q) << endl;
        Q = nextVertex(Q);
    }

    cout << "Program selesai." << endl;
    return 0;
}
