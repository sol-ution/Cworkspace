#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders
#define MSG_LEN 60    // max length of reminder message

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[12], msg_str[MSG_LEN + 1];
    int month, day, time, min, i, j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("-- No space left -- \n");
            break;
        }

        printf("Enter month/day, 24-hour-time and reminder: ");
        scanf("%2d/%2d",&month, &day);

        if(month == 0 || day == 0){
            break;
        }
        if((day < 0 || day > 31) || (month < 0 || month > 12)){
            printf("Wrong Input");
            continue;
        }
        scanf("%2d:%2d", &time, &min);

        sprintf(day_str, "%02d/%02d %02d:%02d", month, day, time, min); // month, day, time, min을 문자열로 읽는다
        //sprintf함수 -> sprintf(str, "format%d", a) format으로 받은걸
        //a에 저장후 str 변수에 연결
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++){
            if(strcmp(day_str, reminders[i]) < 0){
                break;
            }
        }
        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }
        strcpy(reminders[i], day_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }
    printf("\nYear Reminder\n");
    for(i = 0; i < num_remind; i++){
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

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

   /* 10. for(i = 0; i < num_remind; i++){
            if(strcmp(day_str, reminders[i]) < 0){
            break;
        } // day string(지금 입력한 day)이랑 reminders[i](이전에 넣은 코드들)을 비교해서
          // 앞에 days tring을 넣음

        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }
        //삽입할 자리를 만들기 위해서 앞부터 한칸씩 복사한다.
   */