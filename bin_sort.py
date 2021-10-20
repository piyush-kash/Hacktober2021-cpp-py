# This is bin sor algorithm

MIN_BUCKET = 0
MAX_BUCKET = 15


def bucket_sort(aList):
    buckets = list()
    for i in range(MIN_BUCKET, MAX_BUCKET + 1):
        buckets.append(None)

    for i in aList:
        buckets[aList[i]] = aList[i]

    x = 0
    for i in range(MIN_BUCKET, MAX_BUCKET + 1):
        if buckets[i] is not None:
            aList[x] = buckets[i]
            x += 1

    return aList


if __name__ == '__main__':
    from random import shuffle
    l = range(15)
    lcopy = l[:]
    shuffle(l)
    print('Unsorted')
    print l
    assert l != lcopy
    print('Sorted')
    l = bucket_sort(l)
    print l
    assert l == lcopy
