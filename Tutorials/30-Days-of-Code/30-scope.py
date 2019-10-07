

    def computeDifference(self):
        n = len(self.__elements)
        mad = 0
        a = self.__elements
        for x in range(0, n-1):
            for y in range(x+1, n):
                d = abs(a[x]-a[y])
                # print(x, y, d)
                if d > mad:
                    mad = d
        self.maximumDifference = mad
