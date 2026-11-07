// rea decompile_all
// name: FUN_1002482a4
// address: 0x1002482a4
// body: available
// range: 0x1002482a4-0x10024843f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024843c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002482a4(long param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char local_49;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100a7de28 != -1) {
    _swift_once(&DAT_100a7de28,FUN_100247e2c);
  }
  uVar8 = 0xd000000000000021;
  uVar9 = 0x80000001008a6f70;
  lVar4 = param_1;
  uVar5 = param_2;
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_1,param_2,0);
  if (uVar5 >> 0x3c < 0xf) {
    local_49 = '\0';
    uVar1 = (uint)(uVar5 >> 0x20);
    uVar7 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      lVar6 = 0;
      if (uVar7 != 0) {
        lVar6 = (long)(int)lVar4;
      }
    }
    else {
      lVar6 = 0;
      if (uVar7 == 2) {
        lVar6 = *(long *)(lVar4 + 0x10);
      }
    }
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100248438);
      (*pcVar3)();
    }
    if (lVar6 + 1 < lVar6) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10024843c);
      (*pcVar3)();
    }
    __s10Foundation4DataV16_copyBytesHelper2to4fromySv_SnySiGtF
              (&local_49,lVar6,lVar6 + 1,lVar4,uVar5);
    if (local_49 == '\x01') {
      uVar9 = 0x80000001008a6fd0;
      uVar8 = 0xd000000000000022;
    }
    else if (local_49 == '\x10') {
      uVar9 = 0x80000001008a6fa0;
      uVar8 = 0xd000000000000029;
    }
    FUN_100006cc8(lVar4,uVar5);
  }
  uVar2 = DAT_100b36398;
  DAT_100b36390 = uVar8;
  DAT_100b36398 = uVar9;
  _swift_bridgeObjectRelease(uVar2);
  uVar8 = DAT_100b363a8;
  DAT_100b363a0 = param_1;
  DAT_100b363a8 = param_2;
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRetain(param_2);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

