#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    while (1){
        printf("aを入力してください");
        scanf("%d", &a);
        if (a != 0) break;
        printf("a = 0では二次方程式になりません。もう一度入力してください。\n");
    }
    printf("bを入力してください");
    scanf("%d", &b);
    
    printf("cを入力してください");
    scanf("%d", &c);
    
    double D = b * b - 4 * a * c;
    printf("判別式 D = %.2f\n", D);
    if (D > 0){
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        printf("２つの実数解があります。\n");
        printf("x1 = %.6f\n", x1);
        printf("x2 = %.6f\n", x2);
    }
    else if (D == 0){
        double x = -b / (2.0 * a);
        printf("１つの実数解(重解)があります。\n");
        printf("x = %.6f\n", x);
    }
    else {
        double real = -b / (2.0 * a);
        double imag = sqrt(-D) / (2.0 * a);
        printf("実数解はありません(虚数解)。\n");
        printf("x1 = %.6f + %.6fi\n", real, imag);
        printf("x2 = %.6f - %.6fi\n", real, imag);
    }
    return 0;
}
