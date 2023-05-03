// Calcula quanta triplas tem a soma maior que val

int conta (int a[], int n, int val) {
  int cnt = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      for (int k = j + 1; j < n; k++){
        if (a[i] + a[j] + a[k] > val)
          cnt++;

  return cnt;
}
