#include <stdio.h>

#define MAX_WIDTH 100
#define MAX_HEIGHT 100
#define MAX_ALLOWED_WIDTH 1024
#define MAX_ALLOWED_HEIGHT 768

// Função para codificar a imagem no formato PBM
void encodeImage(int width, int height, int image[MAX_HEIGHT][MAX_WIDTH]) {
    printf("P1\n"); // Magic number para identificar o formato PBM
    printf("%d %d\n", width, height); // Imprime largura e altura

    // Imprime os pixels da imagem
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int width, height;
    int image[MAX_HEIGHT][MAX_WIDTH];

    char input_choice;
    printf("Deseja inserir manualmente os dados da imagem (s) ou fornecer um arquivo PBM (f)? ");
    scanf(" %c", &input_choice);

    if (input_choice == 's' || input_choice == 'S') {
        // Leitura manual dos dados da imagem
        printf("Insira a largura e altura da imagem (máximo: 1024x768): ");
        scanf("%d %d", &width, &height);

        printf("Largura: %d Altura: %d\n", width, height); // Exibe as dimensões recebidas

        if (width <= 0 || height <= 0 || width > MAX_ALLOWED_WIDTH || height > MAX_ALLOWED_HEIGHT) {
            printf("Dimensões inválidas ou excedem o limite máximo permitido.\n");
            return 1;
        }

        printf("Insira os pixels da imagem (0 para branco e 1 para preto):\n");
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                scanf("%d", &image[i][j]);
            }
        }
    } else if (input_choice == 'f' || input_choice == 'F') {
        // Leitura dos dados da imagem a partir de um arquivo PBM
        FILE *file = fopen("C:\\Users\\Pichau\\Desktop\\arquivo.pbm", "r");
        if (file == NULL) {
            printf("Erro ao abrir o arquivo.");
            return 1;
        }

        char magicNumber[3];
        fscanf(file, "%s", magicNumber);

        if (magicNumber[0] != 'P' || magicNumber[1] != '1') {
            printf("Formato de arquivo inválido.");
            return 1;
        }

        while (fgetc(file) != '\n'); // Descarta o restante da linha após o magic number

        char comment;
        do {
            comment = fgetc(file);
            printf("%c", comment);
        } while (comment != '\n'); // Exibir o comentário até chegar no final da linha

        fscanf(file, "%d %d", &width, &height);

        printf("Largura: %d Altura: %d\n", width, height); // Exibe as dimensões do arquivo

        if (width <= 0 || height <= 0 || width > MAX_ALLOWED_WIDTH || height > MAX_ALLOWED_HEIGHT) {
            printf("Dimensões inválidas ou excedem o limite máximo permitido.\n");
            return 1;
        }

        // Lê os pixels da imagem
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                fscanf(file, "%d", &image[i][j]);
            }
        }

        fclose(file);
    } else {
        printf("Opção inválida.");
        return 1;
    }

    // Chama a função de codificação da imagem
    encodeImage(width, height, image);

    return 0;
}
