#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0, tekrarlanan, kayip;
    printf("Eleman sayisini giriniz: ");
    scanf("%d", &n);
    int arr[n];

    // Küme elemanlarını al
    printf("Elemani giriniz: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Tekrarlanan elemanı bul
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
        if (arr[index] > 0)
            arr[index] = -arr[index];
        else
            tekrarlanan = abs(arr[i]);
    }

    // Eksik elemanı bul
    int total_sum = (n * (n + 1)) / 2;
    kayip = total_sum - (sum - tekrarlanan);

    // Sonuçları yazdır
    printf("Tekrarlanan sayi: %d\n", tekrarlanan);
    printf("Eksik sayi: %d\n", kayip);

    return 0;
}


