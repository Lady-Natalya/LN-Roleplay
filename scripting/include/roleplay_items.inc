/** Roleplay Include File for Natalya's Roleplay Plugins */
/** Item Pack */
/** Updated 01/04/2015 */

public SharedPlugin:__pl_item_pack = 
{
	name = "item_pack",
	file = "item_pack.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_PLUGIN
public __pl_car_menu_SetNTVOptional()
{
	MarkNativeAsOptional("GetClientHat");
	MarkNativeAsOptional("GetClientHatEntity");
	MarkNativeAsOptional("SetHatEntityToParent");
}
#endif

/** Double-include prevention */
#if defined _roleplay_items_included_
  #endinput
#endif
#define _roleplay_items_included_


/**
 * Is the player wearing a hat?
 *
 * @param client     Player who you are checking.
 * @return           What type of hat they are wearing.
 */
native GetClientHat(client);

/**
 * If the player is wearing a hat, what entity is it?
 *
 * @param client     Player who you are checking.
 * @return           What hat entity they are wearing.
 */
native GetClientHatEntity(client);

/**
 * Is the player wearing a hat?
 *
 * @param hat			Hat entity index.
 * @param parententity	Entity index of new hat parent.
 * @param type			What type of hat it is.
 * @return				If the code executed successfully.
 */
native SetHatEntityToParent(hat, parententity, type);