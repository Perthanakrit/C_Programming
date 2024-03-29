#include <stdio.h>
#include <stdlib.h>

typedef struct song
{
    char *title;
    int duration;
    struct song *next;
    struct song *prev;
} Song;

typedef struct playlist
{
    Song *head;
    Song *tail;
} Playlist;

Song *create(char *, int );
void add(Playlist **, char *, int);
void removeSong(Playlist **, char *);
void sort(Playlist **);
void printPlaylist(Playlist *);

int main(int argc, char const *argv[])
{
    Playlist *playlist;

    add(&playlist, "Why - blackbeans", 3);
    add(&playlist, "Why - blackbeans", 3);
    removeSong(&playlist, "Why - blackbeans");
    add(&playlist, "Pink - blackbeans", 4);
    add(&playlist, "Wish - blackbeans",5);
    add(&playlist, "OK - blackbeans", 2);

    sort(&playlist);

    printPlaylist(playlist);

    return 0;
}

Song *create(char *title, int duration)
{
    Song *new = (Song *)malloc(sizeof(Song));
    new->title = title;
    new->duration = duration;
    new->next = NULL;
    new->prev = NULL;

    return new;
}


void add(Playlist **playlist, char *title, int duration)
{
    Song *newSong = create(title, duration);

    // Empty list
    if ((*playlist)->head == NULL)
    {
        (*playlist)->head = newSong;
        (*playlist)->tail = newSong;
    }
    else 
    {
        (*playlist)->tail->next = newSong;
        newSong->prev = (*playlist)->tail;
    }
    (*playlist)->tail = newSong;
}

void removeSong(Playlist **playlist, char *title)
{
    Song *curr = (*playlist)->head;
    Song *del = NULL;

    while (curr != NULL)
    {
        if (curr->title == title)
        {
            // If the song is the head
            if (curr->prev == NULL)
            {
                del = curr;
                curr->prev = NULL;
            }
            // If the song is in the middle
            else if (curr->next != NULL && curr->prev != NULL)
            {
                del = curr;
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            // If the song is the tail
            else if (curr->next == NULL)
            {
                del = curr;
                curr->prev->next = NULL;
            }
            free(del);
        }
        curr = curr->next;
    }
}

void sort(Playlist **playlist)
{
    Song *curr = (*playlist)->head;
    Song *temp = NULL;
    int swapped = 0;

    while (curr != NULL)
    {
        temp = curr->next;
        while (temp != NULL)
        {
            if (curr->duration > temp->duration)
            {
                // Swap the duration
                int tempDuration = curr->duration;
                curr->duration = temp->duration;
                temp->duration = tempDuration;

                // Swap the title
                char *tempTitle = curr->title;
                curr->title = temp->title;
                temp->title = tempTitle;

                swapped = 1;
            }
            temp = temp->next;
        }
        curr = curr->next;

        if (swapped == 0)
        {
            break;
        }
    }
}

void printPlaylist(Playlist *head)
{
    Song *temp = head->head;
    while (temp != NULL)
    {
        printf("%s , %d\n", temp->title, temp->duration);
        temp = temp->next;
    }
}

