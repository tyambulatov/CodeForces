#include <bits/stdc++.h>

using namespace std;

int64_t changeMasure(string a)
{
    if (a == "kg")
    {
        return 1000;
    }
    else if (a == "l")
    {
        return 1000;
    }
    else if (a == "tens")
    {
        return 10;
    }
    else
    {
        return 1;
    }
}

struct IngredientDiscription
{
    int64_t price;
    int64_t quantiti;
};

struct IngredientFullDiscription
{
    int64_t quantiti;
    double proteins;
    double fats;
    double carbohydrates;
    double energy;
};

struct DishPFC
{
    double proteins;
    double fats;
    double carbohydrates;
    double energy;
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int64_t numberOfDishes;
    cin >> numberOfDishes;

    unordered_map<string, int64_t> ingredientToQuantity;
    unordered_map<string, vector<pair<string, int64_t>>> dishIngredient;

    for (int64_t i = 0; i < numberOfDishes; i++)
    {
        string nameDish;
        int64_t numOfSingleDish, numIngredients;
        cin >> nameDish >> numOfSingleDish >> numIngredients;

        for (int64_t j = 0; j < numIngredients; j++)
        {
            string nameIngredient, measure;
            int64_t quantitiIngredient;
            cin >> nameIngredient >> quantitiIngredient >> measure;

            ingredientToQuantity[nameIngredient] += numOfSingleDish * quantitiIngredient * changeMasure(measure);
            dishIngredient[nameDish].push_back({nameIngredient, quantitiIngredient * changeMasure(measure)});
        }
    }

    int64_t numCatalogue;
    cin >> numCatalogue;
    vector<string> ingredientOrder;

    unordered_map<string, IngredientDiscription> catalogue;
    for (int64_t i = 0; i < numCatalogue; i++)
    {
        string nameIngredient, measure;
        int64_t priceIngredient, quantitiIngredient;

        cin >> nameIngredient >> priceIngredient >> quantitiIngredient >> measure;
        catalogue[nameIngredient] = {priceIngredient,
                                     quantitiIngredient * changeMasure(measure)};
        ingredientOrder.push_back(nameIngredient);
    }

    int64_t numCatalogueDishes;
    cin >> numCatalogueDishes;

    unordered_map<string, IngredientFullDiscription> caloriesCatalogue;

    for (int64_t i = 0; i < numCatalogueDishes; i++)
    {
        string nameIngredient, measure;
        int64_t quantitiIngredient;
        double pr, f, ch, fu;

        cin >> nameIngredient >> quantitiIngredient >> measure >> pr >> f >> ch >> fu;
        caloriesCatalogue[nameIngredient] = {quantitiIngredient * changeMasure(measure), pr, f, ch, fu};
    }

    int64_t sumMoney = 0;
    unordered_map<string, int64_t> ingredientNumPacks;

    for (auto a : ingredientToQuantity)
    {
        string nameIngredient = a.first;
        int64_t quantitiIngredient = a.second;

        int64_t numPacks = 1 + (quantitiIngredient - 1) / catalogue[nameIngredient].quantiti;
        sumMoney += numPacks * catalogue[nameIngredient].price;
        ingredientNumPacks[nameIngredient] = numPacks;
    }
    cout << sumMoney << '\n';
    for (auto nameIngredient : ingredientOrder)
    {
        cout << nameIngredient << " " << ingredientNumPacks[nameIngredient] << '\n';
    }

    for (auto dI : dishIngredient)
    {
        string nameDish = dI.first;
        DishPFC dishChar = {0, 0, 0, 0};

        for (auto ingr : dI.second)
        {
            string nameIngr = ingr.first;
            int64_t quantitiIngr = ingr.second;
            double measure = (double)quantitiIngr / caloriesCatalogue[nameIngr].quantiti;
            dishChar.carbohydrates += measure * caloriesCatalogue[nameIngr].carbohydrates;
            dishChar.proteins += measure * caloriesCatalogue[nameIngr].proteins;
            dishChar.fats += measure * caloriesCatalogue[nameIngr].fats;
            dishChar.energy += measure * caloriesCatalogue[nameIngr].energy;
        }

        dishChar.carbohydrates = round(dishChar.carbohydrates * 1000);
        dishChar.carbohydrates = dishChar.carbohydrates / 1000;

        dishChar.proteins = round(dishChar.proteins * 1000);
        dishChar.proteins = dishChar.proteins / 1000;

        dishChar.fats = round(dishChar.fats * 1000);
        dishChar.fats = dishChar.fats / 1000;

        dishChar.energy = round(dishChar.energy * 1000);
        dishChar.energy = dishChar.energy / 1000;

        cout << nameDish << " "
             << dishChar.proteins
             << " " << dishChar.fats
             << " " << dishChar.carbohydrates
             << " " << dishChar.energy << '\n';
    }
}
