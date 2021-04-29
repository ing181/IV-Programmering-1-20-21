KOMPILERA UTAN Code::Blocks

Öppna cmd (sök i programmenyn)

skriv (i cmd) cd "C:\Users\ingcei0123\OneDrive - lerum.se\Documents\Lerums Gymnasium\2020-2021\IV Programmering 1\Lektioner\2021-04-29\dynamic"
Alltså platsen där du har din källkodsfil. main.cpp

cd (change directory) och sökvägen till där main.cpp filen finns. Använd windows utforskaren och kopiera sökvägen i adressrutan. Finns det mellanslag i sökvägen måste du ha "" runt om

skriv g++ -v (i cmd) 
Om du får en massa utskrifter som slutar med "gcc version 8.3.0 (x86_64-posix-seh, Built by strawberryperl.com project)" eller något liknande så är allt frid och fröjd. Då hittas kompilatorn.

Om inte så får du leta upp den själv. Den finns här. Om du installerat Code::Blocks
C:\Program Files\CodeBlocks\MinGW\bin

Nu kan du testa
"C:\Program Files\CodeBlocks\MinGW\bin\g++" -v (Glöm inte "")

"C:\Program Files\CodeBlocks\MinGW\bin\g++" main.cpp -o mittprogram.exe (Glöm inte "")
Då kompileras din källkodsfil och programmet mittprogram.exe skapas.




