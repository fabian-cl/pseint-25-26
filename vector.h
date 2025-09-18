/**
 * Author: ...
 * Description: ...
 */

// 2 varible vector integer 
struct ivector2 {
    int x,y;
};

// 2 varible vector float
struct fvector2 {
    float x,y;
};

// 2 varible vector double (64 bits)
struct dvector2 {
    double x,y;
};

struct ivector3 {
    int x,y,z;
};

struct fvector3 {
    float x,y,z;
};

struct dvector3 {
    double x,y,z;
};

// ivector methods
void ivector2_add(ivector2 v, ivector2 u, ivector2& res);
void ivector2_sub(ivector2 v, ivector2 u, ivector2& res);

void fvector2_add(fvector2 v, fvector2 u, fvector2& res);
void fvector2_sub(fvector2 v, fvector2 u, fvector2& res);

// IMPLEMENTATION

void ivector2_add(ivector2 v, ivector2 u, ivector2& res)
{
    res.x = v.x + u.x;
    res.y = v.y + u.y;
}

void ivector2_sub(ivector2 v, ivector2 u, ivector2& res)
{
    res.x = v.x - u.x;
    res.y = v.y - u.y;
}

void fvector2_add(fvector2 v, fvector2 u, fvector2& res)
{
    res.x = v.x + u.x;
    res.y = v.y + u.y;
}

void fvector2_sub(fvector2 v, fvector2 u, fvector2& res)
{
    res.x = v.x - u.x;
    res.y = v.y - u.y;
}