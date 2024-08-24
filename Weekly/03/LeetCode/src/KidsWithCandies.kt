// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class KidsWithCandies {
    fun kidsWithCandies(
        candies: IntArray,
        extraCandies: Int,
    ): List<Boolean> {
        val maxValue = candies.max()
        return List(candies.size) { i ->
            candies[i] + extraCandies >= maxValue
        }
    }
}
