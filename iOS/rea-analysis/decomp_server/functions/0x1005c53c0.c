// rea decompile_all
// name: FUN_1005c53c0
// address: 0x1005c53c0
// body: available
// range: 0x1005c53c0-0x1005c5497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005c53c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar7;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar3 = param_2[9];
  uVar5 = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  FUN_100008184(uVar3,uVar5);
  param_1[9] = uVar3;
  param_1[10] = uVar5;
  lVar6 = param_2[0xc];
  if (lVar6 == 0) {
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    uVar7 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar7;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar6;
    uVar7 = param_2[0xd];
    uVar1 = param_2[0xe];
    _swift_bridgeObjectRetain();
    FUN_100008184(uVar7,uVar1);
    param_1[0xd] = uVar7;
    param_1[0xe] = uVar1;
  }
  return param_1;
}

