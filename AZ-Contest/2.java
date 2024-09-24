
public class PizzaBuilder
{
private
    String dough;
private
    String sauce;
private
    String topping;

public
    PizzaBuilder addDough(String dough)
    {
        this.dough = dough;
        return this;
    }

public
    PizzaBuilder addSauce(String sauce)
    {
        this.sauce = sauce;
        return this;
    }

public
    PizzaBuilder addTopping(String topping)
    {
        this.topping = topping;
        return this;
    }

public
    Pizza build()
    {
        Pizza pizza = new Pizza();
        pizza.setDough(dough);
        pizza.setSauce(sauce);
        pizza.setTopping(topping);
        return pizza;
    }
}

class Pizza
{
private
    String dough;
private
    String sauce;
private
    String topping;

public
    String getDough()
    {
        return dough;
    }

public
    void setDough(String dough)
    {
        this.dough = dough;
    }

public
    String getSauce()
    {
        return sauce;
    }

public
    void setSauce(String sauce)
    {
        this.sauce = sauce;
    }

public
    String getTopping()
    {
        return topping;
    }

public
    void setTopping(String topping)
    {
        this.topping = topping;
    }
}