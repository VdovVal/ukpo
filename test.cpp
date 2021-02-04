#include "program.h"

bool searchNonExistent() {
    int arr[] = {0, 1, 2};
    int n = 3;
    int actual = binarySearch(arr, 0, n - 1, 3);
    if (actual == -1) {
        return true;
    } else {
        return false;
    }
}

bool searchExistentInMiddle() {
    int arr[] = {0, 1, 2};
    int n = 3;
    int actual = binarySearch(arr, 0, n - 1, 1);
    if (actual == 1) {
        return true;
    } else {
        return false;
    }
}

bool searchExistentInLeft() {
    int arr[] = {0, 1, 2};
    int n = 3;
    int actual = binarySearch(arr, 0, n - 1, 0);
    if (actual == 0) {
        return true;
    } else {
        return false;
    }
}

bool searchExistentInRight() {
    int arr[] = {0, 1, 2};
    int n = 3;
    int actual = binarySearch(arr, 0, n - 1, 2);
    if (actual == 2) {
        return true;
    } else {
        return false;
    }
};

int main() {
    if (searchNonExistent() && searchExistentInMiddle() && searchExistentInLeft() && searchExistentInRight()) {
        return 0;
    } else {
        return -1;
    }
}