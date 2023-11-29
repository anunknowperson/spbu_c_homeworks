#include "frequent.h"

#include <stdlib.h>

typedef struct {
    int element;
    int frequency;
} ElementFreq;

int findMostFrequent(int arr[], int n) {
    if (n == 0) return -1;

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    ElementFreq *freq = (ElementFreq *)malloc((maxVal + 1) * sizeof(ElementFreq));
    if (freq == NULL) return -1;

    for (int i = 0; i <= maxVal; i++) {
        freq[i].element = i;
        freq[i].frequency = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]].frequency++;
    }

    int maxFrequency = 0, mostFrequent = -1;
    for (int i = 0; i <= maxVal; i++) {
        if (freq[i].frequency > maxFrequency) {
            maxFrequency = freq[i].frequency;
            mostFrequent = freq[i].element;
        }
    }

    free(freq);

    return mostFrequent;
}