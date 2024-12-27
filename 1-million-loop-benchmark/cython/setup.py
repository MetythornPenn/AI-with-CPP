from setuptools import setup, Extension
from Cython.Build import cythonize

ext = Extension("benchmark_cython", sources=["benchmark_cython.pyx"])
setup(ext_modules=cythonize(ext))
