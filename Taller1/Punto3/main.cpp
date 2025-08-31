#include "AlgorithmLib/AlgorithmsEnum.hpp"
#include "AlgorithmHandler.hpp"
#include "StockLib/Tool.hpp"
#include "WareLib/ToolsWarehouse.hpp"

int main(){
    ToolsWarehouse tWarehouse("Almacen maestro");
    Tool tool("Herramienta maestra");
    AlgorithmHandler algHandler;

    int algorithm = 0;
    std::cout<<"Elegir algoritmo para almacen\n0. Algoritmo A\n1. Algoritmo C"<<std::endl;   
    std::cin>>algorithm;
    algHandler.execute(tWarehouse, getWfromInt(algorithm));
    std::cout<<"Elegir algoritmo para producto\n0. Algoritmo A\n1. Algoritmo B\n2. Algoritmo C"<<std::endl;   
    std::cin>>algorithm;
    algHandler.execute(tool, getSfromInt(algorithm));


    return 0;
}