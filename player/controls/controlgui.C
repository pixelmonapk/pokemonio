using UnityEngine;
using System.Collections;

public enum IngredientUnit { Spoon, Cup, Bowl, Piece }

// Custom serializable class
public class Ingredient  {
    public string name;
    public int amount = 1;
    public IngredientUnit unit;
}

public class ExampleClass : MonoBehaviour {
    public Ingredient potionResult;
    public Ingredient[] potionIngredients;
}
