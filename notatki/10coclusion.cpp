/*
Cast             | Conv. | Reint. | Upcast | Downcast | Type qual. |
--------------------------------------------------------------------
implicit         | yes   |        | yes    |          |            |
static_cast      | yes   |        | yes    | yes      |            |
dynamic_cast     |       |        | yes    | yes      |            |
const_cast       |       |        |        |          | yes        |
reinterpret_cast |       | yes    | yes    | yes      |            |
--------------------------------------------------------------------
legacy C cast    | yes   | yes    | yes    | yes      | yes        |


Cast             | Semantic check | Reliable at run | Tested at run |
--------------------------------------------------------------------
implicit         | yes            | yes             |               |
static_cast      | yes            |                 |               |
dynamic_cast     | yes            | yes             | yes           |
const_cast       |                |                 |               |
reinterpret_cast |                |                 |               |
--------------------------------------------------------------------
legacy C cast    |                |                 |               |
*/