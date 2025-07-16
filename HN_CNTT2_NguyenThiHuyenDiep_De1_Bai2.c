#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int choice;
    do {
        printf("1.INSERT\n");
        printf("2.UNDO\n");
        printf("3.REDO\n");
        printf("4.PRINT\n");
        printf("5.EXIT\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                printf("Thoat chuong trinh\n");
                break;
        }
    }while (choice != 5);
}