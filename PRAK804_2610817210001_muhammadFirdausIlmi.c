#include <stdio.h>

struct peserta {
    char name[100];
    int age;
    int score;
};

int main(){
    int index;
    int highestScore = 0;
    
    
scanf("%d", &index);
struct peserta pesertaA[10];

for(int i = 0; i < index; i++){
    scanf("%s %d %d", pesertaA[i].name, &pesertaA[i].age, &pesertaA[i].score);
}
for (int i = 1; i < index; i++){
    if (pesertaA[i].score > pesertaA[highestScore].score){
        highestScore = i;
    }
}
printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n", pesertaA[highestScore].name, pesertaA[highestScore].score);

    return 0;
}