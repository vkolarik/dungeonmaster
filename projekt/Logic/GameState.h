//
// Created by root on 18.11.2022.
//

#ifndef PROJEKT_GAMESTATE_H
#define PROJEKT_GAMESTATE_H


class GameState {
private:
    bool m_needs_rerender[10] = {true, false, false, false, false, false, false, false, false, false};
public:
    bool needsRerender(int blockId);


};


#endif //PROJEKT_GAMESTATE_H
