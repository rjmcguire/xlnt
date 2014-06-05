#pragma once

#include "cell/cell.hpp"
#include "common/types.hpp"
#include "common/relationship.hpp"

namespace xlnt {

class style;

namespace detail {

struct worksheet_impl;
    
struct cell_impl
{
    cell_impl();
    cell_impl(worksheet_impl *parent, int column_index, int row_index);

    worksheet_impl *parent_;
    cell::type type_;
    long double numeric_value;
    std::string string_value;
    column_t column;
    row_t row;
    bool merged;
    style *style_;
    bool is_date_;
};
    
} // namespace detail
} // namespace xlnt
