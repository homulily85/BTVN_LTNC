#ifndef PLAY_STATE_H
#define PLAY_STATE_H

#include "game_state.h"
#include "game_object.h"
#include <vector>

class Play_state :public Game_state
{
public:
	Play_state() = default;
	~Play_state() { clean(); reset(); }
	void clean();
	virtual void update();
	virtual void render();
	virtual bool on_start();
	virtual bool on_exit();
	virtual std::string get_state_ID() { return m_state_ID; }
private:
	static const std::string m_state_ID;
	std::vector <Game_object*> m_object{};
	static void lower();
	static void higher();
	static void equal();
	static int m_current_answer;
	static int m_lower_bound;
	static int m_higher_bound;
	static void change_answer_lower();
	static void change_answer_higher();
	static void check_answer();
	void reset();
};

#endif // !PLAY_STATE_H
