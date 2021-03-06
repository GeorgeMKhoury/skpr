% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/get_attribute.R
\name{get_attribute}
\alias{get_attribute}
\title{Get attribute values}
\usage{
get_attribute(output, attr = NULL, round = TRUE)
}
\arguments{
\item{output}{The output of either `gen_design()` or `eval_design()`/`eval_design_mc()``}

\item{attr}{Default `NULL`. Return just the specific value requested.
Potential values are `model.matrix` for model used, `moments.matrix`, `variance.matrix`, `alias.matrix`,
`correlation.matrix`, and `model` for the model used in the evaluation/generation of the design.}

\item{round}{Default `TRUE`. Rounds off values smaller than the magnitude `1e-15`` in the `correlation.matrix` and `alias.matrix` matrix attributes.}
}
\value{
A list of attributes.
}
\description{
Returns one or more of underlying attributes used in design generation/evaluation
}
\examples{
# We can extract the attributes of a design from either the output of `gen_design()`
# or the output of `eval_design()`

factorialcoffee = expand.grid(cost = c(1, 2),
                             type = as.factor(c("Kona", "Colombian", "Ethiopian", "Sumatra")),
                             size = as.factor(c("Short", "Grande", "Venti")))

designcoffee = gen_design(factorialcoffee, ~cost + size + type, trials = 29,
                         optimality = "D", repeats = 100)

#Extract a list of all attributes
get_attribute(designcoffee)

#Get just one attribute
get_attribute(designcoffee,"model.matrix")

# Extract from `eval_design()` output
power_output = eval_design(designcoffee, model = ~cost + size + type,
                          alpha = 0.05, detailedoutput = TRUE)

get_attribute(power_output,"correlation.matrix")
}
