﻿using GASLanguageProcessor.AST.Expressions.Terms.Identifiers;
using GASLanguageProcessor.TableType;

namespace GASLanguageProcessor.AST.Expressions.Terms;

public class GetFromArray : Term
{
    public GetFromArray(Identifier listIdentifier, Expression index)
    {
        ListIdentifier = listIdentifier;
        Index = index;
    }

    public Expression Index { get; protected set; }
    public Identifier ListIdentifier { get; protected set; }

    public override T Accept<T>(IAstVisitor<T> visitor, TypeEnv envT)
    {
        return visitor.VisitGetFromArray(this, envT);
    }
}
