﻿using GASLanguageProcessor.TableType;

namespace GASLanguageProcessor.AST.Statements;

public class Compound : Statement
{
    public Compound(Statement statement1, Statement statement2)
    {
        Statement1 = statement1;
        Statement2 = statement2;
    }

    public Statement Statement1 { get; protected set; }
    public Statement Statement2 { get; protected set; }

    public override T Accept<T>(IAstVisitor<T> visitor, TypeEnv envT)
    {
        return visitor.VisitCompound(this, envT);
    }
}