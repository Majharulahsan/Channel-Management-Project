#include <stdio.h>
#include <stdlib.h>
struct channel{
    char channel[20];
    struct channel* next;
};
struct remote{
    channel *channel;
    channel* currentchannel;

};
int main()
{

    return 0;
}
