min = polje[0][0];
for (i = 1; i < n; i++){
   if (polje[i][i] < min){
    min = polje[i][i];
   }
}

mins = polje[0][n - 1];
for (i = 1; i < n; i++) {
   if (polje[i][n - 1 - i] < mins) {
   mins = polje[i][n - 1 - i];
}
}
