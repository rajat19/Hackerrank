class Calculator:
    def power(self, n: int, p: int) -> int:
        if n < 0 or p < 0:
            raise Exception('n and p should be non-negative')
        return pow(n,p)


