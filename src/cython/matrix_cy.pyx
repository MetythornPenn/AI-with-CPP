import numpy as np
cimport numpy as cnp
from libc.stdlib cimport malloc, free

def matrix_multiply_cy(cnp.ndarray[cnp.float64_t, ndim=2] A,
                       cnp.ndarray[cnp.float64_t, ndim=2] B):
    cdef int i, j, k
    cdef int rows_A = A.shape[0]
    cdef int cols_A = A.shape[1]
    cdef int cols_B = B.shape[1]

    cdef cnp.ndarray[cnp.float64_t, ndim=2] result = np.zeros((rows_A, cols_B))
    
    for i in range(rows_A):
        for j in range(cols_B):
            for k in range(cols_A):
                result[i, j] += A[i, k] * B[k, j]
    
    return result
