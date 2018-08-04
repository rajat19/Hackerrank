f :: [Int] -> [Int]
f lst = [j | (i, j) <- zip [1..] lst, even i]

-- This part deals with the Input and Output and can be used as it is. Do not modify it.
main = do
   inputdata <- getContents
   mapM_ (putStrLn. show). f. map read. lines $ inputdata

