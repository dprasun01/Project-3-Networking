/* This project was done as a group by:

Prasun Dhungana - @02969212
Siyam Al Shahriar - @03043178

*/

#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node {
    char username[30];
    int socket;
    struct node *next;
    struct node *dm_connections;
};

struct room_node {
    char roomname[30];
    struct room_node *next;
    struct node *users;
};

struct node* insertFirstU(struct node *head, int socket, char *username);
struct node* findU(struct node *head, char* username);
struct node* deleteU(struct node *head, char *username);
void listUsers(struct node *head);

struct room_node* insertFirstR(struct room_node *head, char *roomname);
struct room_node* findR(struct room_node *head, char* roomname);
struct room_node* deleteR(struct room_node *head, char *roomname);
void listRooms(struct room_node *head, char *buffer);
void addUserToRoom(struct room_node *room, struct node *user);
void removeUserFromRoom(struct room_node *room, char *username);
void listUsersInRoom(struct room_node *room, char *buffer);

bool connectUsers(struct node *head, char *user1, char *user2);
bool disconnectUsers(struct node *head, char *user1, char *user2);
bool areConnected(struct node *head, char *user1, char *user2);

#endif 