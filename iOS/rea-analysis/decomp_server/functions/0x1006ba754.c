// rea decompile_all
// name: FUN_1006ba754
// address: 0x1006ba754
// body: available
// range: 0x1006ba754-0x1006ba7c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ba754(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(long *)(param_1 + 0x180) = param_6 + 1;
  uVar1 = *param_5;
  *(undefined8 *)(param_1 + 0x18) = param_5[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = param_5[3];
  uVar1 = param_5[2];
  uVar4 = param_5[5];
  uVar3 = param_5[4];
  uVar5 = param_5[6];
  uVar7 = param_5[9];
  uVar6 = param_5[8];
  *(undefined8 *)(param_1 + 0x48) = param_5[7];
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  uVar2 = param_5[0xb];
  uVar1 = param_5[10];
  uVar4 = param_5[0xd];
  uVar3 = param_5[0xc];
  uVar5 = param_5[0xe];
  uVar7 = param_5[0x11];
  uVar6 = param_5[0x10];
  *(undefined8 *)(param_1 + 0x88) = param_5[0xf];
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  if (param_2 == 0) {
    FUN_1006b70ac(param_1,param_4);
  }
  else {
    FUN_1006b6ec4();
  }
  return;
}

