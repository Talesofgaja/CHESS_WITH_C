# CHESS_WITH_C
convert powershell for utf8
$OutputEncoding = [Console]::OutputEncoding = [System.Text.Encoding]::UTF8
compaile 
 gcc main.c board.c moves.c save_game.c checkmate.c -o chess -lm
 exe
 ./chess
