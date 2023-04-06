//INKI 1033
// Gi vmetnuvam site biblioteki sto mi se potrebni za ovaa aplikacija
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definiram kolku karti ima vo eden shpil
#define CARDS 54
#define FACES 13

struct card {
   const char *face; 
   const char *suit; 
}; 

// Definiram typedef za da koristam alias Card za struct card
typedef struct card Card; 

// Gi definiram funkciite fillDeck, shuffle i deal
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{
   // Sozdavam niza na karti
   Card deck[ CARDS ]; 

   // Sozdavam konstanta za site broevi na karti
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King", "Joker", "Joker"};

   // Sozdavam konstanta za site znaci na karti
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   // Ovaa funkcija generira razlicen broj po toa sto go zima momentalnite sekundi so time() funkcijata i na sekoe novo instanciranje na aplikacijata
   // generira nov razlicen broj.
   srand( time( NULL ) ); 

   // Prven ja povikuvam fillDeck i deal funkciite koi gi instancira kartite i gi pecati po red
   fillDeck( deck, face, suit );
   printf("Shpil na karti po red:\n");
   deal( deck );
   
   // Potoa ja povikuvam shuffle funkcijata koja gi mesa kartite pa ja povikuvam deal funkcijata koja ni gi pecati izmesanite karti
   printf("\n\nShpil na karti izmesani:\n");
   shuffle( deck ); 
   deal( deck ); 
} 

// Sozdavam funkcija fillDeck vo koja gi instancira site karti koristejki for loop
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i; 

   
   for ( i = 0; i < CARDS; ++i ) {
      if (i >= 52) {
      wDeck[i].face = wFace[i % FACES + 2];
      wDeck[i].suit = "Joker";
    } else {
      wDeck[i].face = wFace[i % FACES];
      wDeck[i].suit = wSuit[i / FACES];
    }
   }
}

// Sozdavam funckija shuffle vo koja gi mesa site karti koristejki ja vgradenata rand() funkcija i dvodimenzionalna niza
void shuffle( Card * const wDeck )
{
   size_t i; 
   size_t j; 
   Card temp; 
   
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } 
} 

// Sozdavam funkcija deal vo koja gi prikazuva site izmesani karti koristejki for loop niza
void deal( const Card * const wDeck )
{
    size_t i; 

   
   for ( i = 0; i < CARDS; ++i ) {
       if(wDeck[ i ].suit == "Joker") {
            printf("     %-6s%s     ", wDeck[i].suit, (i + 1) % 4 ? "  " : "\n");
       } else {
            printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? "  " : "\n");
       }
   } 
}