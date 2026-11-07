// rea decompile_all
// name: thunk_FUN_100583dc8
// address: 0x1005b3328
// body: available
// range: 0x1005b3328-0x1005b332b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100583dc8(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    lVar1 = param_1[0x10];
    uVar9 = param_1[1];
    uVar7 = *param_1;
    uVar5 = param_1[3];
    uVar3 = param_1[2];
    FUN_100541944(*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x40));
    *(undefined8 *)(lVar1 + 0x40) = uVar5;
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    *(undefined8 *)(lVar1 + 0x30) = uVar9;
    *(undefined8 *)(lVar1 + 0x28) = uVar7;
  }
  else {
    lVar1 = param_1[0x10];
    param_1[9] = param_1[1];
    param_1[8] = *param_1;
    param_1[0xb] = param_1[3];
    param_1[10] = param_1[2];
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    uVar5 = *(undefined8 *)(lVar1 + 0x38);
    uVar9 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = param_1[9];
    uVar6 = param_1[8];
    uVar4 = param_1[0xb];
    uVar2 = param_1[10];
    FUN_1005a7f80(param_1 + 8,param_1 + 0xc);
    FUN_100541944(uVar3,uVar7,uVar5,uVar9);
    *(undefined8 *)(lVar1 + 0x40) = uVar4;
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    *(undefined8 *)(lVar1 + 0x30) = uVar8;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    param_1[5] = param_1[1];
    param_1[4] = *param_1;
    param_1[7] = param_1[3];
    param_1[6] = param_1[2];
    FUN_1005a7fb4(param_1 + 4);
  }
  _free(param_1);
  return;
}

