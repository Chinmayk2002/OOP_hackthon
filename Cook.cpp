#include <bits/stdc++.h>
using namespace std;

class Cookbook
{
public:
    int i = 0;
    map<int, string> rec = {

        {1, "Chicken soup\n\n Ingredients:-\n1.1 roast chicken carcass with meat left on \n2.225g/8oz chicken wings \n3.1 onion, diced\n4.1 leek, diced \n5.1 parsnip, diced \n6.6 whole black peppercorns\nProcedure\nPreheat the oven to 150°C/300°F/ Gas mark 2. Put in a large heavy saucepan with the chicken wings.\nAdd the onion, leek and parsnip, and bring to the boil. While the water is heating, add the whole peppercorns. \nOnce the stock has boiled, transfer to an ovenproof dish and cook in the oven for 2 hours. Skim off any scum from the surface using a slotted spoon, and strain the stock you have created. Discard everything except for the chicken \nWhen cool enough to handle, take out the carcass and shred the chicken before returning it to the stock.Serve hot\nCalories \nFor 100gm - 36 calories"},
        {10, "Greatest Lasagna\n\n Ingredient:-\n1.1 pound sweet Italian sausage\n2.3/4 pound lean ground beef\n3.Half cup minced onion\n4.2 cloves garlic, crushed\n5.1 (28 ounce) can crushed tomatoes\n6.2 (6 ounce) cans tomato paste\n7.2 (6.5 ounce) cans canned tomato sauce\n8.Half cup water\n9.2 tablespoons white sugar\n10.1 and half teaspoons dried basil leaves\n11.Half teaspoon fennel seeds\n12.1 teaspoon Italian seasoning\n13.1 and Half teaspoons salt, divided, or taste\n14.1/4 teaspoon ground black pepper\n15.4 tablespoons chopped fresh parsley\n16.12 lasagna noodles\n17.16 ounces ricotta cheese\n18.1 egg\n19.3/4 pound mozzarella cheese, sliced\n20.3/4 cup grated Parmesan cheese\n\nDirections\nInstructions Checklist\nStep 1:\nIn a Dutch oven, cook sausage, ground beef, onion, and garlic over medium heat until well browned\nStir in crushed tomatoes, tomato paste, tomato sauce, and water. Season with sugar, basil, fennel seeds, Italian seasoning, 1 teaspoon salt, pepper, and 2 tablespoons parsley. Simmer, covered, for about 1 Half hours, stirring occasionally.\nStep 2:\nBring a large pot of lightly salted water to a boil. Cook lasagna noodles in boiling water for 8 to 10 minutes\nDrain noodles, and rinse with cold water. In a mixing bowl, combine ricotta cheese with egg, remaining parsley, and Half teaspoon salt.\nstep 3:\nPreheat oven to 375 degrees F (190 degrees C).\nStep 4:\nTo assemble, spread 1 Half cups of meat sauce in the bottom of a 9x13-inch baking dish. Arrange 6 noodles lengthwise over meat sauce. Spread with one half of the ricotta cheese mixture.\nTop with a third of mozzarella cheese slices. Spoon 1 Half cups meat sauce over mozzarella, and sprinkle with 1/4 cup Parmesan cheese\nRepeat layers, and top with remaining mozzarella and Parmesan cheese. Cover with foil to prevent sticking, either spray foil with cooking spray, or make sure the foil does not touch the cheese.\nStep 5:\nBake in preheated oven for 25 minutes. Remove foil, and bake an additional 25 minutes. Cool for 15 minutes before serving.\n\n Nutrition Facts\n Per Serving: 448 calories; protein 29.7g; carbohydrates 36.5g; fat 21.3g; cholesterol 81.8mg; sodium 1400.4mg.\n\n"},
        {2, "Mushroom soup\n\nIngredients:-\n1.350g/12oz mushrooms, finely chopped\n2.50g/2oz butter\n3.3 tablespoons chopped fresh flat-leaf parsley\n4.2 tablespoons fresh breadcrumbs (without any crust)\n5.1 ⁄2 garlic clove\n6.900ml /11 ⁄2 pt chicken stock pinch of freshly grated nutmeg\n7.2 tablespoons double cream\n8.ground black pepper\nProcedure\n•Sauté the mushroom with the butter in a heavy saucepan for a few minutes. Add the parsley and cook, stirring, until soft.\nAdd the breadcrumbs and garlic, stir and pour in the chicken stock with a pinch of nutmeg. Season with salt and pepper. Bring to the boil and simmer for 15 minutes.\nPurée the soup in a food processor or blender until smooth. Return to a clean pan, stir in the cream and reheat gently. Serve hot.\nCalories \nFor 100gm - 39 calories"},
        {4, "Salad Caprese(veg)\n\nIngredients\n1.Sliced mozzarella\n2.Sliced tomatoes \n3.Sweet basil. \n4.Olive oil.\n5.Salt\nProcedure\nLayer alternating slices of tomatoes and mozzarella, adding a basil leaf between each, on a large, shallow platter. Drizzle the salad with extra-virgin olive oil and season with salt and pepper, to taste.\nCalories\n For 160gm - 220 calories"},
        {5, "Cobb Salad(non-veg)\n\nIngredients\n1.hopped salad greens\n2.Tomato\n3.grilled or roasted chicken breast\n4.hard-boiled eggs\n5.avocad\n6.chives\n7.Roquefort cheese\n8.red wine vinaigrette\n9.crispy bacon\nProcedure\nIn a jar, shake together vinegar, mustard, and oil and season with salt and pepper\nOn a large platter, spread out lettuce, then add rows of hard-boiled egg, chicken, bacon, avocado, blue cheese, and cherry tomatoes\nSeason with salt and pepper, drizzle with dressing, and garnish with chives.\nCalories\nFor 206gm - 290 calories"},
        {9, "Jeera Rice\n\nIngredients:-\n1.2 tablespoons vegetable oil\n2.Half teaspoon cumin seeds\n3.1 cup dry jasmine rice\n4.1 3/4 cups water\n5.salt to taste\n•Heat the oil in a medium size saucepan over a medium-high heat.Drop in the cumin seeds, and cook until they splutter.Do not allow the cumin seeds to burn or become really dark brown in color.Add the rice and fry it in the oil for about 1 minute.\n•Add the water and salt and bring to a boil.Once the water is boiling, reduce the heat to low and cover the saucepan.Cook the rice for approximately 15 minutes. If you feel the rice is getting burnt near the base of the pan as it cooks, one trick is to place the saucepan on another flat pan or griddle which is directly on the flame. Toss with a fork.Serve hot\n Calories \nFor 1 Bowl - 130 calories"},
        {11, "The Greatest Arancini\n\n An Italian rice ball made with white wine risotto, and a gooey mozzarella center. Fantastic for lunch or dinner - can be frozen.\n\nIngredient Checklist:-\n 1 tablespoon olive oil \n 1 small onion, finely chopped\n 1 clove garlic, crushed \n 1 cup uncooked Arborio rice \n Half cup dry white wine\n 2 Half cups boiling chicken stock\n Half cup frozen green peas \n 2 ounces finely chopped ham \nsalt and pepper to taste \n Half cup finely grated Parmesan cheese \n  1 egg, beaten \n 1 egg\n 1 tablespoon milk\n 4 ounces mozzarella cheese, cut into 3/4 inch cubes \n Half cup all-purpose flour \n 1 cup vegetable oil for deep frying \n \n Direction -->  \n Instructions Checklist \n Step 1 \n Heat the olive oil in a large saucepan over medium heat. Add onion and garlic, and cook, stirring until onion is soft but not browned \n Pour in the rice, and cook stirring for 2 minutes, then stir in the wine, and continue cooking and stirring until the liquid has evaporated.\nAdd hot chicken stock to the rice 1/3 cup at a time, stirring and cooking until the liquid has  \n Step 2 \n When the chicken stock has all been added, and the liquid has evaporated, stir in the peas and ham. Season with salt and pepper. Remove from the heat, and stir in the Parmesan cheese. Transfer the risotto to a bowl, and allow to cool slightly \n Stir the beaten egg into the risotto. In a small bowl, whisk together the remaining egg and milk with a fork. \n For each ball, roll 2 tablespoons of the risotto into a ball. Press a piece of the mozzarella cheese into the center, and roll to enclose. \n Coat lightly with flour, dip into the milk mixture, then roll in bread crumbs to coat \n Step 4\nHeat oil for frying in a deep-fryer or large deep saucepan to 350 degrees F (175 degrees C). Fry the balls in small batches until evenly golden, turning as needed \n Drain on paper towels. Keep warm in a low oven while the rest are frying\n \n \n Nutrition Facts --> Per Serving: 252 calories; protein 6.3g; carbohydrates 18.8g; fat 16.4g; cholesterol 29.1mg; sodium 274mg.\n\n  "},
        {7, "Pizza\n\nIngredients:-\n2 cup all purpose flour\n100 ml tomato ketchup\n1 tomato\n2 onion\n1 teaspoon chilli flakes\n1 teaspoon baking powder\n1 teaspoon sugar\n100 gm processed cheese\n4 mushroom\nHalf capsicum (green pepper)\n1 teaspoon oregano\nHalf cup mozzarella\n1 tablespoon dry yeast\nwater as required\nProcedure\nPreheat oven to 450 degrees F (230 degrees C). In a medium bowl, dissolve yeast and sugar in warm water. Let stand until creamy, about 10 minutes.\nStir in flour, salt and oil. Beat until smooth. Let rest for 5 minutes\nTurn dough out onto a lightly floured surface and pat or roll into a round. Transfer crust to a lightly greased pizza pan or baker's peel dusted with cornmeal. Spread with desired toppings and bake in preheated oven for 15 to 20 minutes, or until golden brown. Let baked pizza cool for 5 minutes before serving\ncalories\nIn each pizza = 170 calories"},
        {8, "Vegetable Stuffed pizaa\n\nIngredients:-\n2 (8 ounce) packages refrigerated crescent rolls \n  2 (8 ounce) packages cream cheese, softened \n ⅓ cup mayonnaise \n 1 (1.4 ounce) package dry vegetable soup mix (such as Knorr®) \n 1 cup radishes, sliced  ⅓ cup chopped green bell pepper \n ⅓ cup chopped red bell pepper \n 1 cup broccoli florets \n 1 cup cauliflower florets \n Half cup chopped carrot \n Half cup chopped celery \n\n Direction \n Step 1 \n Preheat oven to 375 degrees F (190 degrees C). \n Step 2 \n Spread crescent roll dough out into an 11x14-inch jelly roll pan; pinch perforationsand seams together to make a crust.  \n Step 3 \n Bake in the preheated oven until crust is lightly golden brown, about 10 minutes. Let cool completely. \n Step 4 \n Mix cream cheese, mayonnaise, and vegetable soup mix together in a bowl. Spread cream cheese mixture over the crust. \n Sprinkle pizza with radishes, green, red, and yellow bell pepper, broccoli, cauliflower, carrot, and celery, pressing vegetables into the cream cheese mixture.\n Step 5\n Cut pizza into squares, cover with plastic wrap, and refrigerate overnight to blend flavors. \n Nutrition Facts \n \n Per Serving: 138 calories; protein 2.6g; carbohydrates 8.2g; fat 10.5g; cholesterol 18.2mg; sodium 233.1mg.  "},
        {12, "Paneer Tikka Masala\n\nIngredients:-\n1.1/4 cup butter 1 pound paneer\n2.cut into Half-inch cubes 2 onions\n3.finely chopped 1 green bell pepper\n4.chopped 2 jalapeno peppers\n5.chopped 1 tablespoon ground cashews\n6.1 teaspoon garlic paste\n7.1 teaspoon ginger paste\n8.1 teaspoon cayenne pepper\n9.1 teaspoon ground cumin\n10.1 teaspoon ground coriander\n11.1 teaspoon garam masala(16 ounce) and tomato sauce\n12.1 pint half-and-half 1 teaspoon salt to taste.\n•Melt butter in a skillet over medium heat; cook and stir paneer until golden, about 5 minutes.Add onions, green bell pepper, jalapeno peppers, cashews, garlic paste, ginger paste,cayenne pepper, cumin, coriander, and garam masala to paneer;cook and stir until fragrant and evenly coated, about 1 minute.\n•Mix tomato sauce, half-and-half, and salt into paneer mixture; simmer until thickened, about 30 minutes.\nCalories\nFor 100g - 122 calories"},
        {13, "Palak Paneer\n\nIngredients:-\n1.8.0 Cube(32.0 gm) Paneer\n2.1Tbsp(14.0 gm) Cream\n3.1Chopped Cup(54.0 gm) Palak\n4.1Chopped Tbsp(8.0 gm) Onion\n5.Half Tsp(3.0 gm)\n6.Ginger Garlic Paste1/4 Tsp(0.59 gm) Jeera\n7. 1/4 Tsp(0.37 gm) Garam Masal\n8.1/4 Powder Tsp(0.54 gm) Red Chill\n9.•	1/4 Tsp(1.0 gm) Salt\n10.Half Tsp(2.0 ml) Oil\n11. 120 Ml(120.0 ml) Water\nProcedure\n•	In a pan heat 1 tsp oil.\nAdd Half tsp jeera, 1 tsp ginger garlic paste, 2 tbsp chopped onions, Half tsp salt, Half tsp red chilly powder, Half tsp garam masala and saute.\nNow add 8 cubes of paneer, 3/4 cup palak puree and 1 tbsp cream.\nMix well, cover and cook well.\nServe hot palak paneer with rotis or rice."},
        {3, "Venison Italian Soup\n\n This is a hearty all-in-one-meal soup which contains vegetables, meat, and pasta. Served with mozzarella-garlic bread, makes a great meal on a cold winter day \n This is a variation of a soup made with beef. I like venison because it is non-fat. Garnish with your favorite cheese. \n Ingredients \n 1 pound ground venison \n 1 onion, chopped \n 1 (14.5 ounce) can stewed tomatoes \n 2 (8 ounce) cans tomato sauce \n 3 cups water \n 1 tablespoon minced garlic \n 2 teaspoons dried basil \n 2 teaspoons dried oregano \n 1 teaspoon salt Half teaspoon ground black pepper \n 1 (15 ounce) can pinto beans \n 1 (15 ounce) can green beans \n 1 carrot, chopped \n 1 zucchini, chopped \n Half (16 ounce) package fusilli (spiral) pasta \n \n Direction \n \n Step 1\n Brown venison, onion, and garlic over medium heat until meat is no longer pink \n Add tomatoes, tomato sauce, water, and spices. Bring to a boil, and then simmer for about 30 minutes. \n Step 2 \n  Stir in beans, carrots, and zucchini. Simmer soup for 90 minutes \n Step 3 \n Add pasta, and cook until tender. Top individual servings with grated cheese, and serve. \n Nutrition Facts \n Per Serving: 253 calories; protein 20.9g; carbohydrates 37.8g; fat 2.7g; cholesterol 48.2mg; sodium 994.5mg. \n  "},
        {14, "Butter Chicken\n\nIngredients:-\n1. 1 pound boneless, skinless chicken thighs, cut into roughly 1-inch cubes\n2.1/4 cup full-fat plain yogurt\n3.1 tablespoon olive oil\n4. 1 tablespoon ginger garlic paste\n5. 1 teaspoon dried coriander\n6.1 teaspoon Kashmiri Lal Mirch\n7.1 teaspoon cumin\n8.Salt to taste\nProcedure\nBring the chicken and the rest of the marinade ingredients together in a large bowl. Using your hands, massage the marinade into the chicken.Cover with plastic wrap and refrigerate for at least 1 hour, or up to overnight.\nSoak cashews and almonds in water for at least an hour to (or up to overnight) before preparing the rest of the recipe\nHeat a skillet or grill pan over medium-high heat. Drizzle a teaspoon of oil to the pan.Working in batches, remove chicken from the marinade and grill them on the pan for 3 to 5 minutes on each side, until the chicken is cooked through (clear juice runs out of it when you cut into it). Do not crowd the pan.Once cooked, transfer the chicken into a separate dish. Cover and set aside for later\nMelt 1 Half tablespoons of the butter in a medium sized Dutch oven or a skillet on medium low heat. As soon as the butter melts, add the ginger garlic paste followed by sugar. Sauté for 1 to 2 minutes.Stir in the tomato and cook for 8 to 10 minutes on medium high heat, until all the extra liquid is cooked off. The sauce should be a loose, paste-like consistency.Add coriander, garam masala, Kashmiri Lal Mirch, and salt. Stir and cook on medium heat for 2 to 3 minutes. Turn off the heat.\nTransfer the paste to a blender or the bowl of a food processor. Add the soaked cashews and almonds. Blend into a smooth paste.\nReturn the paste to the cooking pan over medium heat. Add the water to the paste and stir to make a smooth sauce.As the sauce begins to boil, add the grilled chicken and heavy cream. Stir well. Cover the pan and simmer for 5 minutes.\nTurn off the heat and uncover the pan. Stir in the remaining Half tablespoon butter and the kasuri methi. Cover again, and let the dish rest for 8 to 10 minutes so the flavor of kasuri methi can marry into the butter chicken.\nCalories\nFor 100gm = 160 calories"},
        {19, "Cold Coffee\n\nIngredients:-\n1.1 Half quarts brewed coffee\n2.room temperature 1 cup milk\n3.1 cup half-and-half cream\n4.⅓ cup white sugar\n5.1 teaspoon vanilla extract\n6.2 tablespoons creme de cacao.\n•In a pitcher, combine cooled coffee, milk and half-and-half. Stir in sugar, vanilla and creme de cacao. Chill in refrigerator until ready to serve.\nCalories\nPer serve - 102 calories"},
        {28, "Fruit custard\n\nIngredients:-\nTake 2.5 cups milk in a thick bottomed pan or saucepan and keep it on the stove top\n Bring the milk to a gentle simmer.\nWhile th.e milk is warming up, take 3 tablespoons warm or room temperature milk in a small bowl\nAdd 3 tablespoons custard powder.You can take the 3 tablespoons warm milk from the milk which is getting heated up or warm 3 tablespoons milk separately in a microwave oven or on the stove top\nWith a whisk, stir very well to make a smooth paste or slurry without any lumps.\n When the milk has come to a gentle heat, add 5 tablespoons sugar or as required. Stir very well so that the sugar dissolves.\n Keep the flame on a low and then add the custard paste or slurry in parts.\n As soon as you add the custard mixture, stir quickly so that lumps are not formed & Repeat with the remaining custard paste, working in batches or drizzling it in a slow stream as you whisk constantly.\n Keep on stirring often while the custard is cooking, so that lumps are not formed & Cook for about 5 to 6 minutes on a low heat. \n he mixture will thicken slowly and the raw taste of the cornstarch from the custard powder also goes away.\n Pour the custard in a bowl and cover the bowl with a kitchen towel. Let it cool at room temperature & If you plan to serve fruit custard cold, place the bowl covered with a lid in the refrigerator.\n Chop the fruits.\n Once the custard has cooled (at room temperature or in the fridge), add the mixed fruits.\n Calories-225 \nTime require:- 30 mins \n Origin;- United Kingdom"},
        {17, "Italian White sauce Pasta\n\nIngredients:-\n1/4cup olive oil\n2 cloves garlic, minced\n1 eggplant, peeled and cut into Half-inch cubes\n1 (28 ounce) can plum tomatoes with juice, chopped\n1 (16 ounce) package rigatoni pasta\nDirection\nStep 1:\n Heat olive oil in a large skillet over medium heat; cook and stir garlic until fragrant, 1 to 2 minutes.\n Add eggplant; cook, stirring constantly, until eggplant is softened, about 5 minutes.\n Add tomatoes and juice; cook until sauce is slightly reduced, about 20 minutes.\nStep 2:\nBring a large pot of lightly salted water to a boil. Cook rigatoni in the boiling water, stirring occasionally until cooked through but firm to the bite, about 13 minutes.\nDrain and transfer to a serving bowl.\nStep 3:\nPour sauce over pasta\nEnjoy your meal\nNutrition Facts\nPer Serving: 295 calories; protein 8.9g; carbohydrates 48.8g; fat 8.3g; sodium 144.7mg"},
        {20, "Mint Tea Punch\n\nIngredients:-\nTea, mint, sugar, orange and lemon juices make this a quick and easy, refreshingly delicious drink on a hot summer's day, given to me by a true Southern lady.\nGoes great with Cajun or spicy foods too. Every time I serve this someone asks me for the recipe! \n \n Ingredients\n\n  3 cups boiling water \n 12 sprigs fresh mint \n 4 tea bags \n  1 cup white sugar \n 1 cup white sugar \n  1 cup orange juice \n 1/4 cup lemon juice\n  5 cups cold water \n 3 orange slices for garnish (Optional) \n3 lemon slices for garnish (Optional) \n \n Direction \n\n Step 1 \n  Place the tea bags and mint sprigs into a large pitcher. Pour boiling water over them, and allow to steep for about 8 minutes \n Remove and discard the tea bags and mint leaves, squeezing out excess liquid. Stir in sugar until dissolved, then stir in the orange juice and \n lemon juice. Pour in the cold water. Serve over ice cubes, garnished with orange or lemon slices. \n \n Nutrition Facts \n  Per Serving: 94 calories; protein 0.4g; carbohydrates 24.2g; fat 0.1g; sodium 6.2mg. \n \n  "},
        {21, "Apple Juice\n\nHomemade juice, however, tastes surprisingly different as it is lighter and pleasantly sweet without the kick.\nIngredient Checklist\n\n 3 peels and cores from red apples - seeds removed\n 5 cups water\n 1/4 cup white sugar \n\n Direction \n \n Step 1 \n Place the peelings and cores into a saucepan, and stir in the water. Bring to a boil, reduce heat to a simmer, and cook, stirring occasionally, until the water picks up the apple flavor and color, about 30 minutes \n Drain the apple juice, discarding solid pieces, and stir in the sugar until dissolved. Allow to cool before drinking. \n \n Nutrition Facts \n \n Per Serving: 82 calories; protein 0.2g; carbohydrates 21.4g; fat 0.1g; sodium 7.9mg \n\n  "},
        {22, "John's Tasty German Cherry Beer\n\n This drink is remarkable! I used to order it at my favorite bar in Gelnhausen, Germany! If you don't like the taste of beer alone, you will love this drink!\n \n Ingredients--> \n\n Half cup cherry juice\n 1 (12 fluid ounce) can or bottle wheat beer (Hefeweizen)\n \n Directoions \n\n Step 1 \n Pour cherry juice into a 16 ounce glass; pour in beer. Drink! \n \n  Nutrition Facts \n \n Per Serving: 238 calories; protein 2.2g; carbohydrates 33.6g; fat 0g; cholesterol 0mg; sodium 23.9mg.\n\n "},
        {23, "The Real Mojito\nThis is an authentic recipe for mojito. I sized the recipe for one serving, but you can adjust it accordingly and make a pitcher full.\n It's a very refreshing drink for hot summer days\n Be careful when drinking it, however. If you make a pitcher you might be tempted to drink the whole thing yourself, and you just might find yourself talking Spanish in no time!\n Tonic water can be substituted instead of the soda water but the taste is different and somewhat bitter.\n\n Ingredients\n\n 10 fresh mint leaves \n Half lime, cut into 4 wedges\n 2 tablespoons white sugar, or to taste \n 1 cup ice cubes \n 1 Half fluid ounces white rum \n Half cup club soda \n \n Directions\n \n Step 1 \n Place mint leaves and 1 lime wedge into a sturdy glass. Use a muddler to crush the mint and lime to release the mint oils and lime juice\n Add 2 more lime wedges and the sugar, and muddle again to release the lime juice. Do not strain the mixture.\n Fill the glass almost to the top with ice. Pour the rum over the ice, and fill the glass with carbonated water. Stir, taste, and add more sugar if desired. Garnish with the remaining lime wedge.\n \n Nutrition facts \n\n Per Serving: 193 calories; protein 0g; carbohydrates 25g; fat 0g; cholesterol 0mg; sodium 10.7mg "},
        {26, "Chocolate Ice-Cream\n\nIngredients:-->\n1.3/4 cup sugar\n2.1 cumilk\n3.1/4 teaspoon salt\n4.2 tablespoons unsweetened cocoa powder\n5.3 egg yolk\n6.lightly beaten 2 ounces semisweet chocolate\n7.chopped 2 cups heavy cream\n8.1 teaspoon vanilla extract\n•Combine sugar, milk, salt, and cocoa powder in a saucepan over medium heat, stirring constantly. Bring to a simmer. Place the egg yolks into a small bowl. Gradually stir in about Half cup of the hot liquid. and return to the saucepan. Heat until thickened, but do not boil. Remove from the heat, and stir in the chopped chocolate until chocolate is melted. Pour into a chilled bowl, and refrigerate for about two hours until cold, stirring occasionally.\n•When chocolate mixture has completely cooled, stir in the cream, and vanilla. Pour into an ice cream maker, and freeze according to manufacturer's directions.\nCalories\nFor 100g - 216 calories"},
        {15, "Grilled Chicken\n\nIngredients:-->\n1. 1/4 c. balsamic vinegar\n2.3 tbsp. extra-virgin olive oil\n3. 2 tbsp. brown sugar\n4.3 cloves garlic, minced\n5.1 tsp. dried thyme\n6.1 tsp. dried rosemary\n7.4 chicken breasts Kosher \n8.saltFreshly ground black pepperFreshly chopped parsley, for garnish\nProcedureIn a medium bowl, whisk together balsamic vinegar, olive oil, brown sugar, garlic, and dried herbs, and season generously with salt and pepper. Reserve 1/4 cup.\nAdd chicken to the bowl and toss to combine. Let marinate at least 20 minutes and up to overnight.\nPreheat grill to medium high. Add chicken and grill, basting with reserved marinade, until cooked through, 6 minutes per side\nGarnish with parsley before serving.\ncalories\nFor 100gm = 226 calories"},
        {24, "Green Tea\n\nIngredients:-->\n1.2 cups hot watee\n2.2 tropical green tea bags\n3.1 ounce lemon juice\n4.Half ounce orange juice\n5.2 packets Wholesome Organic Stevia, or more to taste\n6.Ice.\n•Prepare tropical tea with hot water. Remove tea bags once well steeped.\n•Stir in lemon juice, orange juice and Wholesome Organic Stevia.\n•Let cool and add ice.\nCalories\nPer Serve - 15 calories"},
        {27, "Fresh Fruit and Yogurt Ice Pops\n\nIngredients:-\n1.2 cups fresh blueberries, raspberries, strawberries and sliced bananas, mixed\n2.2 cups plain or vanilla yogurt\n3.1/4 cup white sugar\n4.8 small paper cups\n5.8 popsicle sticks\n•Place the mixed blueberries, raspberries, strawberries, sliced bananas, yogurt, and sugar into a blender. Cover, and blend until fruit is chunky or smooth, as desired.\n•Fill paper cups 3/4 full with fruit mixture. Cover the top of each cup with a strip of aluminum foil. Poke a popsicle stick through the center of the foil on each cup.\n•Place the cups in the freezer for at least 5 hours. To serve, remove foil and peel off the paper cup.\nCalories\nPer Candy - 82 calories"},
        {25, "Banana Protein Shake\n\n Ingredients:-\n 1 cup plain unsweetened almond milk \n Half cup plain full fat Greek yogurt \n 1 scoop vanilla protein powder \n 1 frozen banana \n 1/8 tsp ground cinnamon \n Add the unsweetened almond milk, full fat plain greek yogurt, vanilla protein powder, frozen banana, and ground cinnamon into a blender. \n Blend until smooth. \n If you find your shake is too thick, you can always add some more almond milk, little by little, to the blender. \n Calories: 362 kcal"},
        {18, "Perfect Hard Boiled Eggs\n\nIngredients:-\n1.1 tablespoon salt\n2.1/4 cup distilled white vinegar\n3.6 cups water\n4.8 eggs.\n•Combine the salt, vinegar, and water in a large pot, and bring to a boil over high heat. Add the eggs one at a time, being careful not to crack them. Reduce the heat to a gentle boil, and cook for 14 minutes.\n•Once the eggs have cooked, remove them from the hot water, and place into a container of ice water or cold, running water. Cool completely, about 15 minutes. Store in the refrigerator up to 1 week.\nCalories\nFor 100g - 155 calories"},
        {6, "Fruit Salad\n\nIngredients:-\n1.1 pint strawberries - cleaned, hulled and sliced\n2.1 pound seedless grapes, halved\n3.3 kiwis, peeled and sliced\n4.3 bananas, sliced\n5.1 (21 ounce) can peach pie filling.\n•In a large bowl, combine the strawberries, grapes, kiwis, and bananas. Gently mix in peaches. Chill for 1 hour before serving.\nCalories\nFor 100g - 50 calories"},
        {16, "Green Thai Curry\n\n Ingredients:-\n1tbsp vegetable oil\n1tbsp ginger & garlic paste\nred curry paste300ml\ncoconut milk\n skinless, boneless chicken thighs \n cut into large chunks \n 4 lime leaves (ideally fresh) \n 2tbsp fish sauce \n1 tsp brown sugar \n Thai basilbasil or coriander\nplus extra to serve1 red chilli \n sliced diagonallythumb-sized piece ginger \n cut into matchstickscooked jasmine rice \n heat 1tbsp veg.oil in a large saucepan over a medium heat& fry 1tbsp garlic paste for 2 mins.\n Add 5-6 tbsp red curry paste,sizzle for few secs, then pour in 800 ml coconut milk.\n Bring to boil, reduce to a simmer, stir a little and wait for the oil to rise to the surface. \n Add 8 skinless,boneless chicken thighs, cut inti chunks & lime leaves and simmer for 12 mins or until the chicken is cooked thorough.\n Add 1 tbsp of the fish sauce and a pinch of brown sugar.\n Bring to the boil, take off the heat and off the heat and add Half small pack thai basil. \n Spoon the curry into bowls and top with red hilli, a thumb sized pice of gingerand a few extra basil leaves. \n Serve with jasmine rice. \n Calories:- 699."},
        {29, "Chocolate Pastry\n\nIngredients:-\nChocolate Cake\n1.butter and flour for coating and dusting the cake pan\n2.3 cups all-purpose flour\n3.3 cups granulated sugar\n4.1 Half cups unsweetened cocoa powder\nChocolate Cream Cheese Buttercream Frosting\n1.1 Half cups butter softened\n2.8 oz cream cheese softened\n3.1 Half cups unsweetened cocoa powder\n4.3 teaspoons vanilla extract\n5.7-8 cups powdered sugar\n6.about 1/4 cup milk as needed\nChocolate Cake\n•Preheat oven to 350 degrees Fahrenheit. Butter three 9-inch cake rounds. Dust with flour and tap out the excess.\n•Mix together flour, sugar, cocoa, baking soda, baking powder, and salt in a stand mixer using a low speed until combined.\n•Add eggs, buttermilk, warm water, oil, and vanilla. Beat on a medium speed until smooth. This should take just a couple of minutes.\n•Divide batter among the three pans. I found that it took just over 3 cups of the batter to divide it evenly.\n•Bake for 30-35 minutes in a 350 degree oven until a toothpick inserted into the center comes out clean.\n•Cool on wire racks for 15 minutes and then turn out the cakes onto the racks and allow to cool completely.\n•Frost with your favorite frosting and enjoy!\nChocolate Cream Cheese Buttercream Frosting\n•In a large bowl, beat together butter and cream cheese until fluffy. Use a hand mixer or stand mixer for best results\n•Add in cocoa powder and vanilla extract. Beat until combined.\n•Beat in powdered sugar, 1 cup at a time. Add milk as necessary to make a spreadable consistency. The frosting should be very thick and will thicken even more if refrigerated.\nCalories\nPer Serve - 500 calories"},
        {30, "Cherry Cheesecake\n\nIngredients:-\n1 (9 inch) prepared graham cracker crust\n 1 (8 ounce) package cream cheese, softened\n 1 (14 ounce) can sweetened condensed milk\n ⅓ cup lemon juice\n 1 teaspoon vanilla extract\n 1 (21 ounce) can cherry pie filling \n\n Direction \n\n Step 1 \nPlace softened cream cheese in a mixing bowl; add condensed milk, lemon juice, and vanilla. Beat until well blended \n  Pour mixture into the pie crust. Chill for 5 hours. DO NOT FREEZE!!!\n Step 2 \n Pour cherry pie filling on top of pie. Serve \n \n Nutrition Facts \n\n Nutrition Facts\n Per Serving: 316 calories; protein 4.9g; carbohydrates 44.2g; fat 13.7g; cholesterol 31.6mg; sodium 205.7mg."},
        {31, "Green Gecko\n\nIngredients:-\n1.1 (1.5 fluid ounce) jigger green Chartreuse\n2.1 (1.5 fluid ounce) jigger 151 proof rum\n•In a cocktail mixer full of ice, combine Chartreuse and rum. Shake vigorously and strain into 2 shot glasses.\nNutrition\nPer Serving: 136 calories; protein 0g; carbohydrates 9.3g; fat 0.1g; cholesterol 0mg; sodium 1.6mg."},

    };
    map<int, string> rec2 = {
        {1, "Diet Plan for weight gain \n\n3000 -calorie diet\nMonday:\nBreakfast\n1 cup (80 grams) of oats with 1 cup (240 ml) of dairy or plant-based milk, 1 sliced banana, and 2 tablespoons (33 grams) of peanut butter\nSnack\n2 tablespoons (33 grams) of peanut butter and 1 banana on 1 slice of whole-wheat bread\nLunch:\n8 ounces (226 grams) of tilapia fillets, 1/4 cup (32 grams) of lentils, and a salad topped with 1/4 cup (30 grams) of walnuts\nSnack:\n2 sliced, hard-boiled eggs atop a mixed green salad\nDinner\n4 ounces (110 grams) of salmon, 1 cup (100 grams) of brown rice, and 5 asparagus spears\n\n\nTuesday\n\nBreakfast\nsmoothie made with 2 cups (480 ml) of dairy or plant-based milk, 1 cup (227 grams) of yogurt, 1 cup (140 grams) of blueberries, and 2 tablespoons (33 grams) of almond butter\nSnack\n1 granola bar, 1 piece of fruit, and 2 pieces of string cheese\nLunch\n12-inch sub sandwich with meat, cheese, and veggies with 3 ounces (85 grams) of baby carrots, 2 tablespoons (28 grams) of hummus, and apple slices on the side\nSnack\n1 scoop of whey protein powder mixed in 1 cup (240 ml) of dairy or plant-based milk\nDinner\n4-ounce (113-gram) sirloin steak, 1 medium-sized (173-gram) baked potato with 1 tablespoon (14 grams) of butter, and 1 cup (85 grams) of broccoli\n\n\nWednesday\n\nBreakfast\n3 whole-wheat waffles with 2 tablespoons (33 grams) of peanut butter, 1 orange, and 2 cups (480 ml) of dairy or plant-based milk\nSnack\n1 nut-based granola bar and 1 ounce (28 grams) of almonds\nLunch\n6-ounce (170-gram) 90%-lean burger on a whole-wheat bun with 1 tomato slice and lettuce leaf, as well as 1 1/2 cup (86 grams) of homemade sweet potato fries cooked in olive oil\nSnack1 cup (227 grams) of Greek yogurt and 1 cup (140 grams) of strawberries\nDinner\n4-ounce (112-gram) chicken breast, 1/2 cup (84 grams) of quinoa, and 1 1/3 cups (85 grams) of sugar snap peas\n\n\nThursday\n\nBreakfast\n3-egg omelet with sliced onions, red and green bell peppers, and 1/4 cup (28 grams) of shredded cheese with 2 cups (480 ml) of dairy or plant-based milk to drink\nSnack\n2 tablespoons (33 grams) of peanut butter and 1 banana on 1 slice of whole-wheat bread\nLunch\n8 ounces (226 grams) of tilapia fillets, 1/4 cup (32 grams) of lentils, and a salad topped with 1/4 cup (30 grams) of walnuts\nSnack\n2 sliced, hard-boiled eggs atop a mixed green salad\nDinne\nturkey chili made with a 4-ounce (114-gram) turkey breast, chopped onions, garlic,\ncelery, and sweet peppers, 1/2 cup (123 grams) of canned, diced tomatoes, and 1/2 cup\n(120 grams) of cannellini beans, topped with 1/4 cup (28 grams) of shredded cheese.Add\noregano, bay leaves, chili powder, and cumin as desired for taste.\n\n\nFriday\nBreakfast\n3 whole eggs, 1 apple, and 1 cup (80 grams) of oa0tmeal made with 1 cup (24 ml) of dairy or plant-based milk\nSnack n1 cup (226 grams) of plain yogurt with 1/4 cup (30 grams) of granola and 1/2 cup (70 grams) of raspberries\nLunch\n6-ounce (168-gram) chicken breast, 1 medium-sized (151-gram) sweet potato, 3/4 cup (85 grams) of green beans, and 1 ounce (28 grams) of nuts\nSnack\n1/2 cup (130 grams) of chickpeas atop green\nDinner\nburrito bowl with 6 ounces (170 grams) of chopped sirloin steak, 1/2 cup (130\ngrams) of black beans, 1/2 cup (90 grams) of brown rice, 1 cup (35 grams) of shredded\nlettuce and spinach, and 2 tablespoons (16 grams) of salsa\n\n"},
        {2, "Diet Plan for Weight Loss \n\n1200 calorie Diet\nMonday 6:30 AM Cucumber Detox Water (1 glass)\n8:00 AM Oats Porridge in Skimmed Milk (1 bowl)Mixed Nuts (25 grams)\n12:00 PM Skimmed Milk Paneer (100 grams)\n4:00 PM	Cut Fruits (1 cup) Buttermilk (1 glass)\n5:30 PM Tea with Less Sugar and Milk (1 teacup)\n8:50 PM Mixed Vegetable Salad (1 katori)\n9:00 PM	Dal (1 katori) Lauki Sabzi (1 katori)Roti (1 roti/chapati)\nTuesday 6:30 AM	Cucumber Detox Water (1 glass)\n8:00 AM	Curd (1.5 katori) Mixed Vegetable Stuffed Roti (2 pieces)\n12:00 PM	Skimmed Milk Paneer (100 grams)\n2:00 PM Mixed Vegetable Salad (1 katori)\n2:10 PM Lentil Curry (0.75 bowl) Methi Rice (0.5 katori)\n4:00 PM Apple (0.5 small (2-3/4″ dia)) Buttermilk (1 glass)\n5:30 PM Coffee with Milk and Less Sugar (0.5 tea cup)\n8:50 PM Mixed Vegetable Salad (1 katori)\n9:00 PM	Sauteed Vegetables with Paneer (1 katori) Roti (1 roti/chapati)Green Chutney (2 tablespoon)\nWednesday 6:30 AM Cucumber Detox Water (1 glass)\n8:00 AM Skim Milk Yoghurt (1 cup (8 fl oz)) Multigrain Toast (2 toast)\n12:00 PMSkimmed Milk Paneer (100 grams)\n2:00 PM	Mixed Vegetable Salad (1 katori)\n2:10 PM Sauteed Vegetables with Paneer (1 katori) Roti (1 roti/chapati)Green Chutney (2 tablespoon)]\n4:00 PM	Banana (0.5 small (6″ to 6-7/8″ long)) Buttermilk (1 glass)\n5:30 PM Tea with Less Sugar and Milk (1 teacup)\n8:50 PM Mixed Vegetable Salad (1 katori)\n9:00 PM	Lentil Curry (0.75 bowl) Methi Rice (0.5 katori)\nThursday 6:30 AM	Cucumber Detox Water (1 glass)\n8:00 AM	Fruit and Nuts Yogurt Smoothie (0.75 glass)\n12:00 PM Skimmed Milk Paneer (100 grams)\n2:00 PM Mixed Vegetable Salad (1 katori)\n2:10 PM Green Gram Whole Dal Cooked (1 katori) Bhindi sabzi (1 katori)Roti (1 roti/chapati)\n4:00 PM Orange (1 fruit (2-5/8″ dia)) Buttermilk (1 glass)\n5:30 PM Coffee with Milk and Less Sugar (0.5 teacup)\n8:50 PM	Mixed Vegetable Salad (1 katori)\n8:50 PM Mixed Vegetable Salad (1 katori)\n9:00 PM	Palak Chole (1 bowl) Steamed Rice (0.5 katori)\nFriday 6:30 AM Cucumber Detox Water (1 glass)\n8:00 AM Skimmed Milk (1 glass) Peas Poha (1.5 katori)\n12:00 PM Skimmed Milk Paneer (100 grams)\n2:00 PM	Mixed Vegetable Salad (1 katori)\n2:10 PM Low Fat Paneer Curry (1.5 katori) Missi Roti (1 roti)\n4:00 PM Papaya (1 cup 1″ pieces) Buttermilk (1 glass)\n5:30 PM	Tea with Less Sugar and Milk (1 teacup)\n8:50 PM Mixed Vegetable Salad (1 katori)\n9:00 PM Curd (1.5 katori) Aloo Baingan Tamatar Ki Sabzi (1 katori Roti(1 roti / chapati)\nSaturday 6:30AM Cucumber Detox Water(1 Glass)\n8:00AM Mixed sambahar(1 bowl) Idli(2 )\n12:00Pm Skimmed Milk Paneer (100 gms)\n2:00PM Mixed Vegetable Salad\n2:10 PM Curd(1.5 katori) Aloo Baingan Tmatar Ki Sabzi(1 katori) Roti\n4:00PM Cut fruits (1 cup) Buttermilk(1 glass)\n5:30PM CLess sugar coffee 90.5 tea cup)\n8:50PM Mixed vegetable salad(1 katori)\n9:00 PMBhindi sabji (1 katori) 1 Roti\nSundsay 6:30AM Cucumber Detox Water (1 glass).\n8:00AM Besan Chilla(2 nos) with curd( 1 katori)\n12:00 Skimmed milk paneer (100 gms)\n2:00 PM Mixed Vegetable Salad(1 katori)\n2:10 PM Palak chole(1 katori) Steamed Rice (0.5 katori)\n4:00 PM Apple(small size)Buttermilk(1 glass)\nLess sugar wit tea(1 teacup)\n8:50PMMixed vegetable salad(1 katori)\n9:00PM Low Fat Paneer Curry(1 katori) Missi Roti(1  nos) "}};
    struct userrec
    {
        string name;
        string namex;
        string ingred;
        string proced;

    } urec[10];
};

