/*

** CICLI (ITERAZIONI O RIPETIZIONI) **

1. for ()
    - Utilizzato quando si conosce a priori il numero di iterazioni.
    - Sintassi:
      for (inizializzazione; condizione; incremento) {
            // corpo del ciclo
      }
    - Esempio:
      for (int i = 0; i < 10; i++) {
            cout << i << endl;
      }

2. do{}
    - Utilizzato quando si vuole eseguire il corpo del ciclo almeno una volta,
      indipendentemente dalla condizione.
    - Sintassi:
      do {
            // corpo del ciclo
      } while (condizione);
    - Esempio:
      int i = 0;
      do {
            cout << i << endl;
            i++;
      } while (i < 10);

3. while ()
    - Utilizzato quando non si conosce a priori il numero di iterazioni e si vuole
      eseguire il ciclo finché una condizione è vera.


*/