#include <stdio.h>
#include <string.h>
main()
{
    int bjp = 0, trinomul = 0, cpim = 0;
    int p;
    printf("Enter total publicity in the area:   ");
    scanf("%d", &p);
    char ch;
    printf("Press b for BJP, t for TRINOMUL, c for CPIM\n");
    for (int i = 1; i <= 2 * p; i++)
    {
        scanf("%c", &ch);
        if (ch == 'b')
            bjp++;
        else if (ch == 't')
            trinomul++;
        else if (ch == 'c')
            cpim++;
    }
    if (bjp > trinomul && bjp > cpim)
    {
        printf("BJP won by %d votes\n", bjp);
    }
    else if (trinomul > bjp && trinomul > cpim)
    {
        printf("TrinomuL won by %d votes\n", trinomul);
    }
    else
        printf("CPIM won by %d votes\n", cpim);
}