class Menu : public Cookbook
{
public:
    void menudisp()
    {
        cout << "\n* * * * * Menu * * * * *";
        cout << endl;
        cout << "\n SOUPS" << endl;
        cout << "\n1. Chicken soup ";
        cout << "\n2. Mushroom soup";
        cout << "\n3. Venison Italian Soup" << endl;
        cout << "\n SALADS" << endl;
        cout << "\n4. Salad Caprese";
        cout << "\n5. Cobb Salad";
        cout << "\n6. Fruit Salad" << endl;
        cout << "\n PIZZA" << endl;
        cout << "\n7. Pizza";
        cout << "\n8. Vegetable Stuffed pizaa" << endl;
        cout << "\n RICE" << endl;
        cout << "\n9. Jeera Rice" << endl;
        cout << "\n Main Course" << endl;
        cout << "\n10. Greatest Lasagna";
        cout << "\n11. The Greatest Arancini";
        cout << "\n12. Paneer Tikka Masala";
        cout << "\n13. Palak Paneer";
        cout << "\n14. Butter Chicken";
        cout << "\n15. Grilled Chicken";
        cout << "\n16. Green Thai Curry";
        cout << "\n17. Italian White sauce Pasta";
        cout << "\n18. Perfect Hard Boiled Eggs" << endl;
        cout << "\n Drinks" << endl;
        cout << "\n19. Cold Coffee";
        cout << "\n20. Mint Tea Punch";
        cout << "\n21. Apple Juice";
        cout << "\n22. John's Tasty German Cherry Beer";
        cout << "\n23. The Real Mojito";
        cout << "\n24. Green Tea";
        cout << "\n25. Banana Protein Shake" << endl;
        cout << "\n Desserts" << endl;
        cout << "\n26. Chocolate Ice-Cream";
        cout << "\n27. Fresh Fruit and Yogurt Ice Pops";
        cout << "\n28. Fruit custard";
        cout << "\n29. Chocolate Pastry";
        cout << "\n30. Cherry Cheesecake" << endl;
        cout << "\n Specials" << endl;
        cout << "\n31. Green Gecko" << endl;
        int choice;
        cin >> choice;
        cout << endl;
        cout << endl;
        cout << rec[choice] << endl;
        cout << endl;
        cout << endl;
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st2;
        cin >> st2;
        if (st2 == "n")
        {
            exit(0);
        }
    }

