- [list basics](#org2c6ba79)
  - [index 0](#org022b775)
  - [subsection of list](#orgcff8048)
  - [negative indices](#org6b37ea3)
    - [negative start positive end](#orgb78dada)
    - [negative start negative end](#org07badbd)
    - [postive start negative end with a positive step](#org65de17a)
    - [postive start negative end with a negaive step](#org952bb0e)
    - [negative start negative end with a negative step](#org6c5e1a0)
    - [negative start positive end with a negative step](#orge5010d5)
    - [reverse list wit negative step](#orgd652777)
    - [continue from 7:36](#orge0bcfe6)

[Python Tutorial: Slicing Lists And Strings](https://www.youtube.com/watch?v=ajrtAuDg3yw&list=PL-osiE80TeTt2d9bfVyTiXJA-UTHn6WwU&index=19)

Be sure to see the [markdown](https://raw.githubusercontent.com/rileyrg/development-education/main/lessons/python/coreyschafer/19-slicing.md) export for the result blocks.


<a id="org2c6ba79"></a>

# list basics

```python
myl=[0,1,2,3,4,5,6,7,8,9]
print(myl)
```

    [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]


<a id="org022b775"></a>

## index 0

```python
print(myl[0])
```

    0


<a id="orgcff8048"></a>

## subsection of list

```python
print (myl[1:2]) #non inclusive
print (myl[1:3]) #non inclusive
```

    [1]
    [1, 2]


<a id="org6b37ea3"></a>

## negative indices


<a id="orgb78dada"></a>

### negative start positive end

```python
print(myl[-10:3])
```

    [0, 1, 2]


<a id="org07badbd"></a>

### negative start negative end

```python
print(myl[-10:-1])
```

    [0, 1, 2, 3, 4, 5, 6, 7, 8]


<a id="org65de17a"></a>

### postive start negative end with a positive step

```python
print(myl[0:-1:2])
```

    [0, 2, 4, 6, 8]


<a id="org952bb0e"></a>

### postive start negative end with a negaive step

```python
print(myl[0:-1:-1])
```

    []


<a id="org6c5e1a0"></a>

### negative start negative end with a negative step

```python
print(myl[-1:-10:-1])
```

    [9, 8, 7, 6, 5, 4, 3, 2, 1]


<a id="orge5010d5"></a>

### negative start positive end with a negative step

```python
print(myl[-1:3:-1])
```

    [9, 8, 7, 6, 5, 4]


<a id="orgd652777"></a>

### reverse list wit negative step

```python
print(myl[::-1])
```

    [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]


<a id="orge0bcfe6"></a>

### continue from 7:36
