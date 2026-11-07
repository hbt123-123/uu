// rea decompile_all
// name: FUN_1000aba58
// address: 0x1000aba58
// body: available
// range: 0x1000aba58-0x1000abceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1000aba58(undefined8 *param_1,undefined8 *param_2)

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
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[9] = param_2[9];
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xb] = param_2[0xb];
  uVar2 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  uVar2 = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  param_1[0xf] = uVar2;
  param_1[0x11] = param_2[0x11];
  uVar2 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 0x13;
  lVar4 = *plVar3;
  plVar6 = param_2 + 0x13;
  lVar1 = *plVar6;
  if (lVar4 == 0) {
    if (lVar1 == 0) {
      uVar2 = param_2[0x14];
      lVar1 = *plVar6;
      uVar7 = param_2[0x16];
      uVar5 = param_2[0x15];
      uVar9 = param_2[0x18];
      uVar8 = param_2[0x17];
      *(undefined4 *)((long)param_1 + 199) = *(undefined4 *)((long)param_2 + 199);
      param_1[0x16] = uVar7;
      param_1[0x15] = uVar5;
      param_1[0x18] = uVar9;
      param_1[0x17] = uVar8;
      param_1[0x14] = uVar2;
      *plVar3 = lVar1;
    }
    else {
      param_1[0x13] = lVar1;
      uVar2 = param_2[0x14];
      param_1[0x14] = uVar2;
      param_1[0x15] = param_2[0x15];
      uVar5 = param_2[0x16];
      param_1[0x16] = uVar5;
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
      *(undefined1 *)((long)param_1 + 0xc9) = *(undefined1 *)((long)param_2 + 0xc9);
      *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
    }
  }
  else if (lVar1 == 0) {
    FUN_1000abcec(plVar3);
    uVar8 = param_2[0x16];
    uVar7 = param_2[0x15];
    uVar5 = param_2[0x18];
    uVar2 = param_2[0x17];
    uVar9 = param_2[0x14];
    lVar1 = *plVar6;
    *(undefined4 *)((long)param_1 + 199) = *(undefined4 *)((long)param_2 + 199);
    param_1[0x16] = uVar8;
    param_1[0x15] = uVar7;
    param_1[0x18] = uVar5;
    param_1[0x17] = uVar2;
    param_1[0x14] = uVar9;
    *plVar3 = lVar1;
  }
  else {
    param_1[0x13] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    uVar2 = param_1[0x14];
    param_1[0x14] = param_2[0x14];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x15] = param_2[0x15];
    uVar2 = param_1[0x16];
    param_1[0x16] = param_2[0x16];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
    *(undefined1 *)((long)param_1 + 0xc9) = *(undefined1 *)((long)param_2 + 0xc9);
    *(undefined1 *)((long)param_1 + 0xca) = *(undefined1 *)((long)param_2 + 0xca);
  }
  return param_1;
}

