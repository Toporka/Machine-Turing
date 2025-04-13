#include <stdio.h>
#include "State.c"

int main()
{
    char str[] = "*11x11=*";
    char symbol = ' ';
    int index_str = 0;
    
    State state = {};
    state.current = list_states[0].next[4];
    
    while (state.current.number != STATE_MAX)
    {
        symbol = str[index_str];
        state.current.symbol = getIndexSymbol(symbol);
        
        state.current = list_states[state.current.number].next[state.current.symbol];
        str[index_str] = getSymbol(state.current.symbol);
        index_str += state.current.transition;

        printf("%s\n", str);
    }
}