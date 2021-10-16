
// Asymtotically unbiased estimator for autocorrelation
// Divide by M-i for unbiased estimator but high variance

double * TimeAC(double *x)
{

for(int i=1;i<=M;i++){
*(x+i) = dot()
}

return *px;
}
 

double dot(double *x,double *y){

	double res;
 for(int i=0;i<length(x);i++){}
   res=
}

void rev(double *x){


}

TimeAC <- function(x)
{
M <-length(x)
r <- array(0, dim = c(M))  # One-sided autocorrelation
#rr <- array(0, dim = c((2*M)))  # Two-sided autocorrelation

for (i in 1:M) 
  {
  r[i]=(x[1:(M-i+1)]%*%x[i:M])    # Dot product in r
}

rr=c(rev(r[2:M]),r[1:M]) 
return(rr/M)
#return(rr)
}
