# BeerBottleDisplay
this is the **Drill Press Cafe** beer bottle display code

***UPDATED Matrix***
- Old 16x5 matrix updated to 16x7 matrix on 23 Jul 2022.
- The matrix can now run scrolling text using a 7x5 font.
- Uses code from the /DrillPressCafeScroll folder
- Hareware is an Arduino Nano with "old bootloader"
- Data Pin for Pixels is D6
- +5V power is derived from a 5V/50W SMPS
- LED's are arranged in horizontal rows, zig-zag fashion, with first LED at top_left of matrix

***Old Version***
- Initial code was for a scrolling display with a 16 pixel Wide x 7 pixel Tall matrix (16x7).
- Existing matrix is 16x6 so the scrolling matrix code no longer works.
- Use the "Matrix_Designer" Spreadsheet to design your characters - RED cells are the LEDs which will be turned on.
- The Matrix is zig-zag, start point is top right corner, so LEDs are numbered accordingly.
- Create an "array" consisting of the LEDs that need to light up.
- Also, count the "number of LED's" that need to light up for each word - this is required to be added in the code manually.


![Beer_Bottle_Display](/images/IMG_20220723_115933.jpg)
![Beer_Bottle_Display](/images/VID_20220723_120007_01.mp4)
