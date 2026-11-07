// rea decompile_all
// name: FUN_100555a88
// address: 0x100555a88
// body: available
// range: 0x100555a88-0x100555b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100555a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_2[3];
  if (lVar2 == 0) {
    uVar3 = *param_2;
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    param_1[4] = param_2[4];
  }
  else {
    uVar3 = param_2[4];
    param_1[3] = lVar2;
    param_1[4] = uVar3;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
  }
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  uVar3 = param_2[0xd];
  uVar8 = param_2[0xe];
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar8;
  uVar7 = param_2[0xf];
  uVar1 = param_2[0x10];
  param_1[0xf] = uVar7;
  param_1[0x10] = uVar1;
  uVar5 = param_2[0x11];
  param_1[0x11] = uVar5;
  uVar4 = param_2[0x14];
  uVar6 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar6;
  param_1[0x14] = uVar4;
  _swift_retain();
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}

