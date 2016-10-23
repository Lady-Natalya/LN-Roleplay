/** Roleplay Include File for Natalya's Roleplay Plugins */
/** Car Menu */
/** Updated 01/04/2015 */

public SharedPlugin:__pl_car_menu = 
{
	name = "car_menu",
	file = "car_menu.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public __pl_car_menu_SetNTVOptional()
{
	MarkNativeAsOptional("SpawnChair");
	MarkNativeAsOptional("IsEntityChair");
	MarkNativeAsOptional("GetCarOwner");
	MarkNativeAsOptional("IsClientDriving");
}
#endif

/** Double-include prevention */
#if defined _roleplay_cars_included_
  #endinput
#endif
#define _roleplay_cars_included_


/**
 * Spawn a Chair
 *
 * @param model		Chair model string.
 * @param skin		Skin number.
 * @param skin		Client who spawned the chair.
 * @return			Entity index.
 */
native SpawnChair(String:model[], skin, client);

/**
 * Is an entity a chair?
 *
 * @param entity	Entity index.
 * @return			Whether it's a chair or not.
 */
native IsEntityChair(entity);

/**
 * Car Owner
 *
 * @param car     Car Entity index.
 * @return           Who owns the car
 */
native GetCarOwner(car);

/**
 * Is client driving.
 *
 * @param client     Client index.
 * @return           True if driving, false otherwise.
 */
native bool:IsClientDriving(client);
