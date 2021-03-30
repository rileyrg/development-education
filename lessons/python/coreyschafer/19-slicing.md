- [list basics](#org51063d9)
  - [index 0](#org6c06cf8)
  - [subsection of list](#orgda8871d)
  - [negative indices](#orgc245aca)
    - [negative start positive end](#org71b5d2e)
    - [negative start negative end](#org24d90ff)
    - [postive start negative end with a positive step](#org8189916)
    - [postive start negative end with a negaive step](#orged3e257)
    - [negative start negative end with a negative step](#orgcf3f990)
    - [negative start positive end with a negative step](#orgf2ded56)
    - [reverse list wit negative step](#orgf693e14)
    - [sample url](#org9ca9f99)

[Python Tutorial: Slicing Lists And Strings](https://www.youtube.com/watch?v=ajrtAuDg3yw&list=PL-osiE80TeTt2d9bfVyTiXJA-UTHn6WwU&index=19)

Be sure to see the [markdown](https://raw.githubusercontent.com/rileyrg/development-education/main/lessons/python/coreyschafer/19-slicing.md) export for the result blocks.


<a id="org51063d9"></a>

# list basics

```python
myl=[0,1,2,3,4,5,6,7,8,9]
print(myl)
```

    [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]


<a id="org6c06cf8"></a>

## index 0

```python
print(myl[0])
```

    0


<a id="orgda8871d"></a>

## subsection of list

```python
print (myl[1:2]) #non inclusive
print (myl[1:3]) #non inclusive
```

    [1]
    [1, 2]


<a id="orgc245aca"></a>

## negative indices


<a id="org71b5d2e"></a>

### negative start positive end

```python
print(myl[-10:3])
```

    [0, 1, 2]


<a id="org24d90ff"></a>

### negative start negative end

```python
print(myl[-10:-1])
```

    [0, 1, 2, 3, 4, 5, 6, 7, 8]


<a id="org8189916"></a>

### postive start negative end with a positive step

```python
print(myl[0:-1:2])
```

    [0, 2, 4, 6, 8]


<a id="orged3e257"></a>

### postive start negative end with a negaive step

```python
print(myl[0:-1:-1])
```

    []


<a id="orgcf3f990"></a>

### negative start negative end with a negative step

```python
print(myl[-1:-10:-1])
```

    [9, 8, 7, 6, 5, 4, 3, 2, 1]


<a id="orgf2ded56"></a>

### negative start positive end with a negative step

```python
print(myl[-1:3:-1])
```

    [9, 8, 7, 6, 5, 4]


<a id="orgf693e14"></a>

### reverse list wit negative step

```python
print(myl[::-1])
```

    [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]


<a id="org9ca9f99"></a>

### sample url

```python
sample_url= 'http://coreyms.com'
print (sample_url)
# reverse
print(sample_url[::-1])
#top level domain
print(sample_url[-4::])
# url without Protocol
print(sample_url[7::])
# now without top level
print(sample_url[7:-4:])
```

    http://coreyms.com
    moc.smyeroc//:ptth
    .com
    coreyms.com
    coreyms
