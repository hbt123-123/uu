// rea decompile_all
// name: FUN_1005b97dc
// address: 0x1005b97dc
// body: available
// range: 0x1005b97dc-0x1005b98fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1005b97dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = param_2[2];
  bVar2 = *(byte *)(param_2 + 3);
  bVar4 = ((uVar6 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  if ((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(char *)(param_1 + 3) == -1)) {
    if (bVar4 || bVar2 != 0xff) {
      uVar7 = *param_2;
      uVar8 = param_2[1];
      FUN_10051feb8(uVar7,uVar8,uVar6,bVar2 & 1);
      *param_1 = uVar7;
      param_1[1] = uVar8;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar2 & 1;
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      uVar9 = *(undefined8 *)((long)param_2 + 9);
      *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)param_1 + 9) = uVar9;
      param_1[1] = uVar8;
      *param_1 = uVar7;
    }
  }
  else if (bVar4 || bVar2 != 0xff) {
    uVar7 = *param_2;
    uVar9 = param_2[1];
    FUN_10051feb8(uVar7,uVar9,uVar6,bVar2 & 1);
    uVar8 = *param_1;
    uVar1 = param_1[1];
    uVar5 = param_1[2];
    uVar3 = *(undefined1 *)(param_1 + 3);
    *param_1 = uVar7;
    param_1[1] = uVar9;
    param_1[2] = uVar6;
    *(byte *)(param_1 + 3) = bVar2 & 1;
    FUN_10051ff64(uVar8,uVar1,uVar5,uVar3);
  }
  else {
    FUN_1005b98fc(param_1);
    uVar8 = *(undefined8 *)((long)param_2 + 0x11);
    uVar7 = *(undefined8 *)((long)param_2 + 9);
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    *(undefined8 *)((long)param_1 + 0x11) = uVar8;
    *(undefined8 *)((long)param_1 + 9) = uVar7;
  }
  uVar7 = param_2[4];
  uVar9 = param_2[5];
  FUN_100008184(uVar7,uVar9);
  uVar8 = param_1[4];
  uVar1 = param_1[5];
  param_1[4] = uVar7;
  param_1[5] = uVar9;
  FUN_100006cdc(uVar8,uVar1);
  return param_1;
}

