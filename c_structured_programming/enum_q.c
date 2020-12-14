#include <stdio.h>

enum fuzzy_logic{false, true, maybe};

enum fuzzy_logic get_fuzzy_logic(enum fuzzy_logic f)
{
    return(f);
}

int main()
{
    
    printf("%u\n", get_fuzzy_logic(true));
    return 0;

}