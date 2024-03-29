#include <stdio.h>

typedef enum {
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
} Face;

typedef enum {
    SPADES, HEARTS, DIAMONDS, CLUBS
} Suit;

typedef struct {
    Face face : 4; // 4 bits
    Suit suit : 2; // 2 bits
} Card;

typedef union
{
    int i;
    float f;
    char c;
} Value;


int main(int argc, char const *argv[])
{
    Card queenOfHearts = {QUEEN, HEARTS};
    /*
        queenOfHearts.face = QUEEN;
        queenOfHearts.suit = HEARTS;
    */

   printf("Card: %d of %d\n", queenOfHearts.face, queenOfHearts.suit);
   printf("Size of Card: %lu\n", sizeof(Card)); // 4 bytes

    Value v;
    v.i = 10;
    printf("Value: %d\n", v.i);
    v.f = 3.14;
    printf("Value: %d\n", v.i);

    return 0;   
}

