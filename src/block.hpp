#pragma once
#include <string>
#include <vector>

class Block {
    private:
        std::string nonce;
        std::string hash;
        std::string timeStamp;
        std::string prevHash;
        std::vector<std::string> txData;


    public:
        Block(const std::string& nonce, const std::string& hash, const std::string& prevHash, const std::string& timeStamp, const std::vector<std::string>& txData);

};