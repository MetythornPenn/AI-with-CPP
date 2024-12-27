from setuptools import setup, Extension
from Cython.Build import cythonize
import numpy as np

ext = Extension(
    name="matrix_cy",
    sources=["matrix_cy.pyx"],
    language="c++",  # <<< Key: Compile as C++
    include_dirs=[np.get_include()]
)

setup(
    ext_modules=cythonize(ext, compiler_directives={'language_level': "3"})
)
