// rea decompile_all
// name: FUN_100083f60
// address: 0x100083f60
// body: available
// range: 0x100083f60-0x100084103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100083f60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar5 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar5;
  param_1[5] = uVar1;
  lVar2 = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_retain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  if (lVar2 == 0) {
    uVar4 = param_2[10];
    uVar6 = param_2[0xd];
    uVar5 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar6;
    param_1[0xc] = uVar5;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    uVar6 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
  }
  else {
    param_1[6] = param_2[6];
    param_1[7] = lVar2;
    uVar4 = param_2[8];
    param_1[8] = uVar4;
    lVar3 = param_2[0xc];
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar4);
    if (lVar3 == 0) {
      uVar4 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar4;
      uVar4 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar4;
    }
    else {
      param_1[0xc] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 9,param_2 + 9,lVar3);
    }
    param_1[0xd] = param_2[0xd];
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    _swift_bridgeObjectRetain();
  }
  param_1[0xf] = param_2[0xf];
  lVar2 = param_2[0x11];
  _swift_bridgeObjectRetain();
  if (lVar2 == 0) {
    uVar4 = param_2[0x14];
    uVar6 = param_2[0x17];
    uVar5 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar4;
    param_1[0x17] = uVar6;
    param_1[0x16] = uVar5;
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    uVar6 = param_2[0x10];
    uVar5 = param_2[0x13];
    uVar4 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar5;
    param_1[0x12] = uVar4;
  }
  else {
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar2;
    uVar4 = param_2[0x12];
    param_1[0x12] = uVar4;
    lVar3 = param_2[0x16];
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(uVar4);
    if (lVar3 == 0) {
      uVar4 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar4;
      uVar4 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
    }
    else {
      param_1[0x16] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 0x13,param_2 + 0x13,lVar3);
    }
    param_1[0x17] = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    _swift_bridgeObjectRetain();
  }
  return param_1;
}

