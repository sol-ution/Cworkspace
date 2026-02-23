/*
    1.
    int ch = getchar();로 받을 떄
    int digit = ch - '0'을 해주면 숫자로 전환가능

    2.
    랜덤 숫자 <time.h>헤더 time함수 -> 현재 시간을 반환
    <stdlib.h> -> srand함수 -> 무작위 숫자 생성
    time함수의 반환값을 srand의 입력으로 -> 매번 실행마다 
    같은 숫자가 나오는걸 방지
    srand((unsigned) time(NULL)); -> rand함수가 무작위 값을 반환

    3. 숫자 입력시 scanf로 통으로 받거나 getchar을 이용해서 하나씩 받거나
    scanf로 받으면, while(number > 0), number /= 10; 이고
    getchar로 받으면 while ((ch = getchar()) != '\n' && ch != EOF) 이다.
    character type -> 항상 마지막에 string[i] = '\0'해주기

    4. isalpha함수 -> A ~ Z -> 1반환, -> a ~ z -> 2반환

    
*/