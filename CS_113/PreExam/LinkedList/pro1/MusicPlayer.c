#include <stdio.h>
#include <stdlib.h>

typedef struct song
{
    char *title;
    struct song *next;
    struct song *prev;
} Song;

typedef struct playlist
{
    Song *head;
    Song *tail;
} Playlist;

Song *create(char *title);
void add(Playlist *playlist, char *title);
void removeSong(Playlist *playlist, char *title);
void printPlaylist(Playlist *head);

    int main(int argc, char const *argv[])
{
    Playlist *playlist;

    add(playlist, "Why - blackbeans");
    add(playlist, "Why - blackbeans");
    removeSong(playlist, "Why - blackbeans");
    // add(playlist, "Pink - blackbeans");
    // add(playlist, "Wish - blackbeans");
    // add(playlist, "OK - blackbeans");
    printPlaylist(playlist);

    return 0;
}

Song *create(char *title)
{
    Song *new = (Song*)malloc(sizeof(Song*));
    new->title = title;
    new->next = NULL;
    new->prev = NULL;

    return new;
}


void add(Playlist *playlist, char *title)
{
    Song *newSong = create(title);

    // Empty list
    if (playlist->head == NULL)
    {
        playlist->head = newSong;
    }
    else 
    {
        playlist->tail->next = newSong;
        newSong->prev = playlist->tail;
    }
    playlist->tail = newSong;
}

void removeSong(Playlist *playlist, char *title)
{
    Song *temp = playlist->head;

    while (temp != NULL)
    {
        if (temp->title == title)
        {
            // If the song is in the middle
            if (temp->prev != NULL)
            {
                temp->prev->next = temp->next;
            }
            else
            {
                playlist->head = temp->next;
            }
            // If the song is in the middle
            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }
            else
            {
                playlist->tail = temp->prev;
            }
            free(temp);
        }
        temp = temp->next;
    }
}

void printPlaylist(Playlist *head)
{
    Song *temp = head->head;
    while (temp != NULL)
    {
        printf("%s\n", temp->title);
        temp = temp->next;
    }
}

