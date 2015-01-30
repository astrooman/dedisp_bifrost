# The definitions in this file should be changed to match your system

# CUDA_PATH ?= /usr/local/cuda
CUDA_PATH ?= /usr/local/cuda-6.5

CUDA_DIR   ?= $(CUDA_PATH)
THRUST_DIR ?= $(CUDA_DIR)/include/thrust

# LIB_ARCH   = lib
LIB_ARCH   = lib64
# GPU_ARCH   = sm_13
#GPU_ARCH   = sm_20
##################
GPU_ARCH   = sm_30
##################
# DON'T TOUCH IT!!!! SM > 3.0 WILL NOT WORK ON K10!!!!

GCC        = gcc
GXX        = g++
AR         = ar
NVCC       = $(CUDA_DIR)/bin/nvcc -Xptxas -abi=no
DOXYGEN    = doxygen
RM         = rm
ECHO       = echo
MKFLAGS    = 

DEDISP_DEBUG = 1

#.SILENT :
