// rea decompile_all
// name: FUN_100545cdc
// address: 0x100545cdc
// body: available
// range: 0x100545cdc-0x100545d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100545cdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(ushort *)(param_2 + 4);
  if (uVar3 >> 8 < 0xff) {
    uVar4 = uVar3 >> 8 & 1;
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    FUN_10050f830(uVar5,uVar6,uVar3,uVar4);
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    *(char *)(param_1 + 4) = (char)uVar3;
    *(char *)((long)param_1 + 0x21) = (char)uVar4;
  }
  else {
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  }
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar1 = *(undefined1 *)((long)param_2 + 0x49);
  uVar2 = *(undefined1 *)(param_2 + 9);
  FUN_10050f830(uVar5,uVar6,uVar2,uVar1);
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  *(undefined1 *)(param_1 + 9) = uVar2;
  *(undefined1 *)((long)param_1 + 0x49) = uVar1;
  return param_1;
}

