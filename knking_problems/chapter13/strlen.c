#include <stdio.h>
#include <string.h>


int main(void){


    return 0;
}

size_t strlen(const char *s){
    size_t = n = 0;

    while(*s++){ // *s++ -> *s != '\0', s++;
        n++;
    }
    return n;
}

size_t strlen2(const char *s){
    const char *p = s;
    while(*s++)
        ;
    return s - p; // pointer arithmetic
}

char *strcat(char *s1, const char *s2){
    char *p = s1;
    while(*p != '\0')
        p++;
    while(*s2 != '\0'){
        *p = *s2;
        p++;
        s2++;
    }
}
char *strcat2(char *s1, const char *s2){
    char *p = s1;

    while(*p)
        p++;
    while(*p++ = *s2++)
        ;
    return s1;
}

int read_line(char str[], int n){
    int ch, i = 0;

    while(isspace(ch = getchar()))
        ;
    while((ch = getchar()) != '\n' && !isspace(ch)){
        str[i++] = ch;
    }
    if(ch == '\n' && i < n - 1)
        str[i++] = '\n';
    str[i + 1] = '\0';
    return i;
}

void capitalize(char *str){
    char *p, int i;

    for(*p = str; *p != '\0'; p++){
        if(*p >= 'a' && *p <= 'z'){
            toupper(*p);
        }
    }
}

void censor(char *str){
    char *p = str;
    while(*p != '\0'){
        switch(*p){
            case 'f': *p = 'x'; break;
            case 'o': *p = 'x'; break;
        }
    }
}