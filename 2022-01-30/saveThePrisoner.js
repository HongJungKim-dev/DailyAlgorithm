function saveThePrisoner(prisonerNum, candyNum, chairNumber) {
  const warningChairNumber = (chairNumber + candyNum - 1) % prisonerNum;

  return warningChairNumber === 0 ? prisonerNum : warningChairNumber;
}
