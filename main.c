#include <stdio.h>

int main() {
        int a, b;
        int luachonmenu;
    do{
        printf("====menu====\n\n1.cong hai so\n2.tru hai so\n3.nhan hai so\n4.chia hai so\n5.thoat\n\n""xin moi chon: ");
        scanf("%d", &luachonmenu);

        switch (luachonmenu) {
            case 1:{
                printf("nhap hai so a, b: ");
                scanf("%d%d", &a, &b);
                printf("the plus:%d", a + b);
                break;
            }
            case 2: {
                printf("nhap hai so a, b: ");
                scanf("%d%d", &a, &b);
                printf("the minus:%d", a - b);
                break;
            }
            case 3:{
                printf("nhap hai so a, b: ");
                scanf("%d%d", &a, &b);
                printf("the multip:%d, a*b");
                break;
            }
            case 4:{
                printf("nhap hai so a, b: ");
                scanf("%d%d", &a, &b);
                if (b != 0) {
                    printf("the divide:%0.2f", (float) a / b);
                } else {
                    printf("the divide: over");
                }
                break;
            }
            case 5:{
                break;
            }
            default:
                printf("please chosen again");
                break;
        }

    } while(luachonmenu!=5);
    return 0;
    }



