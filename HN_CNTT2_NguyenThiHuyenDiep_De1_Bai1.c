#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct  {
    int id;
    char title[100];
    int priority ;
    char deadline[100];
} Nhiemvu;
typedef struct Node{
    Nhiemvu data;
    struct Node *next;
}
void themNhiemvu (Node**head){
    Nhiemvu n;
    printf("Nhap id: ");
    scanf("%d", n.Nhiemvu);
    getchar();
    printf("Nhap loai nhiem vu");
    fgets(n.title, MaxCount sizeof(n.title), stdin);
    n.title[strlen(n.title) - 1] = '\0';
    printf("Nhap priority: ");
    scanf("%d", &n.priority);
    getchar();
    printf("Nhap deadline: ");
    fgets(n.deadline, MaxCount sizeof(n.deadline), stdin);
    n.deadline[strlen(n.deadline) - 1] = '\0';
    NodeSLL* newNode = (NodeSLL*)malloc(sizeof(NodeSLL));
    newNode->data = m;
    newNode->next = *head;
    *head = newNode;
    StackNode* newStack = (StackNode*)malloc(sizeof(StackNode));
    newStack->data = m;
    newStack->next = *stack;
    *stack = newStack;

    printf("Da them nhiem vu thanh cong.\n");
}
void inDanhSach(NodeSLL* head) {
    if (!head) {
        printf("Danh sach rong.\n");
        return;
    }
    while (head) {
        printf("ID: %d | Title: %s | Piority: %d | Deadline: %s\n", head->data.id, head->data.title, head->data.piority, head->data.deadline);
        head = head->next;
    }
}
void timkiemNhiemvu(NodeSLL* head, char* n) {
    while (head) {
        if (strcmp(head->data.Nhiemvu, n) == 0) {
            printf("Khong tim thay nhiem vu");
            return;
        }
        head = head->next;
    }
    void sapxepNhiemVu(NodeSLL* head) {
        if (!head) return;

        for (NodeSLL* i = head; i->next; i = i->next) {
            for (NodeSLL* j = i->next; j; j = j->next) {
                if (strcmp(i->data.Nhiemvu, j->data.Nhiemvu) > 0) {
                    Nhiemvu temp = i->data;
                    i->data = j->data;
                    j->data = temp;
                }
            }
        }

        printf("Danh sach da duoc sap xep theo ten (A-Z).\n");
    }
    void hoanthanhNhiemVu(NodeSLL** head, NodeDLL** headD, NodeDLL** tailD, char* ma) {
        NodeSLL* prev = NULL, *cur = *head;

        while (cur && strcmp(cur->data.nhiemVu, n) != 0) {
            prev = cur;
            cur = cur->next;
        }

        if (!cur) {
            printf("Khong tim thay nhiem vu!\n");
            return;
        }

        if (!prev) *head = cur->next;
        else prev->next = cur->next;
        NodeDLL* newNode = (NodeDLL*)malloc(sizeof(NodeDLL));
        newNode->data = cur->data;
        newNode->next = NULL;
        newNode->prev = *tailD;

        if (*tailD) (*tailD)->next = newNode;
        else *headD = newNode;

        *tailD = newNode;

        free(cur);
        printf("Da chuyen vao danh sach hoan thanh.\n");
}
    void xoaNhiemvu(Node** head, int id) {
        Node *temp = *head, *prev = NULL;
        while (temp && temp->data.id != id) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Khong tim thay nhiem vu voi ID: %d\n", id);
            return;
        }
        if (prev == NULL) {
            *head = temp->next;
        }else {
            prev->next = temp->next;
        }
        free(temp);
        printf("Da xoa nhiem vu\n");
    }
    return;
}
int main(){
Node *head = NULL;
id choice, id;
char keyword[100];
do{
printf (fomat:"1. Them moi nhiem vu");
printf (fomat:"2. Hien thi nhiem vu");
printf (fomat:"3. Cap nhat thong tin");
printf (fomat:"4. Tim nhiem vu");
printf (fomat:"5. Danh sach nhiem vu sap xep");
printf (fomat:"6. Danh sach nhiem vu hoan thanh");
printf (fomat:"7.Xoa nhiem vu");
printf (fomat:"8. Thoat chuong trinh");
    switch (ch) {
case 1:themNhiemvu; break;
case 2:hienthiNhiemvu; break;
case 3:printf("ID: %d | Title: %s | Piority: %d | Deadline: %s\n"); break;
case 4:
            printf("Nhap id: ");
            scanf("%s", buffer);
            timKiemNhiemVu(danhSach, buffer);
            break;
case 5:sapxeptenNhiemvu ;break;
case 6:
            printf("Nhap nhiem vu: ");
            scanf("%s", buffer);
            chuyenSangHoanThanh(&danhSach, &dsHTHead, &dsHTTail, buffer);
            break;
case 7:xoaNhiemvu; break;
case 8:return;
}
}