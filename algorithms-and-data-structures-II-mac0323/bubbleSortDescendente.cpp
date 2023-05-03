// Aula dia 23/03

void ordena (int v[], int n) {
    int troca = 1;

    for(int i = 0; i < n && trocou; i ++){
        trocou = 0;

        for(int j = 0; j < n - i - 1; j++)
            if(v[j+1] < v[j]){
                int aux = v[j+1];
                v[j+1] = v[j]
                v[j] = aux;
                trocou = 1;
            }
    }
}
