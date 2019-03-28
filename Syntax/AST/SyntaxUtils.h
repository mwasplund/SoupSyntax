
#pragma once

namespace Soup::Syntax
{
    /// <summary>
    /// Syntax tree utilities
    /// </summary>
    export class SyntaxUtils
    {
    public:
        /// <summary>
        /// Helper method to check if two nullable types are either both nulll
        /// or both have equal values.
        /// </summary>
        template<typename T>
        static bool AreOptionalValuesEqual(
            const std::shared_ptr<T>& lhs,
            const std::shared_ptr<T>& rhs)
        {
            // Equal if both are null or if both have equal values
            if (lhs == nullptr || rhs == nullptr)
            {
                return lhs == nullptr && rhs == nullptr;
            }
            else
            {
                return *lhs == *rhs;
            }
        }

        /// <summary>
        /// Helper method to check if two vectors of pointer values are equal
        /// </summary>
        template<typename T>
        static bool AreListsEqual(
            const std::vector<std::shared_ptr<T>>& lhs,
            const std::vector<std::shared_ptr<T>>& rhs)
        {
            return lhs.size() == rhs.size() &&
                std::equal(
                    begin(lhs),
                    end(lhs),
                    begin(rhs),
                    end(rhs),
                    [](const std::shared_ptr<T>& lhs, const std::shared_ptr<T>& rhs)
                    {
                        return *lhs == *rhs;
                    });
        }
    };
}
