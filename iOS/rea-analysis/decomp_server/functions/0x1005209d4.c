// rea decompile_all
// name: FUN_1005209d4
// address: 0x1005209d4
// body: available
// range: 0x1005209d4-0x100520abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005209d4(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_4 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0x2000000000000000;
    uVar1 = 0xff;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_1001a2c70();
    if ((param_3 & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0x2000000000000000;
      uVar1 = 0xff;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + param_2 * 0x30);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar7 = puVar2[2];
      uVar5 = puVar2[4];
      uVar6 = puVar2[5];
      uVar1 = (ulong)*(byte *)(puVar2 + 3);
      FUN_10051fe90(uVar3,uVar4,uVar7);
      FUN_100008184(uVar5,uVar6);
    }
    _swift_bridgeObjectRelease(param_4);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}

