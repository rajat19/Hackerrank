import Data.Functor ((<$>))
import Data.List (foldl')
import Text.Printf (printf)

type Polynomial = [(Int, Int)]
type Bounds = (Int, Int)

main :: IO ()
main = do
    coeffs <- readInts
    powers <- readInts
    [l, r] <- readInts
    let poly = zip coeffs powers
        (area, volume) = areaVolume poly (l, r)
    printf "%.1f\n" area
    printf "%.1f\n" volume

readInts :: IO [Int]
readInts = map read . words <$> getLine

eval :: Polynomial -> Double -> Double
eval ps x = foldl' step 0 ps
  where
    step acc (coeff, power) = acc + coeff' * x ** power'
        where
          coeff' = fromIntegral coeff
          power' = fromIntegral power

areaVolume :: Polynomial -> Bounds -> (Double, Double)
areaVolume p (l, r) = (area, volume)
  where
    delta = 0.001
    ld = fromIntegral l
    rd = fromIntegral r
    evals = map (eval p) [ld, ld + 0.001 .. rd]
    area = delta * sum evals
    volume = pi * delta * sum (map (^ 2) evals)