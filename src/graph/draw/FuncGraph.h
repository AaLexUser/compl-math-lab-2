//
// Created by Alexey Lapin on 3/16/23.
//

#ifndef COMPLMATH2_FUNCGRAPH_H
#define COMPLMATH2_FUNCGRAPH_H

#include "IShape.h"
class FuncGraph : public IShape{
    public:
        FuncGraph(double (*)(double x), double);
        void draw(MainWindow & mainWindow) override;
    private:
        double (*f_)(double x);
        double pointsPerSegment_;
        double left_;
        double right_;
};


#endif //COMPLMATH2_FUNCGRAPH_H
