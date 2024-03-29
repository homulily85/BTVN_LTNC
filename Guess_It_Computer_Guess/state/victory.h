#ifndef VICTORY_H
#define VICTORY_H

#include "game_state.h"
#include "game_object.h"
#include <vector>
#include "play_state.h"

class Victory : public Game_state
{
public:
	Victory() =default;
	~Victory() { clean(); }
	void clean();
	virtual void update();
	virtual void render();
	virtual bool on_start();
	virtual bool on_exit();
	virtual std::string get_state_ID() { return m_state_ID; }

private:
	static const std::string m_state_ID;
	std::vector <Game_object*> m_object{};
	static void replay();
};

#endif // !VICTORY_H
