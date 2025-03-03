﻿namespace GASLanguageProcessor.AST.Types;

public class NullType: ValueType
{
    public override string ToString()
    {
        return "Null";
    }

    public override bool Equals(GasType other)
    {
        return other is NullType;
    }
}
