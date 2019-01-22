#pragma once
#include "Node.h"

namespace Soup::Syntax
{
    /// <summary>
    /// The initializer declarator node
    /// </summary>
    export class InitializerDeclarator : public Node
    {
    private:
        std::shared_ptr<Node> m_declarator;
        std::shared_ptr<Node> m_initializer;

    public:
        InitializerDeclarator(
            std::shared_ptr<Node>&& declarator,
            std::shared_ptr<Node>&& initializer);

        /// <summary>
        /// Gets or sets the declarator
        /// </summary>
        const Node& GetDeclarator() const;

        /// <summary>
        /// Gets or sets the optional initializer
        /// </summary>
        const Node& GetInitializer() const;

        /// <summary>
        /// Equality operator
        /// </summary>
        bool operator ==(const InitializerDeclarator& rhs) const;
        bool operator !=(const InitializerDeclarator& rhs) const;

    protected:
        /// <summary>
        /// Node Equals
        /// </summary>
        virtual bool Equals(const Node& rhs) const final;
    };
}
