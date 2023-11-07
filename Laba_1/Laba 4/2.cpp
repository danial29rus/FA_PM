#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int exit_code = 200;

    FILE *file = fopen("/Users/danyanara/Desktop/универ/Laba_1/Laba_1/Laba 4/log.txt", "r");
    if (file == NULL) {
        perror("Не удается открыть файл");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        int code;
        if (sscanf(line, "%*s %*s %*s [%*s] %*s %d\n", &code) == 1) {
            printf("Считанная строка: %s\n", line);
            if (code == exit_code) {
                printf("Найдено совпадение: %s", line);
            }
        }
    }

    fclose(file);
    return 0;
}
