#include <stdio.h>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7

#define ON 1
#define OFF 0

int main()
{
    enum Week
    {
        sun = 1,
        mon,
        tue,
        wed,
        thu,
        fri,
        sat
    };

    enum State
    {
        off,
        on
    };

    enum Week w;

    w = fri;
    printf("Enum Friday Value : %d\n", w);
    printf("Friday value : %d\n", FRI);
}