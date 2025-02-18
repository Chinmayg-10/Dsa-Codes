#include<iostream>
using namespace std;

bool IsPossibleSoln(int arr[], int n, int m, int mid) {
    int pagesum = 0;
    int c = 1; // Number of students required

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            // If a single book has more pages than mid, return false
            return false;
        }

        if (pagesum + arr[i] > mid) {
            // Assign this book to the next student
            c++;
            pagesum = arr[i];

            if (c > m) {
                return false;
            }
        } else {
            pagesum += arr[i];
        }
    }
    return true;
}

int sum(int arr[], int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr[i];
    }
    return ans;
}

int BookAllocation(int arr[], int n, int m) {
    if (m > n) {
        return -1;
    }

    int s = 0;
    int e = sum(arr, n);
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (IsPossibleSoln(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {12, 34, 67, 90};
    int NoOfChildren = 2;
    int NoOfBooks = 4;
    int ans = BookAllocation(arr, NoOfBooks, NoOfChildren);
    cout << ans;
    return 0;
}
