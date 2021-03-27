- [list comprehensions](#orga26a852)
  - [I want n for each n in nums](#orgde8b6be)
    - [comprehension](#org762f8a4)
  - [I want n\*n for each n in nums](#org56f2dd2)
    - [comprehension](#org228b90b)
    - [using a map + lambda](#orgeb564f3)
  - [I want n for each n in nums if n is even](#org70ecff8)
    - [comprehension](#orgaf43e80)
    - [filter+lambda](#orgc877b4e)
  - [I want a (letter, num) pair for each letter in "abcd" and each number in 0123](#orgf9ed9ee)
    - [comprehension](#org8225ce6)
- [dict comprehensions](#org98a4b96)
  - [dict comprehension](#org71cb218)
    - [if name not equal to Peter](#org41a9ba8)
- [set comprehensions](#orgc07f78d)
  - [comprehension](#org8c78de8)
- [Generator Expressions](#org816e79d)
  - [comprehension](#org7f81060)

Python Tutorial: Comprehensions - How they work and why you should be using them]]

Be sure to see the [markdown](https://raw.githubusercontent.com/rileyrg/development-education/main/lessons/python/coreyschafer/20-comprehensions.md) export for the result blocks.


<a id="orga26a852"></a>

# list comprehensions

```python
print("list-comprehensions")
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(nums)
```

    list-comprehensions
    [1, 2, 3, 4, 5, 6, 7, 8, 9]


<a id="orgde8b6be"></a>

## I want n for each n in nums

```python
myl=[]
for n in nums:
    myl.append(n)
print(myl)
```

    [1, 2, 3, 4, 5, 6, 7, 8, 9]


<a id="org762f8a4"></a>

### comprehension

```python
myl = [ n for n in nums ]
print(myl)
```

    [1, 2, 3, 4, 5, 6, 7, 8, 9]


<a id="org56f2dd2"></a>

## I want n\*n for each n in nums

```python
myl=[]
for n in nums:
    myl.append(n*n)
print(myl)
```

    [1, 4, 9, 16, 25, 36, 49, 64, 81]


<a id="org228b90b"></a>

### comprehension

```python
myl = [ n*n for n in nums ]
print(myl)
```

    [1, 4, 9, 16, 25, 36, 49, 64, 81]


<a id="orgeb564f3"></a>

### using a map + lambda

```python
myl=map(lambda n: n*n, nums)
print(list(myl))
```

    [1, 4, 9, 16, 25, 36, 49, 64, 81]


<a id="org70ecff8"></a>

## I want n for each n in nums if n is even

```python
myl=[]
for n in nums:
    if n % 2 == 0:
        myl.append(n)
print(myl)
```

    [2, 4, 6, 8]


<a id="orgaf43e80"></a>

### comprehension

```python
myl = [n for n in nums if n % 2 == 0]
print(myl)
```

    [2, 4, 6, 8]


<a id="orgc877b4e"></a>

### filter+lambda

```python
myl = filter(lambda n:n%2==0,nums)
print(list(myl))
```

    [2, 4, 6, 8]


<a id="orgf9ed9ee"></a>

## I want a (letter, num) pair for each letter in "abcd" and each number in 0123

```python
myl = []
for l in 'abcd':
    for n in range(4):
        myl.append((l, n))
print(myl)
```

    [('a', 0), ('a', 1), ('a', 2), ('a', 3), ('b', 0), ('b', 1), ('b', 2), ('b', 3), ('c', 0), ('c', 1), ('c', 2), ('c', 3), ('d', 0), ('d', 1), ('d', 2), ('d', 3)]


<a id="org8225ce6"></a>

### comprehension

```python
myl = [(l, n) for l in "abcd" for n in range(4)]
print(myl)
```

    [('a', 0), ('a', 1), ('a', 2), ('a', 3), ('b', 0), ('b', 1), ('b', 2), ('b', 3), ('c', 0), ('c', 1), ('c', 2), ('c', 3), ('d', 0), ('d', 1), ('d', 2), ('d', 3)]


<a id="org98a4b96"></a>

# dict comprehensions

```python
names = ["Bruce", "Clark", "Peter"]
heroes = ["Batman", "Superman", "Spiderman"]
print(list(zip(names,heroes)))
```

    [('Bruce', 'Batman'), ('Clark', 'Superman'), ('Peter', 'Spiderman')]

```python
myd={} # = dict()
for n,h in zip(names, heroes):
    myd[n]=h
print(myd)
```

    {'Bruce': 'Batman', 'Clark': 'Superman', 'Peter': 'Spiderman'}


<a id="org71cb218"></a>

## dict comprehension

```python
myd={n:h for n,h in zip(names,heroes)}
print(myd)
```

    {'Bruce': 'Batman', 'Clark': 'Superman', 'Peter': 'Spiderman'}


<a id="org41a9ba8"></a>

### if name not equal to Peter

```python
myd={n:h for n ,h in zip(names,heroes) if n != "Peter"}
print(myd)
```

    {'Bruce': 'Batman', 'Clark': 'Superman'}


<a id="orgc07f78d"></a>

# set comprehensions

```python
nums = [1,1,2,1,3,4,3,4,5,5,6,7,8,7,9,9]
print(nums)
```

    [1, 1, 2, 1, 3, 4, 3, 4, 5, 5, 6, 7, 8, 7, 9, 9]

```python
mys=set()
for n in nums:
    mys.add(n)
print(mys)
```

    {1, 2, 3, 4, 5, 6, 7, 8, 9}


<a id="org8c78de8"></a>

## comprehension

```python
mys={n for n  in nums}
print(mys)
```

    {1, 2, 3, 4, 5, 6, 7, 8, 9}


<a id="org816e79d"></a>

# Generator Expressions

```python
nums = [*range(9)]
print(nums)
```

    [0, 1, 2, 3, 4, 5, 6, 7, 8]

```python
def gen_func(nums):
    for n in nums:
        yield n*n

my_gen = gen_func(nums)

myl= [n for n in my_gen]
print(myl)
```

    [0, 1, 4, 9, 16, 25, 36, 49, 64]


<a id="org7f81060"></a>

## comprehension

Note the use of the parenthesis for the generator constructor.

```python
my_gen = (n*n for n in nums)
print([n for n in my_gen])
```

    [0, 1, 4, 9, 16, 25, 36, 49, 64]
