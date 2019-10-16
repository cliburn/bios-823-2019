<%
cfg['compiler_args'] = ['-std=c++11']
cfg['include_dirs'] = ['/usr/include/eigen3']
setup_pybind11(cfg)
%>

#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <cmath>
#include <Eigen/LU>

namespace py = pybind11;

using Eigen::MatrixXd;

MatrixXd cdist(MatrixXd xs, MatrixXd ys) {
    int m = xs.rows();
    int n = ys.rows();
    int p = ys.cols();
    
    MatrixXd res(m, n);
    
    double s;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            s = 0;
            for (int k=0; k<p; k++) {
                s += pow(ys(j,k) - xs(i,k), 2);
            }
            res(i,j) = sqrt(s);
        }
    }
    
    return res;
}

PYBIND11_MODULE(funcs, m) {
    m.doc() = "auto-compiled c++ extension";
    m.def("cdist", &cdist);
}
