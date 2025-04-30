#include <stdio.h>

int somar_array(int arr[], int tamanho) {
    if (tamanho <= 0)
        return 0;
    return arr[tamanho - 1] + somar_array(arr, tamanho - 1);
}

int main() {
    int n, i;
    
    printf("Digite quantidade de 'casas': ");
    scanf("%d", &n);
   
    int arr[n];
    
    printf("Digite os %d elementos do array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int soma = somar_array(arr, n);
    
    printf("Array: [");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
    
    printf("Soma dos elementos: %d\n", soma);
    
    return 0;
}
