#include <stdio.h>

void calcula_hora(int totalMinutos, int *ph, int *pm) {
    *ph = totalMinutos / 60;
    *pm = totalMinutos - (*ph) * 60;
}

int main()
{
    int totalMinutos, hora, minutos;
    printf("Digite quantos minutos se passaram do dia de hoje: ");
    scanf("%d", &totalMinutos);
    calcula_hora(totalMinutos, &hora, &minutos);
    
    printf("Horário atual:\n\n%02d:%02d", hora, minutos);
    
    return 0;
}