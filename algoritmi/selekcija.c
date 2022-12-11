for (i = 0; i < n - 1; i = i + 1) {
   ind_min = i + 1;
   for (j = i + 2; j < n; j = j + 1) {
      if (polje[j] < polje[ind_min]) 
      ind_min = j;
    }
    if (polje[ind_min] < polje[i]) {
    pomocna = polje[i];
    polje[i] = polje[ind_min];
    polje[ind_min] = pomocna;
}
}

for (j = 0; j < n; j = j + 1) {
   for (i = 0; i < m - 1; i = i + 1) {
      int k, ind_min = i + 1;
      for (k = i + 2; k < m; k = k + 1) {
         if (polje[k][j] < polje[ind_min][j])
            ind_min = k;
      }
   if (polje[ind_min][j] < polje[i][j]) {
      int pomocna = polje[i][j];
      polje[i][j] = polje[ind_min][j];
      polje[ind_min][j] = pomocna;
   }
   }
}

for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n - 1; j++)
        {
            int k, min = j + 1;
            for ( k = j + 2; k < n; k++)
            {
                if (polje[i][i] < polje[min][min])
                {
                    min = k;
                }
            }
            if (polje[i][min] < polje[i][j])
            {
                int pomocna = polje[i][j];
                polje[i][j] = polje[i][min];
                polje[i][min] = pomocna;
            }
            
        }
        
    }

