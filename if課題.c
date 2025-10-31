#include <stdio.h>

int main()
{
    int k;
    printf("煙草を一日何本吸いますか？");
    scanf("%d", &k);
    
    if (k <= 0)
    {
        printf("このまま煙草を吸わずに生きていきましょう");
    }
    
    else if (k >= 15)
    {
        printf("全国平均以上です。このままだと早死にます");
    }
    
    else
    {
        printf("煙草はほどほどにしましょう");
    }
    
    int r;
    printf("バイトで月いくら稼いでいますか？");
    scanf("%d", &r);
    
    if (r >= 100000)
    {
        printf("私にもお金を恵んでください");
    }
    
    else if (r < 30000)
    {
        printf("もっと頑張って働きましょう");
    }
    
    else
    {
        printf("これからも頑張りましょう");
    }
    return 0;
}