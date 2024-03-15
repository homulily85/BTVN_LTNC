#include "play_state.h"
#include <iostream>
#include "game.h"
#include "menu_button.h"
#include "const.h"
#include "Vector2D.h"
#include "input_handle.h"
#include "game_over.h"
#include "victory.h"

using namespace std::string_literals;

const std::string Play_state::m_state_ID{ "PLAY_STATE"s };
int Play_state::m_current_answer { 50 };
int Play_state::m_lower_bound { 1 };
int Play_state::m_higher_bound { 100 };

void Play_state::clean()
{
	for (int i = 0; i < m_object.size(); i++) {
		if (m_object[i] != nullptr)
		{
			delete m_object[i];
			m_object[i] = nullptr;
		}
	}
}

void Play_state::update()
{
	for (int i = 0; i < m_object.size(); i++) {
		if (!m_exit && m_object[i] != nullptr)  m_object[i]->update();
		else return;
	}
}

void Play_state::render()
{
	for (int i = 0; i < m_object.size(); i++) {
		if (!m_exit && m_object[i] != nullptr)  m_object[i]->draw();
		else return;
	}
	switch (m_current_answer)
	{
	case 1:
		Texture_manager::instance()->draw("1"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 2:
		Texture_manager::instance()->draw("2"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 3:
		Texture_manager::instance()->draw("3"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 4:
		Texture_manager::instance()->draw("4"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 5:
		Texture_manager::instance()->draw("5"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 6:
		Texture_manager::instance()->draw("6"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 7:
		Texture_manager::instance()->draw("7"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 8:
		Texture_manager::instance()->draw("8"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 9:
		Texture_manager::instance()->draw("9"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 10:
		Texture_manager::instance()->draw("10"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 11:
		Texture_manager::instance()->draw("11"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 12:
		Texture_manager::instance()->draw("12"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 13:
		Texture_manager::instance()->draw("13"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 14:
		Texture_manager::instance()->draw("14"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 15:
		Texture_manager::instance()->draw("15"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 16:
		Texture_manager::instance()->draw("16"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 17:
		Texture_manager::instance()->draw("17"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 18:
		Texture_manager::instance()->draw("18"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 19:
		Texture_manager::instance()->draw("19"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 20:
		Texture_manager::instance()->draw("20"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 21:
		Texture_manager::instance()->draw("21"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 22:
		Texture_manager::instance()->draw("22"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 23:
		Texture_manager::instance()->draw("23"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 24:
		Texture_manager::instance()->draw("24"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 25:
		Texture_manager::instance()->draw("25"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 26:
		Texture_manager::instance()->draw("26"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 27:
		Texture_manager::instance()->draw("27"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 28:
		Texture_manager::instance()->draw("28"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 29:
		Texture_manager::instance()->draw("29"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 30:
		Texture_manager::instance()->draw("30"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 31:
		Texture_manager::instance()->draw("31"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 32:
		Texture_manager::instance()->draw("32"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 33:
		Texture_manager::instance()->draw("33"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 34:
		Texture_manager::instance()->draw("34"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 35:
		Texture_manager::instance()->draw("35"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 36:
		Texture_manager::instance()->draw("36"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 37:
		Texture_manager::instance()->draw("37"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 38:
		Texture_manager::instance()->draw("38"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 39:
		Texture_manager::instance()->draw("39"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 40:
		Texture_manager::instance()->draw("40"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 41:
		Texture_manager::instance()->draw("41"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 42:
		Texture_manager::instance()->draw("42"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 43:
		Texture_manager::instance()->draw("43"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 44:
		Texture_manager::instance()->draw("44"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 45:
		Texture_manager::instance()->draw("45"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 46:
		Texture_manager::instance()->draw("46"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 47:
		Texture_manager::instance()->draw("47"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 48:
		Texture_manager::instance()->draw("48"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 49:
		Texture_manager::instance()->draw("49"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 50:
		Texture_manager::instance()->draw("50"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 51:
		Texture_manager::instance()->draw("51"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 52:
		Texture_manager::instance()->draw("52"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 53:
		Texture_manager::instance()->draw("53"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 54:
		Texture_manager::instance()->draw("54"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 55:
		Texture_manager::instance()->draw("55"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 56:
		Texture_manager::instance()->draw("56"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 57:
		Texture_manager::instance()->draw("57"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 58:
		Texture_manager::instance()->draw("58"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 59:
		Texture_manager::instance()->draw("59"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 60:
		Texture_manager::instance()->draw("60"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 61:
		Texture_manager::instance()->draw("61"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 62:
		Texture_manager::instance()->draw("62"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 63:
		Texture_manager::instance()->draw("63"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 64:
		Texture_manager::instance()->draw("64"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 65:
		Texture_manager::instance()->draw("65"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 66:
		Texture_manager::instance()->draw("66"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 67:
		Texture_manager::instance()->draw("67"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 68:
		Texture_manager::instance()->draw("68"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 69:
		Texture_manager::instance()->draw("69"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 70:
		Texture_manager::instance()->draw("70"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 71:
		Texture_manager::instance()->draw("71"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 72:
		Texture_manager::instance()->draw("72"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 73:
		Texture_manager::instance()->draw("73"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 74:
		Texture_manager::instance()->draw("74"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 75:
		Texture_manager::instance()->draw("75"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 76:
		Texture_manager::instance()->draw("76"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 77:
		Texture_manager::instance()->draw("77"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 78:
		Texture_manager::instance()->draw("78"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 79:
		Texture_manager::instance()->draw("79"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 80:
		Texture_manager::instance()->draw("80"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 81:
		Texture_manager::instance()->draw("81"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 82:
		Texture_manager::instance()->draw("82"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 83:
		Texture_manager::instance()->draw("83"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 84:
		Texture_manager::instance()->draw("84"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 85:
		Texture_manager::instance()->draw("85"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 86:
		Texture_manager::instance()->draw("86"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 87:
		Texture_manager::instance()->draw("87"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 88:
		Texture_manager::instance()->draw("88"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 89:
		Texture_manager::instance()->draw("89"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 90:
		Texture_manager::instance()->draw("90"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 91:
		Texture_manager::instance()->draw("91"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 92:
		Texture_manager::instance()->draw("92"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 93:
		Texture_manager::instance()->draw("93"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 94:
		Texture_manager::instance()->draw("94"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 95:
		Texture_manager::instance()->draw("95"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 96:
		Texture_manager::instance()->draw("96"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 97:
		Texture_manager::instance()->draw("97"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 98:
		Texture_manager::instance()->draw("98"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 99:
		Texture_manager::instance()->draw("99"s, 850, 165, 90, 90, game::instance()->get_renderer());
		break;
	case 100:
		Texture_manager::instance()->draw("100"s, 850, 165, 116, 90, game::instance()->get_renderer());
		break;
	default:
		break;
	}
}

bool Play_state::on_start()
{
	if(!Texture_manager::instance()->load("pic/game_play_background.png"s, "game_play_background"s, game::instance()->get_renderer())) return false;
	if (!Texture_manager::instance()->load("pic/lower.png"s, "lower"s, game::instance()->get_renderer())) return false;
	if (!Texture_manager::instance()->load("pic/higher.png"s, "higher"s, game::instance()->get_renderer())) return false;
	if (!Texture_manager::instance()->load("pic/equal.png"s, "equal"s, game::instance()->get_renderer())) return false;
	
	for (int i = 1; i <= 100; i++) {
		if (!Texture_manager::instance()->load("pic/number/"s + std::to_string(i) + ".png"s, std::to_string(i), game::instance()->get_renderer())) return false;
	}

	m_object.push_back(new Game_object("game_play_background"s, 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT));
	m_object.push_back(new Menu_button("lower"s, WINDOW_WIDTH * 0.35, WINDOW_HEIGHT * 0.60, 84, 84, lower));
	m_object.push_back(new Menu_button("higher"s, WINDOW_WIDTH * 0.65, WINDOW_HEIGHT * 0.60, 84, 84, higher));
	m_object.push_back(new Menu_button("equal"s, WINDOW_WIDTH * 0.5, WINDOW_HEIGHT * 0.60, 84, 84, equal));
}

bool Play_state::on_exit()
{
	clean();
	m_object.clear();
	Texture_manager::instance()->remove_from_texture_map("game_play_background");
	Texture_manager::instance()->remove_from_texture_map("replay_button");
	Texture_manager::instance()->remove_from_texture_map("lower");
	Texture_manager::instance()->remove_from_texture_map("higher");
	Texture_manager::instance()->remove_from_texture_map("equal");
	for (int i = 1; i <= 100; i++) {
		Texture_manager::instance()->remove_from_texture_map(std::to_string(i));
	}

	return true;
}

void Play_state::lower()
{
	change_answer_higher();
	check_answer();
}

void Play_state::higher()
{
	change_answer_lower();
	check_answer();
}

void Play_state::equal()
{
	game::instance()->get_game_state_manager()->replace(new Victory);
}

void Play_state::change_answer_lower()
{
	m_higher_bound = m_current_answer-1;
	m_current_answer = (m_lower_bound + m_higher_bound) / 2;
}

void Play_state::change_answer_higher()
{	
	m_lower_bound = m_current_answer+1;
	m_current_answer = (m_lower_bound + m_higher_bound) / 2;
}

void Play_state::check_answer()
{
	if (m_lower_bound > m_higher_bound) {
		game::instance()->get_game_state_manager()->replace(new Game_over);
	}
}

void Play_state::reset()
{
	m_current_answer = 50;
	m_lower_bound = 1;
	m_higher_bound = 100;
}
