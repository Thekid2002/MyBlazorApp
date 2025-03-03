﻿using GASLanguageProcessor.AST.Expressions.Terms;
using GASLanguageProcessor.AST.Expressions.Terms.Identifiers;
using GASLanguageProcessor.AST.Statements;
using String = string;

namespace GASLanguageProcessor.TableType;

public class FuncEnv
{
    public FuncEnv(FuncEnv parent)
    {
        Parent = parent;
    }

    public FuncEnv(Store store, VarEnv? parentEnv = null, FuncEnv? parent = null)
    {
        Parent = parent;
    }

    public Dictionary<string, Function> Functions { get; protected set; } = new();

    public FuncEnv? Parent { get; set; }

    public FuncEnv EnterScope()
    {
        return new FuncEnv(this);
    }

    public FuncEnv ExitScope()
    {
        return Parent ?? this;
    }

    public bool Bind(string key, Function value)
    {
        if (Functions.ContainsKey(key)) return false;
        Functions.Add(key, value);
        return true;
    }

    public Function? LookUp(string key)
    {
        if (Functions.ContainsKey(key)) return Functions[key];
        return Parent?.LookUp(key);
    }
}