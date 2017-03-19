/*
  @overload <%=name%>()
  @return [Integer]

  <%= description %>
*/
static VALUE
<%=c_func%>(VALUE self)<% set n_arg:0 %>
{
    <%=struct%> *w;

    TypedData_Get_Struct(self, <%=struct%>, &<%=data_type_var%>, w);

    return UINT2NUM(<%=func_name%>(w));
}
