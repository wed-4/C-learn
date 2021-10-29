#include <stdio.h> //stdio.hをインクルード

int main(void){    //main関数（プログラムはここから始まる）
    printf("今日は\n"); //今日は
    printf("快晴です\n"); //快晴です
    return 0; //正常終了を返す
}

//return関数について

//0で正常終了
//1で異常終了

//EXIT_SUCCESSというマクロを使うことでも正常終了ができる。
//stdlib.hをインクルードする必要がある。
