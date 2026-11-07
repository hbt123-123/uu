// rea decompile_all
// name: FUN_1000b9354
// address: 0x1000b9354
// body: available
// range: 0x1000b9354-0x1000b94ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b9400 to 0x1000c1d30 _$sSS4hash4intoys6HasherVz_tF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b9354(undefined8 param_1,ulong param_2,long param_3,byte param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_4 < 2) {
    if (param_4 == 0) {
      __ss6HasherV8_combineyySuF(0);
      lVar4 = *(long *)(param_2 + 0x10);
      __ss6HasherV8_combineyySuF(lVar4);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(param_2 + 0x28);
        do {
          uVar3 = puVar5[-1];
          uVar1 = *puVar5;
          _swift_bridgeObjectRetain(uVar1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
          _swift_bridgeObjectRelease(uVar1);
          puVar5 = puVar5 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      lVar4 = *(long *)(param_2 + 0x10);
      __ss6HasherV8_combineyySuF(lVar4);
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(param_2 + 0x28);
        do {
          uVar3 = puVar5[-1];
          uVar1 = *puVar5;
          _swift_bridgeObjectRetain(uVar1);
          __sSS4hash4intoys6HasherVz_tF(param_1,uVar3,uVar1);
          _swift_bridgeObjectRelease(uVar1);
          puVar5 = puVar5 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  else {
    if (param_4 == 2) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
      return;
    }
    uVar2 = param_3 + (ulong)(param_2 >= 2);
    if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_2 < 2))) {
      if (param_2 == 0 && param_3 == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 4;
      }
    }
    else if (param_2 == 2 && param_3 == 0) {
      uVar3 = 5;
    }
    else {
      uVar3 = 6;
    }
    __ss6HasherV8_combineyySuF(uVar3);
  }
  return;
}

