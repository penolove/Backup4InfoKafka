# NOTE: This makefile is designed to be run from one level up in the directory
# hierarchy compared to where it resides. For instance, if this makefile is
# located at 'output/build/Makefile', then it can be launched as:
# 'make -f build/Makefile' from the 'output' directory.

SHELL=/bin/bash
ifeq ($(CXX),)
  CXX=g++
endif
PKGCONFIG := /home/hduser/InfoSphere_Streams/4.1.0.0/bin/dst-pe-pkg-config.sh
SPL_BUNDLE_BUILDER := /home/hduser/InfoSphere_Streams/4.1.0.0/system/impl/bin/spl-bundle-builder
PE_INCLUDE := $(shell $(PKGCONFIG) --cflags dst-spl-pe-install)
PE_LIB := $(shell $(PKGCONFIG) --libs dst-spl-pe-install)
PE_STAND_LIB := $(shell $(PKGCONFIG) --libs dst-spl-pe-install-standalone)
SPL_CXXFLAGS = -Wall -Wno-unused -Wno-sign-compare
SPL_CXXFLAGS += -D_REENTRANT -fPIC -finline-functions -fmessage-length=0
SPL_CXXFLAGS += $(PE_INCLUDE) -O3 -DNDEBUG  -std=gnu++98 
SPL_LDFLAGS = $(PE_LIB)

SPL_TYPES = build/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.o \
            build/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.o \
            build/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.o \
            build/type/BeJwrMSw2ycnMSwUADOECD1.o \
            build/type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.o \
            build/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.o \
            build/type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.o \
            build/type/BeJwrMcw0TSnNza0EABAkANw.o \
            build/type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.o \
            build/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.o \
            build/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.o \
            build/type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.o 
SPL_FUNCTIONS = build/function/application/regexIsMatchAll.o \
                build/function/application/matchRule.o 
SPL_OPERATORS = build/operator/LabelStream1/KafkaStream.o \
                build/operator/LabelStream1/createmap0.o \
                build/operator/LabelStream1/KafkaSinkOp.o \
                build/operator/LabelStream1/DTree1/rawTree.o \
                build/operator/LabelStream1/DTree1/NodeStream.o \
                build/operator/LabelStream1/DTree1/LatenStream.o \
                build/operator/LabelStream1/DTree1/LoadedSwitch.o 
SPL_PE_OBJS = build/pe/BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.o 
SPL_PE_BINS = bin/submit.Allin-a.dpe 

SPL_ADL_FILE = submit.Allin.adl

SPL_OUTPUT_DIR_ROOT = $(shell printf '%q' '/home/hduser/Downloads/StreamsStudio/workspace/gogo/output/submit.Allin')
SPL_OUTPUT_DIR = $(shell printf '%q' 'Distributed')

.PHONY: distclean clean all types functions operators pes svar bundle toolkits standalone sablink

all: bin types functions operators pes svar standalone bundle sablink

