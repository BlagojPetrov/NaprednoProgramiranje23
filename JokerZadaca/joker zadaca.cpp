#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>
//INKI1033
/* Programata definira "enum" narecen "suit" i gi pretstavuva razlicnite kostumi na standardniot spil na karti: 
srce, detelina, baklava, list i joker. Deklariram potoa struktura narecena "card"
koja ima dva clena: "value" (cel broj pomegju 1 i 13) i "suit" (edna od vrednostite vo "suit" enum). 
Potoa ja definiram funkcijata narecena "printCardS" koja zema vektor od kartite i gi pecati vo konzolata. 
Funkcijata "createDeck" koja zema prazen vektor od karti i go popolnuva so 52 standardni karti za igranje (po 13 karti vo sekoe suit). 
So "shuffleDeck" gi mesa kartite i so "dealCards" koja zema spil na karti i vektor i podeluva ednakov broj karti na sekoj igrac.
Generalno ovaa programa gi demonstrita osnovite na rabota so vektori vo c++. */
using namespace std;

enum Suit {
    SRCE,
    DETELINA,
    BAKLAVA,
    LIST,
    JOKER
};

struct Card {
    int value;
    Suit suit;
};

void printCards(const vector<Card>& cards) {
    for (const auto& card : cards) {
        if (card.suit == JOKER) {
            cout << "Joker" << endl;
        } else {
            cout << card.value << " ";
            switch (card.suit) {
                case SRCE: cout << "Srce"; break;
                case DETELINA: cout << "Detelina"; break;
                case BAKLAVA: cout << "Baklava"; break;
                case LIST: cout << "List"; break;
            }
            cout << endl;
        }
    }
    cout << endl;
}

void createDeck(vector<Card>& deck) {
    for (int i = 1; i <= 13; i++) {
        deck.push_back({i, SRCE});
        deck.push_back({i, DETELINA});
        deck.push_back({i, BAKLAVA});
        deck.push_back({i, LIST});
    }
    deck.push_back({0, JOKER});
    deck.push_back({0, JOKER});
}

void shuffleDeck(vector<Card>& deck) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(deck.begin(), deck.end(), default_random_engine(seed));
}

void dealCards(const vector<Card>& deck, vector<vector<Card>>& players) {
    int numPlayers = players.size();
    int numCardsPerPlayer = deck.size() / numPlayers;
    int currentCard = 0;
    for (auto& player : players) {
        for (int i = 0; i < numCardsPerPlayer; i++) {
            player.push_back(deck[currentCard]);
            currentCard++;
        }
    }
}

int main() {
    vector<Card> deck;
    createDeck(deck);
    cout << "Podreden spil:" << endl;
    printCards(deck);
    shuffleDeck(deck);
    cout << "Izmesan spil:" << endl;
    printCards(deck);
    vector<vector<Card>> players(4);
    dealCards(deck, players);
    cout << "Podeleni karti:" << endl;
    for (int i = 0; i < players.size(); i++) {
        cout << "Igrac " << (i+1) << ":" << endl;
        printCards(players[i]);
    }
    return 0;
}