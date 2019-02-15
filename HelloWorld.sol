pragma solidity 0.4.25;

contract HelloWorld {
    address owner;
    
    constructor () {
        owner = msg.sender;
    }
    
    function sayHelloWorld() public view returns (string) {
        return "Hello World";
    }
}
