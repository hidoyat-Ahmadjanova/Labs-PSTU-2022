//Функция обмена строк
void swap_rows(int **arr, int row_size, int f, int s) { // f и s - номера строк которые меняем. row_size - кол-во столбцов
    int tmp;
    for(int i=0; i<row_size; i++) {
        tmp = arr[f][i];
        arr[f][i] = arr[s][i];
        arr[s][i] = tmp;
    }
}
 
int main() {
    int **mas, n, m;
    
     ("\nvvedite kolichestvo strok\n");
     ("%d", &n);
     ("vvedite kolichestvo stolbcov\n");
     ("%d", &m);
    if(n < 1) n = 1;
    if(m < 3) m = 3;
 
    //Выделяем память под массив
    mas = new int*[n];
    for(int i=0; i<n; i++) mas[i] = new int[m];
    
    for (int i=0; i<n; i++) {
         ("\n");
        for (int j=0; j<m; j++) {
            mas[i][j]=0+50;
             ("%2d ", mas[i][j]);
        }
    }
    
    //сортируем массив при помощи функции обмена строк swap_rows
    for (int i=1; i<n; i++) {
        if(mas[i][2] < mas[i-1][2]) {
            swap_rows(mas,m,i,i-1);
            i = 0;
        }
    }
 
    ("\n");
    
    //выводим результат
    for (int i=0; i<n; i++) {
         ("\n");
        for (int j=0; j<m; j++) {
             ("%2d ", mas[i][j]);
        }
    }

    return 0;
}