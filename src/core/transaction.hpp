#pragma once

#include <array>
#include <cstdint>
#include <string>
#include <vector>

class Transaction {
    private: 
        std::uint64_t nonce;
        std::array<uint8_t, 20> to;
        std::uint64_t gasLimit;
        std::uint64_t value;
        std::vector<uint8_t> data;
        std:: uint64_t gasPrice;
        
};