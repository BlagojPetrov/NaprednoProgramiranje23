//NP-lab.04
//INKI 1033
/*Ovoj kod e so spil na karti i definiranje na struktura na
karti koja se sostoi od "pointer" kon liceto na karata i "pointer"
kon slikickata na kartata. Potoa sozdava niza od spil na karti
"deck" koi sto gi ima site 52 karti od spilot.
Funkcijata fillDeck e za da go popolni dekot na karti so licata
i so slikata na sekoja od kartite po red."Shuffle" se koristi za
random mesanje na kartite koristejki "rand". "Deal" se koristi
za da gi pokaze izmesanite karti na korisnikot. Generalno programata
e kako primer za toa kako da se implementiraat osnovintie koncepti
kako sto se arrays, functions, ponters itn.. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
   const char *face; // define pointer face
   const char *suit; // define pointer suit
}; // end struct card

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{
   Card deck[ CARDS ]; // define array of Cards

   // sto se pravi vo ovoj red ?
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   // sto se pravi vo ovoj red ?
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand( time( NULL ) ); // sto e ovaa naredba ?

   fillDeck( deck, face, suit ); 
   shuffle( deck ); 
   deal( deck ); 
} // end main

// place strings into Card structures
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i; 

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } // end for
} // end function fillDeck

// shuffle cards
void shuffle( Card * const wDeck )
{
   size_t i; // sto e ovaa promenliva ?
   size_t j; // sto e ovaa promenliva i vo koi vrednosti se dvizi ? vidi kod 
   Card temp; // define temporary structure for swapping Cards

   // loop thr
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; // 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } // end for
} // end function shuffle

// deal cards
void deal( const Card * const wDeck )
{
   size_t i; // counter

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } // end for
} // end function deal