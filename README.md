# "2156"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/2156/blob/main/2156_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

Find the case that you can do when you are infront of grape juice.
1. Drink it
  
    1-1. You can drink previous(i-1) grape juice and add the max value until (i-3) grape juice. This is because you cannot drink 3 grape juice straight.
  
    1-2. You can not drink previous(i-1) grape juice and add the max value until (i-2) grape juice.  

2. not drink it
  
  The max value until previous one will be the answer until now.  

Similar to the problem that I solved. However , there are few mistake...

1. Forgot to add case that not drinking current grape juice.

2. Forgot to add 1 case to third grape juice.

Those 2 cases take me some time, but It was easy to find recurrence relation.

## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

