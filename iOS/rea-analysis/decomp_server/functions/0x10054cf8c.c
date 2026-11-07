// rea decompile_all
// name: FUN_10054cf8c
// address: 0x10054cf8c
// body: available
// range: 0x10054cf8c-0x10054d1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10054d1e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10054cf8c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  size_t sVar8;
  size_t sVar9;
  uint uVar10;
  ulong uVar11;
  long local_78;
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = *param_2;
  uVar11 = param_2[1];
  uVar5 = (uint)(uVar11 >> 0x20);
  uVar10 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar10 == 0) {
      FUN_100006cdc(lVar1,uVar11);
      local_70._0_7_ = (undefined7)uVar11;
      local_78 = lVar1;
      _memset(&local_78,(int)param_3,uVar11 >> 0x30 & 0xff);
      uVar11 = local_70 & 0xffffffffffffff;
    }
    else {
      _swift_retain(uVar11 & 0x3fffffffffffffff);
      FUN_100006cdc(lVar1,uVar11);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      local_78 = lVar1;
      local_70 = uVar11 & 0x3fffffffffffffff;
      FUN_100006cdc(0,0xc000000000000000);
      FUN_10054d1f0(param_1,&local_78,param_3);
      uVar11 = local_70 | 0x4000000000000000;
    }
    *param_2 = local_78;
    param_2[1] = uVar11;
  }
  else if (uVar10 == 2) {
    _swift_retain(lVar1);
    _swift_retain(uVar11 & 0x3fffffffffffffff);
    FUN_100006cdc(lVar1,uVar11);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    sVar8 = 0;
    local_78 = lVar1;
    local_70 = uVar11 & 0x3fffffffffffffff;
    FUN_100006cdc(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    uVar11 = local_70;
    lVar6 = local_78;
    lVar1 = *(long *)(local_78 + 0x10);
    lVar2 = *(long *)(local_78 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (sVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10054d1f0);
      (*pcVar7)();
    }
    sVar9 = sVar8;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar3 = lVar1 - sVar9;
    if (SBORROW8(lVar1,sVar9)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10054d1e4);
      (*pcVar7)();
    }
    sVar4 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10054d1e8);
      (*pcVar7)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if ((long)sVar4 <= (long)sVar9) {
      sVar9 = sVar4;
    }
    _memset((void *)(sVar8 + lVar3),(int)param_3,sVar9);
    *param_2 = lVar6;
    param_2[1] = uVar11 | 0x8000000000000000;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

