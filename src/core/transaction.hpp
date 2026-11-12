#pragma once

#include <array>
#include <cstdint>
#include <string>
#include <vector>

class Signature {
    std::uint8_t v = 0;
    std::array<uint8_t, 32> r{};
    std::array<uint8_t, 32> s{};
};

class Transaction {
    private: 
        std::uint64_t nonce;
        std::array<uint8_t, 20> to;
        std::uint64_t gasLimit;
        std::uint64_t value;
        std::vector<uint8_t> data;
        std:: uint64_t gasPrice;
        Signature signature;
    
    public:
        Transaction() = default;
        bool isValidSyntax() const;

        std::vector<uint8_t> serialize() const;
        
};