    void chicken_menu()
    {

        cout << "\n* * * * * Chicken Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n 1. Chicken soup";
        cout << "\n 2. Butter Chicken";
        cout << "\n 3. Grilled Chicken";
        cout << "\n 4.Back";
        cout << endl;
        int cmenu;
        cin >> cmenu;
        switch (cmenu)
        {
        case 1:
            cout << rec[1] << endl;
            break;

        case 2:
            cout << rec[14] << endl;
            break;

        case 3:
            cout << rec[15] << endl;
            break;

        case 4:
            break;

        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st1;
        cin >> st1;
        if (st1 == "n")
        {
            exit(0);
        }
    }
    void veggies_menu()
    {
        cout << "\n* * * * * Veggies Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n 1. Mushroom soup";
        cout << "\n 2. Salad Caprese";
        cout << "\n 3. Vegetable Stuffed pizaa";
        cout << "\n 4. Green Thai Curry";
        cout << "\n 5. Back";
        cout << endl;

        int vmenu;
        switch (vmenu)
        {
        case 1:
            cout << rec[2] << endl;
            break;

        case 2:
            cout << rec[4] << endl;
            break;

        case 3:
            cout << rec[8] << endl;
            break;

        case 4:
            cout << rec[16] << endl;
            break;

        case 5:
            break;

        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st3;
        cin >> st3;
        if (st3 == "n")
        {
            exit(0);
        }
    }
    void fruits_menu()
    {
        cout << "\n* * * * * Fruits Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n 1. Friut Salad";
        cout << "\n 2. Fruit Custard";
        cout << "\n 3. Fresh Fruit and Yogurt Ice Pops";
        cout << "\n 4. Banana Protein Shake";
        cout << "\n 5. Apple Juice";
        cout << "\n 6. Back";
        cout << endl;
        int fmenu;
        cin >> fmenu;
        switch (fmenu)
        {
        case 1:
            cout << rec[28] << endl;
            break;

        case 2:
            cout << rec[15] << endl;
            break;

        case 3:
            cout << rec[27] << endl;
            break;

        case 4:
            cout << rec[25] << endl;
            break;

        case 5:
            cout << rec[21] << endl;
            break;

        case 6:
            break;

        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st4;
        cin >> st4;
        if (st4 == "n")
        {
            exit(0);
        }
    }
    void dairy_menu()
    {
        cout << "\n* * * * * Dairy Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n 1. Paneer Tikka Masala";
        cout << "\n 2. Palak Paneer";
        cout << "\n 3. Chocolate Ice-Cream";
        cout << "\n 4. Fresh Fruit and Yogurt Ice Pops";
        cout << "\n 5. Chocolate Pastry";
        cout << "\n 6. Cherry Cheesecake";
        cout << "\n 7. Fruit Custard";
        cout << "\n 8. Back";
        cout << endl;
        int dmenu;
        cin >> dmenu;
        switch (dmenu)
        {
        case 1:
            cout << rec[12] << endl;
            break;

        case 2:
            cout << rec[13] << endl;
            break;

        case 3:
            cout << rec[26] << endl;
            break;

        case 4:
            cout << rec[27] << endl;
            break;

        case 5:
            cout << rec[29] << endl;
            break;

        case 6:
            cout << rec[30] << endl;
            break;

        case 7:
            cout << rec[15] << endl;
            break;

        case 8:
            break;

        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st5;
        cin >> st5;
        if (st5 == "n")
        {
            exit(0);
        }
    }
    void eggs_menu()
    {
        cout << "\n* * * * * Egg Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n 1. Perfect Hard Boiled Eggs";
        cout << "\n 2. Chocolate Ice-Cream";
        cout << "\n 3. The Great Arancini";
        cout << "\n 4. Italian White Sauce Pasta";
        cout << "\n 5. Cobb Salad";
        cout << "\n 6. Greatest Lasagna";
        cout << "\n 7. Back";
        cout << endl;
        int emenu;
        cin >> emenu;
        switch (emenu)
        {
        case 1:
            cout << rec[18] << endl;
            break;

        case 2:
            cout << rec[26] << endl;
            break;

        case 3:
            cout << rec[11] << endl;
            break;

        case 4:
            cout << rec[17] << endl;
            break;

        case 5:
            cout << rec[5] << endl;
            break;

        case 6:
            cout << rec[10] << endl;
            break;

        case 7:
            break;

        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st6;
        cin >> st6;
        if (st6 == "n")
        {
            exit(0);
        }
    }
    void alcohol_menu()
    {
        cout << "\n* * * * * Alcohol Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n1.John's Tasty German Cherry Beer";
        cout << "\n2.Green Gecko";
        cout << "\n3.Back";
        cout << endl;
        int cmenu;
        cin >> cmenu;
        switch (cmenu)
        {
        case 1:
            cout << rec[22] << endl;
            break;

        case 2:
            cout << rec[31] << endl;
            break;

        case 3:
            break;

        default:
            cout << "Enter a valid option" << endl;
            break;
        }
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st7;
        cin >> st7;
        if (st7 == "n")
        {
            exit(0);
        }
    }
    void Imenu()
    {
        cout << "\n* * * * * Ingredient Based Recipe Menu* * * * *";
        cout << endl;
        cout << "\n1. Chicken  ";
        cout << "\n2. Veggies ";
        cout << "\n3. Fruits ";
        cout << "\n4. Dairy Product";
        cout << "\n5. Eggs";
        cout << "\n6. Alcohol";
        cout << "\n7. Back";
        cout << endl;
        int ing;
        cout << endl;
        cin >> ing;
        cout << endl;
        switch (ing)
        {
        case 1:
            chicken_menu();
            break;
        case 2:
            veggies_menu();
            break;

        case 3:
            fruits_menu();
            break;

        case 4:
            dairy_menu();
            break;

        case 5:
            eggs_menu();
            break;

        case 6:
            alcohol_menu();
            break;
        case 7:
            break;
        default:
            cout << "Please select a valid option" << endl;
            break;
        }
    }
};
class Diet : public Menu
{
public:
    void wgain()
    {
        cout << endl;
        cout << rec2[1] << endl;
        cout << endl;
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st9;
        cin >> st9;
        if (st9 == "n")
        {
            exit(0);
        }
    }
    void wloss()
    {
        cout << endl;
        cout << rec2[2] << endl;
        cout << endl;
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st10;
        cin >> st10;
        if (st10 == "n")
        {
            exit(0);
        }
    }
    void Dmenu()
    {
        cout << "\n* * * * * Diet Menu * * * * *";
        cout << endl;
        cout << "\n1. Weight Gain  ";
        cout << "\n2. Weight Loss ";
        cout << "\n3. Back ";
        int dm;
        cout << endl;
        cin >> dm;
        cout << endl;
        switch (dm)
        {
        case 1:
            wgain();
            break;
        case 2:
            wloss();
            break;
        case 3:
            break;
        default:
            cout << "Enter a valid option" << endl;
            break;
        }
    }

    void insert_rec()
    {
        getline(cin, urec[i].namex);
        cout << "Enter name: ";
        getline(cin, urec[i].name);
        cout << "Enter ingredients: ";
        getline(cin, urec[i].ingred);
        cout << "Enter procedure: ";
        getline(cin, urec[i].proced);
        cout << endl;
        cout << endl;
        cout << endl;
        i++;
    }
    void print_detrec(int pcr)
    {
        cout << endl;
        cout << endl;
        cout << urec[pcr - 1].name << endl;
        cout << urec[pcr - 1].ingred << endl;
        cout << urec[pcr - 1].proced << endl;
        cout << endl;
        cout << endl;
        cout << "\nDo you wish to continue (y/n) : " << endl;
        string st11;
        cin >> st11;
        if (st11 == "n")
        {
            exit(0);
        }
    }
    void print_rec()
    {
        int pcrf;
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << "." << urec[j].name << endl;
        }
        cout << "Select recipe: " << endl;
        cin >> pcrf;
        print_detrec(pcrf);
    }
};

int main()
{
    Diet c;
    int ch;
    do
    {
        cout << "\n* * * * * Smart Cook Book * * * * *";
        cout << endl;
        cout << "\n1. Cook Book Recipe Menu ";
        cout << "\n2. Ingredient Based Recipe Menu";
        cout << "\n3. Diet Plan";
        cout << "\n4. User Recipe Menu";
        cout << "\n5. Add Recipe";
        cout << "\n6. Exit";
        cout << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            c.menudisp();
            break;
        case 2:
            c.Imenu();
            break;
        case 3:
            c.Dmenu();
            break;
        case 4:
            c.print_rec();
            break;
        case 5:
            c.insert_rec();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Enter a valid option" << endl;
            break;
        }
    } while (ch != 6);

    return 0;
}