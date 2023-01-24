Nume: Bogdan Alexandra-Lăcrămioara
Grupă: 325CD


# Tema 1 - Etapa finală
Descriere
-
*Enunț*
Dat fiind un vector  cu  elemente de tip întreg, răspundeți eficient la întrebări de tipul: “Care este elementul minim din intervalul care începe la poziția  și se termină la poziția ?”. Se consideră că se dă vectorul și apoi se fac  interogări.
Pentru această problemă am ales să analizez trei algoritmi
* Segment Tree
* Sparse Table
* Algoritmul lui Mo

Am inclus de asemenea și soluția banală în analiză, pentru a mă ajuta la validarea testelor.


Ierarhia fișierelor din arhivă
-
* Directorul in/- acest fișier conține testele de intrare generate cu ajutorul programului conținut in fișierul generator.cpp. Fiecare fișier este de forma testX,in, unde X reprezintă indexul testului detaliat în documentul pdf.
Fiecare test conține pe prima linie, N (numărul de elemente din secvență), M (numărul de interogări), pe a doua linie, N elemente (numere întregi - reprezentabile pe 32 biti) și pe următoarele  linii, câte o pereche de numere întregi  reprezentând poziții din secvență.
Pentru a adăuga noi teste pentru verificare, adăugati testul cu numărul asociat(spre ex. următorul test va fi de forma "test21.in").
** Directorul out/ ** - contine rezultatele rularii fisierelor de intrare. Fiecare fișier este de forma testX,out, unde X reprezintă indexul testului detaliat în documentul pdf.
** p1.c **- reprezintă programul asociat soluției banale, în limbajul de programare C.
** p2.c ** - reprezinta programul asociat metodei Segment Tree, în limajul de programare C.
** p3.c ** -  reprezinta programul asociat Algoritmului lui Mo, în limajul de programare C.
** p4.c **-  reprezinta programul asociat metodei Sparse Table, în limajul de programare C.
** best.c **-  reprezinta programul asociat metodei propuse spre competiție, în limajul de programare C.
** Directorul code/ **- conține p1.c, p2.c, p3,c, p4.c și best.c, detaliate anterior.
** Readme.md **
** 5.pdf ** - documentul in varianta finala in format pdf.
**  Makefile ** - un Makefile pentru a compila sursele C ce are reguli de build, run, clean.Dacă doriți să rulați un anumit test veți schimba în codul programului ales(spre ex. pentru problema 1 in p1.c) fisierul de input din "test.in" în "in/testX.in", unde X este id-ul testului pe care doriti sa il rulati. 
- make -f Makefile- compilează sursele
- make run-pX - rulează programul cu numărul X (1,2,3,4). 
- make clean - sterge fisierele .c

ID-ul testului pe care îl propun pentru competiție
-
Propun pentru competitie testul cu id-ul 20.

Referinte
-
1. Solutia banala - https://www.infoarena.ro/job_detail/148408?action=view-source
2. Segment Tree - https://www.infoarena.ro/job_detail/148285?action=view-source
3. Algoritmul lui Mo - https://www.infoarena.ro/job_detail/151694?action=view-source
4. Sparse Table - https://www.infoarena.ro/job_detail/148283?action=view-source

