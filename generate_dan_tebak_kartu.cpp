#include <iostream>

using namespace std;

void generate_kartu(string[] cards){
    string lambang[] = {"Waru", "Hati", "Wajik", "Keriting"};
    string angka[] = {"As", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Jack", "Queen", "King"};
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cards[i*13+j] = (angka[j] + " " + lambang[i]); 
        }
    }
}

string random_choose(string cards[], int n) {
    
}

void play_game(string card) {
    cout << "Tebak kartu : ";
    string guess;
    cin >> guess;

    if (guess == random_card) {
        cout << "Selamat, tebakan anda benar!" << endl;
    } else {
        cout << "Maaf, tebakan anda salah!" << endl;
    }
}

int main() {
    string cards[52];
    // random lah kartunya
    generate_kartu(cards);
    string random_card = random_choose(cards, 52);
    play_game(random_card);

    return 0;
}