#include <iostream>

using namespace std;
int ** createMatrix(int **arr, int numArray, int k, int N, int *num) {
    int ** temp = new int * [numArray];
    for (int i = 0; i < numArray - 1; i++) {
        temp[i] = new int [k];
        if (arr != nullptr) {
            for (int j = 0; j < k; j++) {
                temp[i][j] = arr[i][j];
            }
            delete []arr[i];
        }
        
    }
    if (arr != nullptr)
        delete []arr;
    temp[numArray - 1] = new int [k];
    for (int i = 0; i < k; i++) {
        temp[numArray - 1][i] = num[i];
    }
    return temp;
    
}
void permutation(int N, int k, int count, bool *flag, int **&arr, int &numArray, int *temp) {
    if (count == k) {
        numArray ++;
        arr = createMatrix (arr, numArray, k, N, temp);
    }
    else {
        for (int i = 1; i <= N; i++) {
            if(flag[i - 1] == true)
                continue;
            flag[i - 1] = true;
            temp[count] = i;
            count ++;
            permutation(N, k, count, flag, arr, numArray, temp);
            count --; flag[i - 1] = false;
        }
    }
}

void toHopChapK(int N, int k, int count, int start, int **&arr, int &numArray, int *temp) {
    if (count == k) {
        numArray ++;
        arr = createMatrix (arr, numArray, k, N, temp);
    }
    else {
        for (int i = start; i <= N; i++) {
            temp[count] = i;
            count ++;
            toHopChapK(N, k, count, i + 1, arr, numArray, temp);
            count --;
        }
    }
}

int main () {
    int k, N;
    int ** arr = nullptr;
    int count = 0;
    bool *flag = new bool [N];
    int *temp = new int [k];
    for (int i = 0 ; i < N; i++) {
        flag[i] = false;
    }
    int numArray = 0;
    std :: cout << "N = "; std :: cin >> N;
    std :: cout << "k = "; std :: cin >> k;
    toHopChapK(N, k, count, 1, arr, numArray, temp);
    for (int i = 0; i < numArray; i++) {
        for (int j = 0; j < k; j++) {
            std :: cout << arr[i][j] << " ";
        }
        std :: cout << std :: endl;
        delete []arr[i];
    }
    std :: cout << numArray << "truong hop";
    delete []flag;
    delete []arr;
    delete []temp;
}