    int i = 0;
    int br = 0;
    while (niz[i] != '\0') {
       if (niz[i] == '\n')
       niz[i] = '\0';
       i = i + 1;
       br++;
    }br--;