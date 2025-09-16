# Analiza projekta MATFWars
Ovaj projekat predstavlja analizu igre [MATFWars](https://gitlab.com/matf-bg-ac-rs/course-rs/projects-2023-2024/MATFWars), implementirane uz pomoć jezika C++. Izvršena je analiza **main** grane, a hash kod komita je: `40f700491668521ef2a986d2ce42072cd464f375`.
## Opis igre
Matematičke igrice koje na zabavan način podstiču razumevanje i učenje funkcija i njihovih grafova. Moguće je izabrati jednu od dve igrice: War game i Guessing game. War game predstavlja mulitplayer igricu gde je cilj odgovarajućom matematičkom funkcijom pogoditi protivnika uz prepreke. Guessing game predstavlja singleplayer igricu različitih težina, gde je cilj pogoditi iscrtanu funkciju u određenom vremenu.
### Okruženje 
🛠️ IDE: **Qt Creator**

### Programski jezik
- 📚 **C++17**
- 📦 Framework: **Qt6**
  
### Primena alata 🔧
Za potrebe kursa Verifikacija softvera, izvršena je analiza projekta MATFWars
tako što su primenjeni alati:
- Cppcheck
- Memcheck
- Massif
- ClangFormat


Da bi primena alata nad projektom bila moguća, potrebno je klonirati projekat i pozicionirati se u njega:
`git clone https://github.com/MATF-Software-Verification/2024_Analysis_MATFWars/`

### Cppcheck
Pokreće se skripta *cppcheck.sh*, uz pomoć koje se generiše fajl *result.txt*:
``` bash
cd cppcheck
chmod +x cppcheck.sh
./cppcheck.sh
```

### Memcheck
Pokreće se skripta *memcheck.sh*, koja poziva alat nad izvršnim fajlom projekta MATFWars i koristi fajl *valgrind_supressions.supp*:
``` bash
cd memcheck
chmod +x memcheck.sh
./memcheck.sh
```

### Massif
Pokreće se skripta *massif.sh*, uz pomoć koje se generiše fajl *result.txt* i upisuje izlaz alata u fajl *result_ms_print.txt*, koji je lakši za čitanje rezultata:
``` bash
cd massif
chmod +x massif.sh
./massif.sh
```

### ClangFormat
Pokreće se skripta *clangformat.sh*, koja vrši izmenu koda na osnovu već definisanog fajla *.clang_format*. Takođe, skripti je potrebno proslediti putanju do projekta, kao i putanju do *.clang_format*:
``` bash
cd clangformat
chmod +x clangformat.sh
./clangformat.sh /putanja/do/projekta /putanja/do/.clang-format
```
