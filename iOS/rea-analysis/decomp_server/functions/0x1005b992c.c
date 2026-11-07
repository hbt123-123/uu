// rea decompile_all
// name: FUN_1005b992c
// address: 0x1005b992c
// body: available
// range: 0x1005b992c-0x1005b99cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b992c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_1[2];
  bVar2 = *(byte *)(param_1 + 3);
  uVar5 = param_2[2];
  bVar3 = *(byte *)(param_2 + 3);
  if ((((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar2 != 0xff)) {
    if ((((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar3 != 0xff)) {
      uVar6 = *param_1;
      uVar1 = param_1[1];
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      param_1[2] = uVar5;
      *(byte *)(param_1 + 3) = bVar3 & 1;
      FUN_10051ff64(uVar6,uVar1,uVar4,bVar2 & 1);
      goto LAB_1005b99b0;
    }
    FUN_1005b98fc(param_1);
  }
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  uVar6 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar6;
LAB_1005b99b0:
  uVar6 = param_1[4];
  uVar1 = param_1[5];
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_100006cdc(uVar6,uVar1);
  return param_1;
}

