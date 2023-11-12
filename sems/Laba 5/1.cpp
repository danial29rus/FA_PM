#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file = fopen("/Users/danyanara/Desktop/универ/sems/sems/Laba 5/log.txt", "r");
    if (file == NULL) {
        perror("Не удается открыть файл");
        return 1;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
