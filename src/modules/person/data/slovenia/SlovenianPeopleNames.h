#pragma once

#include "../NameFormats.h"
#include "../PeopleNames.h"
#include "SlovenianFirstNames.h"
#include "SlovenianLastNames.h"

namespace faker
{
const NameFormats slovenianPersonNameFormats{{"{firstName} {lastName}", 1}};

const PeopleNames slovenianPeopleNames{{slovenianMalesFirstNames, {}, slovenianLastNames, {}, {}},
                                       {slovenianFemalesFirstNames, {}, slovenianLastNames, {}, {}},
                                       slovenianPersonNameFormats};
}
