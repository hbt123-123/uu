// rea decompile_all
// name: FUN_1003bbac8
// address: 0x1003bbac8
// body: available
// range: 0x1003bbac8-0x1003bbec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003bbac8(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = param_1 + 0xd;
  lVar4 = *plVar3;
  param_1[10] = param_2[10];
  uVar2 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar2;
  plVar6 = param_2 + 0xd;
  lVar1 = *plVar6;
  if (lVar4 == 0) {
    if (lVar1 == 0) {
      uVar2 = param_2[0xe];
      lVar1 = *plVar6;
      uVar7 = param_2[0x10];
      uVar5 = param_2[0xf];
      uVar9 = param_2[0x12];
      uVar8 = param_2[0x11];
      *(undefined4 *)((long)param_1 + 0x97) = *(undefined4 *)((long)param_2 + 0x97);
      param_1[0x10] = uVar7;
      param_1[0xf] = uVar5;
      param_1[0x12] = uVar9;
      param_1[0x11] = uVar8;
      param_1[0xe] = uVar2;
      *plVar3 = lVar1;
    }
    else {
      param_1[0xd] = lVar1;
      uVar2 = param_2[0xe];
      param_1[0xe] = uVar2;
      param_1[0xf] = param_2[0xf];
      uVar5 = param_2[0x10];
      param_1[0x10] = uVar5;
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
      *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 0x99);
      *(undefined1 *)((long)param_1 + 0x9a) = *(undefined1 *)((long)param_2 + 0x9a);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
    }
  }
  else if (lVar1 == 0) {
    FUN_1000abcec(plVar3);
    uVar8 = param_2[0x10];
    uVar7 = param_2[0xf];
    uVar5 = param_2[0x12];
    uVar2 = param_2[0x11];
    uVar9 = param_2[0xe];
    lVar1 = *plVar6;
    *(undefined4 *)((long)param_1 + 0x97) = *(undefined4 *)((long)param_2 + 0x97);
    param_1[0x10] = uVar8;
    param_1[0xf] = uVar7;
    param_1[0x12] = uVar5;
    param_1[0x11] = uVar2;
    param_1[0xe] = uVar9;
    *plVar3 = lVar1;
  }
  else {
    param_1[0xd] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    uVar2 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    param_1[0xf] = param_2[0xf];
    uVar2 = param_1[0x10];
    param_1[0x10] = param_2[0x10];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
    *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 0x99);
    *(undefined1 *)((long)param_1 + 0x9a) = *(undefined1 *)((long)param_2 + 0x9a);
  }
  plVar3 = param_1 + 0x14;
  lVar4 = *plVar3;
  plVar6 = param_2 + 0x14;
  lVar1 = *plVar6;
  if (lVar4 == 0) {
    if (lVar1 == 0) {
      uVar2 = param_2[0x15];
      lVar1 = *plVar6;
      uVar7 = param_2[0x17];
      uVar5 = param_2[0x16];
      uVar9 = param_2[0x19];
      uVar8 = param_2[0x18];
      *(undefined4 *)((long)param_1 + 0xcf) = *(undefined4 *)((long)param_2 + 0xcf);
      param_1[0x17] = uVar7;
      param_1[0x16] = uVar5;
      param_1[0x19] = uVar9;
      param_1[0x18] = uVar8;
      param_1[0x15] = uVar2;
      *plVar3 = lVar1;
    }
    else {
      param_1[0x14] = lVar1;
      uVar2 = param_2[0x15];
      param_1[0x15] = uVar2;
      param_1[0x16] = param_2[0x16];
      uVar5 = param_2[0x17];
      param_1[0x17] = uVar5;
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
      *(undefined1 *)((long)param_1 + 0xd1) = *(undefined1 *)((long)param_2 + 0xd1);
      *(undefined1 *)((long)param_1 + 0xd2) = *(undefined1 *)((long)param_2 + 0xd2);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar5);
    }
  }
  else if (lVar1 == 0) {
    FUN_1000abcec(plVar3);
    uVar8 = param_2[0x17];
    uVar7 = param_2[0x16];
    uVar5 = param_2[0x19];
    uVar2 = param_2[0x18];
    uVar9 = param_2[0x15];
    lVar1 = *plVar6;
    *(undefined4 *)((long)param_1 + 0xcf) = *(undefined4 *)((long)param_2 + 0xcf);
    param_1[0x17] = uVar8;
    param_1[0x16] = uVar7;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar2;
    param_1[0x15] = uVar9;
    *plVar3 = lVar1;
  }
  else {
    param_1[0x14] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    uVar2 = param_1[0x15];
    param_1[0x15] = param_2[0x15];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x16] = param_2[0x16];
    uVar2 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar2);
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
    *(undefined1 *)((long)param_1 + 0xd1) = *(undefined1 *)((long)param_2 + 0xd1);
    *(undefined1 *)((long)param_1 + 0xd2) = *(undefined1 *)((long)param_2 + 0xd2);
  }
  param_1[0x1b] = param_2[0x1b];
  uVar2 = param_1[0x1c];
  param_1[0x1c] = param_2[0x1c];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x1d] = param_2[0x1d];
  uVar2 = param_1[0x1e];
  param_1[0x1e] = param_2[0x1e];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x1f] = param_2[0x1f];
  uVar2 = param_1[0x20];
  param_1[0x20] = param_2[0x20];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}

