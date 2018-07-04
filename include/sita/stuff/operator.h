//
// Created by unsky on 03/07/18.
//

#ifndef SITA_STUFF_OPERATORS_H
#define SITA_STUFF_OPERATORS_H
#include <vector>
#include <string>
#include "macros.h"
#include "workspace.h"
namespace sita{

template <typename Dtype>
class Operator{
public:
    Operator(const OperatorDef&, GlobalWorkSpace<Dtype> *gws):_op_type(op_type),_gws(gws){}
    ~Operator(){}
    init(){};
    forward(){};
    backward(){};
protected:
    std::string _op_type;
    GlobalWorkSpace<Dtype> *_gws;
};

}//namespace


#endif //SITA_STUFF_OPERATORS_H
