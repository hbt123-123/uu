// rea decompile_all
// name: FUN_10007c944
// address: 0x10007c944
// body: available
// range: 0x10007c944-0x10007cb6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10007c944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_1[7];
  if (lVar2 == 0) {
    if (param_2[7] != 0) {
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      uVar1 = param_2[8];
      param_1[8] = uVar1;
      lVar2 = param_2[0xc];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      if (lVar2 == 0) {
        uVar3 = param_2[10];
        uVar1 = param_2[9];
        uVar4 = param_2[0xb];
        param_1[0xc] = param_2[0xc];
        param_1[0xb] = uVar4;
        param_1[10] = uVar3;
        param_1[9] = uVar1;
      }
      else {
        param_1[0xc] = lVar2;
        (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 9,param_2 + 9,lVar2);
      }
      param_1[0xd] = param_2[0xd];
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    uVar3 = param_2[9];
    uVar1 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    uVar7 = param_2[0xd];
    uVar6 = param_2[0xc];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[0xd] = uVar7;
    param_1[0xc] = uVar6;
    param_1[9] = uVar3;
    param_1[8] = uVar1;
    return param_1;
  }
  if (param_2[7] == 0) {
    FUN_100065194(param_1 + 6);
    uVar1 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar1;
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar1 = param_2[0xc];
    uVar7 = param_2[9];
    uVar6 = param_2[8];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar1;
    param_1[9] = uVar7;
    param_1[8] = uVar6;
    return param_1;
  }
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(lVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_2[0xc];
  if (param_1[0xc] == 0) {
    if (lVar2 != 0) {
      param_1[0xc] = lVar2;
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 9,param_2 + 9);
      goto LAB_10007cb14;
    }
  }
  else {
    if (lVar2 != 0) {
      FUN_10007cb70(param_1 + 9,param_2 + 9);
      goto LAB_10007cb14;
    }
    FUN_100001428(param_1 + 9);
  }
  uVar3 = param_2[10];
  uVar1 = param_2[9];
  uVar4 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[9] = uVar1;
LAB_10007cb14:
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}

