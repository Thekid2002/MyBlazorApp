﻿using GASLanguageProcessor.AST.Expressions;
using GASLanguageProcessor.TableType;

namespace GASLanguageProcessor.AST.Statements;

public class Return : Statement
{
    public Return(Expression expression)
    {
        Expression = expression;
    }

    public Expression Expression { get; protected set; }

    public override T Accept<T>(IAstVisitor<T> visitor, TypeEnv envT)
    {
        return visitor.VisitReturn(this, envT);
    }
}