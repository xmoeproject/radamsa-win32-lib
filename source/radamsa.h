/* Copyright 2015 Peter Goodman, all rights reserved. */
/* Modified by X'moe */

#ifndef THIRD_PARTY_RADAMSA_RADAMSA_H_
#define THIRD_PARTY_RADAMSA_RADAMSA_H_

#include "base.h"

#include <string>

namespace radamsa {

std::string Mutate(const std::string &input);
std::vector<uint8_t> Mutate(const std::vector<uint8_t> &input);

}  // namespace radamsa

#endif  // THIRD_PARTY_RADAMSA_RADAMSA_H_


