// rea decompile_all
// name: FUN_100557670
// address: 0x100557670
// body: available
// range: 0x100557670-0x100557843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100557670(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 2;
  lVar4 = *plVar3;
  plVar6 = param_2 + 2;
  lVar1 = *plVar6;
  if (lVar4 == 0) {
    if (lVar1 == 0) {
      uVar2 = param_2[3];
      lVar1 = *plVar6;
      uVar5 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar5;
      param_1[7] = uVar8;
      param_1[6] = uVar7;
      param_1[3] = uVar2;
      *plVar3 = lVar1;
    }
    else {
      param_1[2] = lVar1;
      uVar2 = param_2[3];
      param_1[3] = uVar2;
      uVar5 = param_2[4];
      param_1[4] = uVar5;
      uVar7 = param_2[5];
      param_1[5] = uVar7;
      uVar8 = param_2[6];
      param_1[6] = uVar8;
      uVar9 = param_2[7];
      param_1[7] = uVar9;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar9);
    }
  }
  else if (lVar1 == 0) {
    FUN_10052a974(plVar3);
    uVar8 = param_2[5];
    uVar7 = param_2[4];
    uVar5 = param_2[7];
    uVar2 = param_2[6];
    lVar1 = *plVar6;
    param_1[3] = param_2[3];
    *plVar3 = lVar1;
    param_1[5] = uVar8;
    param_1[4] = uVar7;
    param_1[7] = uVar5;
    param_1[6] = uVar2;
  }
  else {
    param_1[2] = lVar1;
    _swift_retain();
    _swift_release(lVar4);
    uVar2 = param_1[3];
    param_1[3] = param_2[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = param_1[4];
    param_1[4] = param_2[4];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = param_1[5];
    param_1[5] = param_2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
  }
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}

