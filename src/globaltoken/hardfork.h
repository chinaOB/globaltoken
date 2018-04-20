// Copyright (c) 2018 The Globaltoken Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GLOBALTOKEN_HARDFORK_PARAMS_H
#define GLOBALTOKEN_HARDFORK_PARAMS_H

#include <arith_uint256.h>

namespace Consensus {
    struct Params;
};

arith_uint256 GetAlgoPowLimit(uint8_t algo, const Consensus::Params& consensusParams);
arith_uint256 GetAlgoPowLimit(uint8_t algo);
bool IsHardForkActivated(uint32_t blocktime, const Consensus::Params& consensusParams);
bool IsHardForkActivated(uint32_t blocktime);
int64_t GetPoWTargetTimeSpan(uint32_t blocktime, const Consensus::Params& consensusParams);
int64_t GetPoWTargetTimeSpan(uint32_t blocktime);
int64_t GetPoWTargetSpacing(uint32_t blocktime, const Consensus::Params& consensusParams);
int64_t GetPoWTargetSpacing(uint32_t blocktime);

#endif // GLOBALTOKEN_HARDFORK_PARAMS_H
