#include <stdio.h>

int main(void)
{
    int beers = 99;
    for (int h = 0; h < beers; beers--)
    {
        if (beers == 1)
        {
            printf("🍺 🎶  %i bottle of beer on the wall %i bottle of beer, take one down pass it around no more bottles of beer on the wall! 🎶 🍺\n", beers, beers);
        }
        else if (beers == 2)
        {
            printf("🍻 🎶  %i bottles of beer on the wall %i bottles of beer, take one down pass it around %i bottle of beer on the wall 🎶 🍻\n", beers, beers, beers - 1);

        }
        else
        {
            printf("🍻 🎶  %i bottles of beer on the wall %i bottles of beer, take one down pass it around %i bottles of beer on the wall 🎶 🍻\n", beers, beers, beers - 1);
        }
    }
}