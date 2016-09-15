#include "transport.h"

bool Transport::onDay(int which) { return (daysOperate[which-1] == 1); }
