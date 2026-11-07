// rea decompile_all
// name: FUN_10037ca4c
// address: 0x10037ca4c
// body: available
// range: 0x10037ca4c-0x10037cbbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037cbb8 to 0x1007de08c ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037ca4c(long *param_1,ulong param_2,int param_3)

{
  runtime_error *this;
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  char *pcVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  runtime_error *prVar9;
  ulong uVar10;
  
  if (param_3 != 0) {
    param_1[9] = param_1[7];
  }
  lVar8 = param_1[8];
  uVar6 = lVar8 - param_1[7];
  uVar2 = param_2 - uVar6;
  if (uVar6 <= param_2 && uVar2 != 0) {
    uVar1 = *(uint *)(param_1[4] + 4);
    uVar10 = 0x10 - (ulong)uVar1;
    uVar6 = 0;
    if (uVar10 <= uVar2) {
      uVar6 = (uVar2 + uVar1) - 1 & 0xfffffffffffffff0;
    }
    this = (runtime_error *)(uVar2 + 0xf & 0xfffffffffffffff0);
    if (uVar1 != 0) {
      this = (runtime_error *)(uVar6 + uVar10);
    }
    if ((runtime_error *)(param_1[1] - param_1[3]) <= this) {
      this = (runtime_error *)(param_1[1] - param_1[3]);
    }
    lVar7 = param_1[6];
    prVar9 = (runtime_error *)(lVar7 - lVar8);
    if (((prVar9 < this) && (param_1[9] != 0)) &&
       (uVar2 = param_1[9] & 0xfffffffffffffff0, uVar2 != 0)) {
      _memmove((void *)param_1[5],(void *)(param_1[5] + uVar2),lVar8 - uVar2);
      lVar7 = param_1[6];
      lVar8 = param_1[8] - uVar2;
      prVar9 = (runtime_error *)(lVar7 - lVar8);
      param_1[7] = param_1[7] - uVar2;
      param_1[8] = lVar8;
      param_1[9] = 0;
    }
    if (prVar9 < this) {
      pvVar3 = _realloc((void *)param_1[5],(size_t)(this + lVar7));
      if (pvVar3 == (void *)0x0) {
        pcVar4 = (char *)0x10;
        ___cxa_allocate_exception();
        piVar5 = ___error();
        _strerror(*piVar5);
        std::runtime_error::runtime_error(this,pcVar4);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pcVar4,PTR_typeinfo_100995140,PTR__runtime_error_1009950f8);
      }
      param_1[5] = (long)pvVar3;
      param_1[6] = (long)(this + lVar7);
      lVar8 = param_1[8];
    }
    else {
      pvVar3 = (void *)param_1[5];
    }
    FUN_100392ce0(param_1[4],*param_1 + param_1[3],(long)pvVar3 + lVar8,this);
    param_1[3] = (long)(this + param_1[3]);
    param_1[8] = (long)(this + param_1[8]);
  }
  return;
}

