#include "score.h"

Score::Score():point(0)
{

}
Score Score::operator++(){
    this->point++;
}

