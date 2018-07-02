//
// Created by unsky on 02/07/18.
//
#include "sita/stuff/graph.h"
namespace sita{

Graph::Graph(std::string name){
    _grap_sym.set_name(name);
}

void Graph::append(std::string op_type, std::string name, std::vector<std::string> inputs, std::vector<std::string> outputs){
    auto op_ptr = _grap_sym.add_op();
    op_ptr->set_name(name);
    op_ptr->set_type(op_type);
    for(int i = 0; i < inputs.size(); i ++){
        op_ptr->add_inputs(inputs[i]);
    }
    for(int i = 0; i < outputs.size(); i ++){
        op_ptr->add_outputs(outputs[i]);
    }
}

void Graph::graph_symbol_show(){
    LOG(INFO) << "#############################";
    LOG(INFO) << "图" << _grap_sym.name() << "结构如下";
    for(int i = 0; i < _grap_sym.op_size(); i ++) {
        LOG(INFO) << "op name: " << _grap_sym.op(i).name();
        LOG(INFO) << "type: " << _grap_sym.op(i).type();
        LOG(INFO) << "inputs:";
        for(int in = 0; in < _grap_sym.op(i).inputs_size(); in++ ) {
            LOG(INFO) << _grap_sym.op(i).inputs(in);
        }
        LOG(INFO) << "outputs:";
        for(int ou = 0; ou < _grap_sym.op(i).outputs_size(); ou++){
            LOG(INFO) << _grap_sym.op(i).outputs(ou) << " ";
        }
        LOG(INFO)<<"-------------------------";
    }
    LOG(INFO) << "#############################";
}


}//namespace

