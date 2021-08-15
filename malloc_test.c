#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// 構造体の宣言
typedef struct {
	int *num;
	char *str;
} strct;
 
int main(void) {
	// ポインタ型の変数を生成
	strct *entity;
	//struct timespec;
	int num_0;
	int *p_num_0;
	num_0 = 100;
	p_num_0 = &num_0;
	entity->num = p_num_0;
	printf("%p\n", entity->num);

	// 動的メモリの確保
	entity = (strct*)malloc(sizeof(strct));

	// メンバの初期化

	entity->str = (char*)malloc(sizeof(char) * 10);
 
	// メモリに文字列を代入
	sprintf(entity->str, "%s %s!", "Hello", "World");
	//printf("%s\n", entity->str);


	// メモリの解放
	free(entity->str);
	free(entity->num);
	
	free(entity);
 
	return 0;
}
