import random

def hero_attack(enemy_hp) :
    print("It's your turn")
    print("Choose your attack:")
    print("[1] - Thunderstrike - A powerful attack that deals high damage.")
    print("[2] - Shadow Slash - A quick and stealthy attack.")
    print("[3] - Flame Burst - An explosive fire attack.")
    print("[4] - Frostbite Slam - A chilling strike that slows and damages the enemy.")

    try :
    choice = int(input("Enter your choice (1-4): "))
    except ValueError :
print("Invalid choice, try again.")
return enemy_hp

hero_damage = 0
if choice == 1 :
    hero_damage = random.randint(0, 100)
    elif choice == 2 :
    hero_damage = random.randint(0, 40)
    elif choice == 3 :
    hero_damage = random.randint(0, 80)
    elif choice == 4 :
    hero_damage = random.randint(0, 60)
else:
print("Invalid choice, try again.")
return enemy_hp

enemy_hp -= hero_damage
print(f"Good attack! You dealt {hero_damage} damage to the enemy.")
print(f"The enemy now has {enemy_hp} HP.")
return enemy_hp

def enemy_attack(hero_hp) :
    enemy_damage = random.randint(0, 60)
    hero_hp -= enemy_damage
    print(f"Ouch! The enemy hit you and took {enemy_damage} health points.")
    print(f"You now have {hero_hp} HP.")
    return hero_hp

    def combat() :
    hero_hp = 200
    enemy_hp = 200
    print("The battle between the hero and the enemy begins.")
    print("You are the hero and you have 200 HP.")
    print("The enemy also has 200 HP.")

    while enemy_hp > 0 and hero_hp > 0:
enemy_hp = hero_attack(enemy_hp)
if enemy_hp <= 0 :
    print("Congratulations! You defeated the enemy!")
    break

    hero_hp = enemy_attack(hero_hp)
    if hero_hp <= 0 :
        print("You have been defeated! Game over.")
        break

        def main() :
        combat()

        main()
