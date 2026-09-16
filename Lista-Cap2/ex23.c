#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao, total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("digite a hora de inicio: ");
    scanf("%d", &horas);

    printf("digite os minutos de inicio: ");
    scanf("%d", &minutos);

    printf("digite os segundos de inicio: ");
    scanf("%d", &segundos);

    printf("digite a duracao em segundos: ");
    scanf("%d", &duracao);

    total_segundos = horas * 3600 + minutos * 60 + segundos;
    total_segundos += duracao;

    hora_final = (total_segundos / 3600) % 24;
    minuto_final = (total_segundos % 3600) / 60;
    segundo_final = total_segundos % 60;

    printf("horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}