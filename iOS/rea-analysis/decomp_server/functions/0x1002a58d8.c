// rea decompile_all
// name: FUN_1002a58d8
// address: 0x1002a58d8
// body: available
// range: 0x1002a58d8-0x1002a59fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1002a58d8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  plVar4 = param_1 + 4;
  plVar5 = param_2 + 4;
  lVar1 = *plVar5;
  if (*plVar4 == 0) {
    if (lVar1 == 0) {
      uVar3 = param_2[5];
      lVar1 = *plVar5;
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      *plVar4 = lVar1;
    }
    else {
      param_1[4] = lVar1;
      uVar3 = param_2[6];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      _swift_retain(uVar3);
    }
  }
  else if (lVar1 == 0) {
    FUN_100040bb4(plVar4,&DAT_100a82be0,&DAT_1008171b8);
    uVar3 = param_2[6];
    lVar1 = *plVar5;
    param_1[5] = param_2[5];
    *plVar4 = lVar1;
    param_1[6] = uVar3;
  }
  else {
    param_1[4] = lVar1;
    uVar3 = param_2[6];
    uVar2 = param_1[6];
    param_1[5] = param_2[5];
    param_1[6] = uVar3;
    _swift_retain();
    _swift_release(uVar2);
  }
  return param_1;
}

