#include <iostream>

using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

void generate_kartu(string cards[]){
    string lambang[] = {"Waru", "Hati", "Wajik", "Keriting"};
    string angka[] = {"As", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Jack", "Queen", "King"};
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cards[i*13+j] = (angka[j] + " " + lambang[i]); 
        }
    }
}


void shuffle(string cards[], int n) {
    
}

int main() {
    string cards[52];
    generate_kartu(cards);
    for (int i = 0; i < 52; i++) {
        cout << cards[i] << endl;
    }

    // random lah kartunya
    

    return 0;
}