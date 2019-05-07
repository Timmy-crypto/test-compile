#pragma once
#include <vector>
#include <string>
#include <array>

#define CONTRACT class [[dipperlib::contract]]
#define AddressLen 22

typedef std::array<char,AddressLen> Address;

namespace dipperlib{
    class contract {
        public:
        
        //构造函数
        contract(Address ownerAddr, Address contractAddr,std::string name,std::vector<char> data):_owner(ownerAddr),_address(contractAddr),_contractName(name),_contractData(data){}
        
        //获取合约地址
        Address getContractAddr(){
            return _address;
        }

        //获取合约owner地址
        Address getContractOwner(){
            return _owner;
        }

        //获取合约名
        std::string getContractName(){
            return _contractName;
        }

        //获取合约数据
        std::vector<char> getContractData(){
            return _contractData;
        }

        protected:
        //合约owner 账户地址
        Address _owner;
        //合约地址
        Address _address;
        //合约名
        std::string _contractName; 
        //合约数据
        std::vector<char> _contractData; 
    };
}