for (i = 0; i < m; i++){
   for (j = 0; j < n; j++){
      matT[j][i] = mat[i][j];
   }
}

for (i = 0; i < n - 1; i = i + 1) {
   for (j = i + 1; j < n; j = j + 1) {
      int pomocna = mat[i][j];
      mat[i][j] = mat[j][i];
      mat[j][i] = pomocna;
    }
}