#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char *getword(FILE *fp)
{
    char word[100];
    int ch; 
    size_t idx ;

    for (idx=0; idx < sizeof word -1; ) {
        ch = fgetc(fp);
        if (ch == EOF) break;
        if (!isalpha(ch)) {
           if (!idx) continue; // Nothing read yet; skip this character
           else break; // we are beyond the current word
           }
        word[idx++] = tolower(ch);
        }
    if (!idx) return NULL; // No characters were successfully read
    word[idx] = '\0';
    return strdup(word);
}
/*
 * check whether the current word has already been recorded in the outfile
 */
int checkWord(FILE* fp, char * word){
		fseek( fp, 0, SEEK_SET );
		char arr[30];
		while (fscanf(fp,"%s",arr) != EOF ) {
 			int result = strcmp(word, arr); 
			if (result == 0)
					return 1; 
		}	
		return 0;
}


char* concat(const char* str1, const char* str2)
{
    char* result;
    asprintf(&result, "%s%s", str1, str2);
    return result;
}

int word2vec(char *pNomeTxtEntrada){
	FILE* fp, *fpo;
	fp = fopen(pNomeTxtEntrada,"r");
	if (fp == NULL) {
		printf("Não foi possível abrir arquivo %s.\n", pNomeTxtEntrada);
		return 0;
	} else {
			printf("Arquivo aberto com sucesso!");
	}	
	char *word;
	int dimNomeArquivo = strlen(pNomeTxtEntrada);
	printf("%d\n",dimNomeArquivo);
	pNomeTxtEntrada[dimNomeArquivo - 4] = '\0';
	fpo = fopen(concat(pNomeTxtEntrada, "_vocab.txt"),"w+");
	word=getword(fp);
    while(word){
			if (strlen(word)>3){
				if (!checkWord(fpo, word)){
						printf("%s\n", word);
						fseek( fpo, 0, SEEK_END) ;
						fprintf(fpo,"%s\n", word);

				}
			}	
			word=getword(fp);
	}

	return 1;
}



int main(){
    char NomeArquivo[100];
	scanf("%s", NomeArquivo);
    if (!word2vec(NomeArquivo))
    	printf("Erro na geração do vocábulo!");
	return 0; 
}
