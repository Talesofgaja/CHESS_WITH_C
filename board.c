#include "board.h"

void initializeBoard(Piece board[8][8])
{
    // Initialize empty squares
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            board[i][j].type = EMPTY;
        }
    }

    // Set up pawns
    for (int i = 0; i < 8; i++)
    {
        board[1][i].type = PAWN;
        board[1][i].color = BLACK;
        board[6][i].type = PAWN;
        board[6][i].color = WHITE;
    }

    // Set up other pieces for both colors
    int backRow[8] = {ROOK, KNIGHT, BISHOP, QUEEN, KING, BISHOP, KNIGHT, ROOK};
    for (int i = 0; i < 8; i++)
    {
        board[0][i].type = backRow[i];
        board[0][i].color = BLACK;
        board[7][i].type = backRow[i];
        board[7][i].color = WHITE;
    }
}
void printBoard(Piece board[8][8])
{
    printf("  a b c d e f g h\n");
    printf(" +-----------------+\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d| ", 8 - i);
        for (int j = 0; j < 8; j++)
        {
            char pieceChar = ' ';
            if (board[i][j].type == EMPTY)
            { // Check for empty squares FIRST
                printf(". ");
                continue; // VERY IMPORTANT: Skip to the next square
            }
            switch (board[i][j].type)
            {
            case PAWN:
                pieceChar = (board[i][j].color == WHITE) ? 'P' : 'p';
                break;
            case KNIGHT:
                pieceChar = (board[i][j].color == WHITE) ? 'N' : 'n';
                break;
            case BISHOP:
                pieceChar = (board[i][j].color == WHITE) ? 'B' : 'b';
                break;
            case ROOK:
                pieceChar = (board[i][j].color == WHITE) ? 'R' : 'r';
                break;
            case QUEEN:
                pieceChar = (board[i][j].color == WHITE) ? 'Q' : 'q';
                break;
            case KING:
                pieceChar = (board[i][j].color == WHITE) ? 'K' : 'k';
                break;
            }
            if (board[i][j].color == BLACK)
            {
                printf("\033[1;31m%c\033[0m ", pieceChar);
            }
            else
            {
                printf("%c ", pieceChar);
            }
        }
        printf("|\n");
    }
    printf(" +-----------------+\n");
}
/*void printBoard(Piece board[8][8])
{
    printf("  a b c d e f g h\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", 8 - i);
        for (int j = 0; j < 8; j++)
        {
            char piece = ' ';
            switch (board[i][j].type)
            {
            case PAWN:
                piece = 'P';
                break;
            case KNIGHT:
                piece = 'N';
                break;
            case BISHOP:
                piece = 'B';
                break;
            case ROOK:
                piece = 'R';
                break;
            case QUEEN:
                piece = 'Q';
                break;
            case KING:
                piece = 'K';
                break;
            }
            if (board[i][j].type != EMPTY)
            {
                if (board[i][j].color == BLACK)
                    printf("\033[1;31m%c\033[0m ", piece); // Red for black pieces
                else
                    printf("%c ", piece); // Normal color for white pieces
            }
            else
            {
                printf(". ");
            }
        }
        printf("%d\n", 8 - i);
    }
    printf("  a b c d e f g h\n");
}*/