#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    char data;          // listedeki bir düğümün değeri
    struct node *next;  // bir sonraki düğümün adresi
} Node;

// Bu fonksiyon, tek bağlı listedeki elemanların palindrom olup olmadığını kontrol eder.
bool polindrom(Node *head) {
    // Hızlı ve yavaş işaretçiler kullanarak listenin orta elemanını bulun.
    Node *p = head, *q = head;
    while (q != NULL && q->next != NULL) {
        p = p->next;
        q = q->next->next;
    }
    if (q != NULL) { // Eleman sayısı tek ise orta elemanı atlayın.
        p = p->next;
    }

    // İkinci yarıdaki düğümleri ters çevirin.
    Node *prev = NULL, *curr = p, *next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    q = prev; // q ikinci yarı listenin başı

    // İlk yarıdaki elemanları ters çevrilmiş ikinci yarı ile karşılaştırın.
    p = head;
    while (q != NULL) {
        if (p->data != q->data) {
            return false;
        }
        p = p->next;
        q = q->next;
    }
    return true; // listenin palindrom olduğunu belirtir
}

int main() {
    Node *head = NULL, *tail = NULL;
    char c;
    printf("diziyi giriniz: ");
    while ((c = getchar()) != '\n') {
        Node *node = (Node *) malloc(sizeof(Node)); // Bellekte yeni bir düğüm oluşturun
        node->data = c;
        node->next = NULL;
        if (head == NULL) { // ilk düğüm ise başa ekle
            head = node;
            tail = node;
        } else { // değilse son düğüme bağlan
            tail->next = node;
            tail = node;
        }
    }
    printf(polindrom(head) ? "dogru\n" : "yanlis\n"); // palindrom mu değil mi diye kontrol edin ve sonucu yazdırın
    return 0;
}
