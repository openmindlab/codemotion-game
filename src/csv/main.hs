{-# LANGUAGE TemplateHaskell #-}

import Data.Aeson
import Data.Aeson.TH
import Data.List.Split (splitOn)
import Text.Regex (splitRegex, mkRegex)

data Question = Question
  {
    question   :: String
  , answers    :: [String]
  , difficulty :: Int
  , correct    :: Int
  } deriving (Show)

deriveJSON defaultOptions ''Question

{- split on comma not between quotes -}

splitOnComma :: String -> [String]
splitOnComma = splitRegex $ mkRegex "[^,\"]+|,[^,\"]++\"(?:[^\"]*)\","

{- gets lines from CSV and deletes its header -}

getLines :: String -> [String]
getLines = tail . lines

{- main function -}

main :: IO()
main = do
  csv <- readFile "./questions.csv"
  print $ getLines csv