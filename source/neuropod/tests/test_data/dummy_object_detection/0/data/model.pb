
F
INPUT_API/imagePlaceholder*
dtype0*
shape:?	?
K
OUTPUT_API/boxes/shapeConst*
valueB"      *
dtype0
A
OUTPUT_API/boxes/minConst*
valueB
 *    *
dtype0
A
OUTPUT_API/boxes/maxConst*
valueB
 *  ??*
dtype0
v
OUTPUT_API/boxes/RandomUniformRandomUniformOUTPUT_API/boxes/shape*
T0*
dtype0*
seed2 *

seed 
P
OUTPUT_API/boxes/subSubOUTPUT_API/boxes/maxOUTPUT_API/boxes/min*
T0
Z
OUTPUT_API/boxes/mulMulOUTPUT_API/boxes/RandomUniformOUTPUT_API/boxes/sub*
T0
L
OUTPUT_API/boxesAddOUTPUT_API/boxes/mulOUTPUT_API/boxes/min*
T0
^
)OUTPUT_API/object_class_probability/shapeConst*
valueB"   C   *
dtype0
T
'OUTPUT_API/object_class_probability/minConst*
dtype0*
valueB
 *    
T
'OUTPUT_API/object_class_probability/maxConst*
valueB
 *  ??*
dtype0
?
1OUTPUT_API/object_class_probability/RandomUniformRandomUniform)OUTPUT_API/object_class_probability/shape*
dtype0*
seed2 *

seed *
T0
?
'OUTPUT_API/object_class_probability/subSub'OUTPUT_API/object_class_probability/max'OUTPUT_API/object_class_probability/min*
T0
?
'OUTPUT_API/object_class_probability/mulMul1OUTPUT_API/object_class_probability/RandomUniform'OUTPUT_API/object_class_probability/sub*
T0
?
#OUTPUT_API/object_class_probabilityAdd'OUTPUT_API/object_class_probability/mul'OUTPUT_API/object_class_probability/min*
T0"