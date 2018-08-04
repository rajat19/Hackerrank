solve :: Double -> Double
factorial n = product [1..n]
expt x = [(x ** e) / (factorial e) | e <- [0..9]]
solve x = sum (expt x)

main :: IO ()
main = getContents >>= mapM_ print. map solve. map (read::String->Double). tail. words

