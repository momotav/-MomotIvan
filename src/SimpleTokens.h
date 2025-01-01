#pragma once
#include "stdafx.h"
#include "Symbols.h"
#include "Core/Tokens/TokenBase.hpp"
#include "Core/Backus/BackusRuleBase.h"
#include "Core/Generator/GeneratorItemBase.h"

SimpleToken(Comma, ",");
SimpleToken(Colon, ":");
SimpleToken(Semicolon, ";");
SimpleToken(LBraket, "(");
SimpleToken(RBraket, ")");
SimpleToken(Plus, "+");
SimpleToken(Minus, "-");

SimpleToken(Start, "start");
class End : public TokenBase<End>, public BackusRuleBase<End>, public GeneratorItemBase<End>
{
    BASE_ITEM

public:
    End() { setLexeme("end"); };
    ~End() final = default;

    void genCode(std::ostream& out, GeneratorDetails& details,
        std::list<std::shared_ptr<IGeneratorItem>>::iterator& it,
        const std::list<std::shared_ptr<IGeneratorItem>>::iterator& end) const final
    {
        if (!customData().empty())
            out << customData() << std::endl;
    };
};
