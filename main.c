#include <stdio.h>

int main() {
    while(1) {
        int a, b;
        int luachonmenu;
        printf("==menu===\n\n");
        printf("1.cong hai so\n");
        printf("2.tru hai so\n");
        printf("3.nhan hai so\n");
        printf("4.chia hai so\n");
        scanf("%d", &luachonmenu);
        printf("\n");
        printf("moi nhap so a =\n");
        scanf("%d", &a);
        printf("moi nhap so b =\n");
        scanf("%d", &b);

        printf("\n");

        switch (luachonmenu) {
            case 1:
                printf("the plus:%d", a + b);
                break;
            case 2:
                printf("the minus:%d", a - b);
                break;
            case 3:
                printf("the multip:%d, a*b");
                break;
            case 4:
                if (b != 0) {
                    printf("the divide:%0.2f", (float) a / b);
                } else {
                    printf("the divide: over");
                }
                break;
            default:
                printf("you have chosen wrong, please chosen again ");



        }

    }
    return 0;
}
