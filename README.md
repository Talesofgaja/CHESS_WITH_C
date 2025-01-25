# CHESS_WITH_C
convert powershell for utf8
$OutputEncoding = [Console]::OutputEncoding = [System.Text.Encoding]::UTF8
compaile 
 gcc main.c board.c moves.c save_game.c checkmate.c -o chess -lm
 exe
 ./chess
COPY FOR GITHUB
gcc main.c board.c moves.c save_game.c checkmate.c -o chess -lm
./chess

COPY FOR VSCODE
cd "C:\Users\agomo\OneDrive\Desktop\New folder\project_chess"
$OutputEncoding = [Console]::OutputEncoding = [System.Text.Encoding]::UTF8
gcc main.c board.c moves.c save_game.c checkmate.c -o chess -lm
.\chess