distclean clean:
	@rm -fr bin/* build/type build/function build/operator build/pe build/svar build/bundle build/standalone submit.Allin.sab

bin:
	@mkdir -m 775 bin

types: $(SPL_TYPES)

build/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.o: \
	    src/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h \
	    src/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] enum{WindowMarker,FinalMarker}'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.cpp

build/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.o: \
	    src/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.h \
	    src/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<tuple<rstring srcAddr,uint16 srcPort,rstring dstAdd...lowID,rstring label>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.cpp

build/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.o: \
	    src/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.h \
	    src/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<tuple<rstring srcAddr,uint16 srcPort,rstring dstAdd...g,float64> features>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.cpp

build/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.o: \
	    src/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h \
	    src/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<uint32 nextID,boolean gt,float64 value>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.cpp

build/type/BeJwrMSw2ycnMSwUADOECD1.o: \
	    src/type/BeJwrMSw2ycnMSwUADOECD1.h \
	    src/type/BeJwrMSw2ycnMSwUADOECD1.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring line>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSw2ycnMSwUADOECD1.cpp

build/type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.o: \
	    src/type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.h \
	    src/type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring key,rstring message>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.cpp

build/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.o: \
	    src/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h \
	    src/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring label,list<tuple<uint32 nextID,boolean gt,float64 value>> rules>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.cpp

build/type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.o: \
	    src/type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.h \
	    src/type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<uint32 nodeID,uint32 nextID,boolean gt,float64 value,rstring label>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.cpp

build/type/BeJwrMcw0TSnNza0EABAkANw.o: \
	    src/type/BeJwrMcw0TSnNza0EABAkANw.h \
	    src/type/BeJwrMcw0TSnNza0EABAkANw.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<int32 dummy>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMcw0TSnNza0EABAkANw.cpp

build/type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.o: \
	    src/type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.h \
	    src/type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring topic,rstring message>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.cpp

build/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.o: \
	    src/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h \
	    src/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring srcAddr,uint16 srcPort,rstring dstAddr,uint16 dstPort>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.cpp

build/type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.o: \
	    src/type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.h \
	    src/type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<uint32 nodeID,rstring label>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.cpp

build/type:
	-@mkdir -m 775 build/type

operators: $(SPL_OPERATORS)

-include build/operator/LabelStream1/KafkaStream.d
build/operator/LabelStream1/KafkaStream.o: \
	    src/operator/LabelStream1/KafkaStream.h \
	    src/operator/LabelStream1/KafkaStream.cpp\
	    build/dep/operator/LabelStream1/KafkaStream.dep  \
	    build/cppOptions \
	    | build/operator/LabelStream1
	@echo ' [CXX-operator] LabelStream1.KafkaStream'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/com.ibm.streamsx.messaging/impl/nl/include -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/spl/utility/JavaOp/../../../impl/include -I /usr/java/default/include -I /usr/java/default/include/linux -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/KafkaStream.cpp

-include build/operator/LabelStream1/createmap0.d
build/operator/LabelStream1/createmap0.o: \
	    src/operator/LabelStream1/createmap0.h \
	    src/operator/LabelStream1/createmap0.cpp\
	    build/dep/operator/LabelStream1/createmap0.dep  \
	    build/cppOptions \
	    | build/operator/LabelStream1
	@echo ' [CXX-operator] LabelStream1.createmap0'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/createmap0.cpp

-include build/operator/LabelStream1/KafkaSinkOp.d
build/operator/LabelStream1/KafkaSinkOp.o: \
	    src/operator/LabelStream1/KafkaSinkOp.h \
	    src/operator/LabelStream1/KafkaSinkOp.cpp\
	    build/dep/operator/LabelStream1/KafkaSinkOp.dep  \
	    build/cppOptions \
	    | build/operator/LabelStream1
	@echo ' [CXX-operator] LabelStream1.KafkaSinkOp'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/com.ibm.streamsx.messaging/impl/nl/include -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/spl/utility/JavaOp/../../../impl/include -I /usr/java/default/include -I /usr/java/default/include/linux -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/KafkaSinkOp.cpp

-include build/operator/LabelStream1/DTree1/rawTree.d
build/operator/LabelStream1/DTree1/rawTree.o: \
	    src/operator/LabelStream1/DTree1/rawTree.h \
	    src/operator/LabelStream1/DTree1/rawTree.cpp\
	    build/dep/operator/LabelStream1/DTree1/rawTree.dep  \
	    build/cppOptions \
	    | build/operator/LabelStream1/DTree1
	@echo ' [CXX-operator] LabelStream1.DTree1.rawTree'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/com.ibm.streamsx.hdfs/impl/nl/include -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/spl/utility/JavaOp/../../../impl/include -I /usr/java/default/include -I /usr/java/default/include/linux -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/DTree1/rawTree.cpp

-include build/operator/LabelStream1/DTree1/NodeStream.d
build/operator/LabelStream1/DTree1/NodeStream.o: \
	    src/operator/LabelStream1/DTree1/NodeStream.h \
	    src/operator/LabelStream1/DTree1/NodeStream.cpp\
	    build/dep/operator/LabelStream1/DTree1/NodeStream.dep \
	    src/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h \
	    src/function/application/regexIsMatchAll.h  \
	    build/cppOptions \
	    | build/operator/LabelStream1/DTree1
	@echo ' [CXX-operator] LabelStream1.DTree1.NodeStream'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/DTree1/NodeStream.cpp

-include build/operator/LabelStream1/DTree1/LatenStream.d
build/operator/LabelStream1/DTree1/LatenStream.o: \
	    src/operator/LabelStream1/DTree1/LatenStream.h \
	    src/operator/LabelStream1/DTree1/LatenStream.cpp\
	    build/dep/operator/LabelStream1/DTree1/LatenStream.dep \
	    src/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h \
	    src/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.h \
	    src/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.h \
	    src/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h \
	    src/function/application/matchRule.h  \
	    build/cppOptions \
	    | build/operator/LabelStream1/DTree1
	@echo ' [CXX-operator] LabelStream1.DTree1.LatenStream'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/DTree1/LatenStream.cpp

-include build/operator/LabelStream1/DTree1/LoadedSwitch.d
build/operator/LabelStream1/DTree1/LoadedSwitch.o: \
	    src/operator/LabelStream1/DTree1/LoadedSwitch.h \
	    src/operator/LabelStream1/DTree1/LoadedSwitch.cpp\
	    build/dep/operator/LabelStream1/DTree1/LoadedSwitch.dep  \
	    build/cppOptions \
	    | build/operator/LabelStream1/DTree1
	@echo ' [CXX-operator] LabelStream1.DTree1.LoadedSwitch'
	@$(CXX) -o $@ -MD -I /home/hduser/InfoSphere_Streams/4.1.0.0/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" -c $(SPL_CXXFLAGS) src/operator/LabelStream1/DTree1/LoadedSwitch.cpp

build/operator/LabelStream1/DTree1:
	-@mkdir -m 775 -p build/operator/LabelStream1/DTree1

build/operator/LabelStream1:
	-@mkdir -m 775 -p build/operator/LabelStream1

functions: $(SPL_FUNCTIONS)

-include build/function/application/regexIsMatchAll.d
build/function/application/regexIsMatchAll.o: \
	    src/function/application/regexIsMatchAll.h \
	    src/function/application/regexIsMatchAll.cpp\
	    build/dep/function/application/regexIsMatchAll.dep \
	    build/cppOptions \
	    | build/function/application
	@echo ' [CXX-function] application::regexIsMatchAll'
	@$(CXX) -o $@ -c -MD -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" $(SPL_CXXFLAGS) src/function/application/regexIsMatchAll.cpp

-include build/function/application/matchRule.d
build/function/application/matchRule.o: \
	    src/function/application/matchRule.h \
	    src/function/application/matchRule.cpp\
	    build/dep/function/application/matchRule.dep \
	    src/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.h \
	    src/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.h \
	    build/cppOptions \
	    | build/function/application
	@echo ' [CXX-function] application::matchRule'
	@$(CXX) -o $@ -c -MD -DSPLJAVAFUNCTION_ADL_FILENAME=\"submit.Allin.adl\" $(SPL_CXXFLAGS) src/function/application/matchRule.cpp

build/function/application:
	-@mkdir -m 775 -p build/function/application

pes: $(SPL_PE_BINS)

build/pe/BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.o: \
	    src/pe/BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.h \
	    src/pe/BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.cpp  \
	    build/cppOptions \
	    | build/pe
	@echo ' [CXX-pe] pe submit.Allin-a'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/pe/BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.cpp

PEsubmit.Allin-a = \
	    build/pe/BeJwzNPJJTErNCS4pSk3MNTRzCSlKTTU0NPRJLEnNgwjGG2JVYuSTn5iSmhJcnlmSnIFDjYFffkoqPlPMixLLQQw0WUND78S07MTgzLxs_1wIccthMNTRIBtIlqbmJBQbxAHVKExt.o \
	    build/operator/LabelStream1/KafkaStream.o \
	    build/type/BeJwrMSo2zk6tLDbPTS0uTkxPBQAysQYl.o \
	    build/operator/LabelStream1/createmap0.o \
	    build/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTJbfYzSItNbGktCi1GACRDBZF.o \
	    build/type/BeJwrMSk2Ly5KdkxJKfIGMQLyi0qKzVOKSyAiQAZIBAAT7A5n.o \
	    build/operator/LabelStream1/KafkaSinkOp.o \
	    build/type/BeJwrMSo2LckvyEwuNs9NLS5OTE8FAEDwAb9.o \
	    build/operator/LabelStream1/DTree1/rawTree.o \
	    build/type/BeJwrMSw2ycnMSwUADOECD1.o \
	    build/operator/LabelStream1/DTree1/NodeStream.o \
	    build/function/application/regexIsMatchAll.o \
	    build/type/BeJwrMS01y8tPSfV0AdKpFSWeLklG6SVupmWJOaWpxaY5iUmpOQDwWg0u.o \
	    build/type/BeJyrNIo3NArPzEvJL_1dNLMpOLTI0dMvMS8yBcACkegr2.o \
	    build/type/BeJwrMSo1y8tPSfV0KTbNSUxKzQEANswGAt.o \
	    build/operator/LabelStream1/DTree1/LatenStream.o \
	    build/function/application/matchRule.o \
	    build/type/BeJwrMSo2zUlMSs3JKTEuNctLrSjxdEkySi9xMy1LzClNNS0qzUktBgABDg3A.o \
	    build/type/BeJwrMS41y0utKPF0STJKL3EzLUvMKU0FAFLpAem.o \
	    build/type/BeJwrMcw0TSnNza0EABAkANw.o \
	    build/type/BeJwrMSoxKTYvLkp2TEkp8gYxAvKLSorNU4pLICJABkjELC0nv9zTpdg0JzEpNQcAJh4UAw.o \
	    build/operator/LabelStream1/DTree1/LoadedSwitch.o 

bin/submit.Allin-a.dpe: \
	$(PEsubmit.Allin-a) \
	build/dep/submit.Allin-a.dep \
	build/ldOptions
	@echo ' [LD-pe] pe submit.Allin-a'
	@$(CXX) $(SPL_CXXFLAGS) -o bin/submit.Allin-a.dpe -fPIC -shared $(PEsubmit.Allin-a) -lstreams-stdtk-javaop -L /usr/java/jdk1.8.0_71/jre/lib/amd64/server -Wl,-rpath -Wl,/usr/java/jdk1.8.0_71/jre/lib/amd64/server -lpthread -ldl -lstreams-stdtk-runtime -lstreams-stdtk-javaop -lpthread -ldl -lstreams-stdtk-runtime -lstreams-stdtk-javaop -lpthread -ldl -lstreams-stdtk-runtime $(SPL_LDFLAGS)

build/pe:
	-@mkdir -m 775 build/pe

standalone: 
	@rm -f bin/standalone.exe
	@rm -f bin/submit.Allin
	@rm -f bin/sab
	@rm -f bin/standalone

sablink:

	@rm -f bin/sab

bundle: submit.Allin.sab

-include /home/hduser/Downloads/StreamsStudio/workspace/gogo/output/submit.Allin/Distributed/build/dep/submit.Allin.sab.d
submit.Allin.sab: $(SPL_PE_BINS) $(SPL_ADL_FILE)
	@echo ' [Bundle] submit.Allin.sab'
	@$(SPL_BUNDLE_BUILDER) $(SPL_OUTPUT_DIR_ROOT) $(SPL_OUTPUT_DIR) $(SPL_ADL_FILE) submit.Allin.sab false

