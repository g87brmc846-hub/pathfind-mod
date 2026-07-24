#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
public:
    void onMoreGames(CCObject* sender) {
        FLAlertLayer::create(title: "hello", btn: "OK")->show();
    }
};
