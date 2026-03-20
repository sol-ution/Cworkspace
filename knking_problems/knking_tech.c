/*
    1.
    int ch = getchar();로 받을 떄
    숫자 값이랑 문작값을 ch로 받는 경우 숫자만 int형으로 
    쓰고 싶을 때, isdigit()함수 이용하기
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

    5. parenthese -> stack의 성질과 match -> 
    2개 값을 match시킬때 stack을 활용

    6. poker.c -> duplicate를 확인 -> int array를 만들어서 횟수 check
        - 작은 값들이면, 전체 탐색
        - 배열 안의 원소들이 모두 같음을 확인하려면 -> 첫값을 기준으로 같음을 확인

    7.  while(b != 0){
            gcd = a % b;
            a = b;
            b = gcd;
        } -> (gcd 알고리즘)

    8. bool search(const int a[], int n, int key){

        const int *p;

        for(p = a; p < a + n; p++){
            if(*p == key){
                return true;
            }
        }    
            return false;
        }
        (포인터가 배열이랑 같다, p++ == p[i++], p < a + n)
        (함수에서 포인터의 경우, 경로를 새로 지정하는게 아니라, 한번 가리킨 뒤
        역참조 연산자를 이용하여 값을 새로 할당해주는 느낌이다.)

    9.      double ident[N][N];
            int count = 0;
            double *p;

            for(p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++){
                if(count == N || p == &ident[0][0]){
                    *p = 1.0;
                    count = 0;
                }
                else{
                    *p = 0.0;
                    count++;
                }
            }
        // 단위행렬을 만드는 코드, -> 개선 가능
        // 다차원 배열일때는 코드를 이런 스타일로 작성한다.
        // pointer arithmetic 보다 배열구조를 더 활용하는 느낌

    10. read_line함수
        int read_line(char str[], int n){
        int ch, i = 0;

        while((ch = getchar()) != '\n' && ch != EOF){
            if(i < n){
                str[i++] = ch;
            }
        }
            str[i] = '\0';
            return i;
        }

*/