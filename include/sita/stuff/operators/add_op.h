//---------------------------------
//write by unsky
//---------------------------------
#ifndef SITA_STUFF_OPERATORS_ADD_OP_H
#define SITA_STUFF_OPERATORS_ADD_OP_H
#include <string>
#include <vector>
#include "sita/stuff/operator.h"
#include "sita/stuff/registry.h"
namespace sita{

template<typename Dtype>
class AddOp: public Operator<Dtype>{
public:
    AddOp(const OperatorDef& opdef, GlobalWorkSpace<Dtype> *gws):Operator<Dtype>(opdef,gws){}
    ~AddOp(){};
    void init();
    void forward();
    void backward();

protected:
    std::vector<std::string> _inputs;
    std::vector<std::string> _outputs;

};
}//namespace
#endif //SITA_STUFF_OPERATORS_ADD_OP_H
