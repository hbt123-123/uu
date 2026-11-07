// rea decompile_all
// name: FUN_100449ac0
// address: 0x100449ac0
// body: available
// range: 0x100449ac0-0x100449bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_100449ac0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_2;
  uVar4 = param_2[2];
  bVar2 = (uVar4 & 0x3000000000000000) != 0;
  if (*param_1 < 0xffffffff00000000 || (param_1[2] & 0x3000000000000000) != 0) {
    if (bVar2 || uVar5 < 0xffffffff00000000) {
      uVar6 = param_2[1];
      FUN_10020376c(uVar5,uVar6,uVar4,FUN_100008184);
      uVar7 = *param_1;
      uVar1 = param_1[1];
      uVar3 = param_1[2];
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar4;
      FUN_10020376c(uVar7,uVar1,uVar3,FUN_100006cdc);
    }
    else {
      FUN_100449bdc(param_1);
      uVar4 = param_2[2];
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[2] = uVar4;
    }
  }
  else if (bVar2 || uVar5 < 0xffffffff00000000) {
    uVar7 = param_2[1];
    FUN_10020376c(uVar5,uVar7,uVar4,FUN_100008184);
    *param_1 = uVar5;
    param_1[1] = uVar7;
    param_1[2] = uVar4;
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  uVar4 = param_2[3];
  uVar7 = param_2[4];
  FUN_100008184(uVar4,uVar7);
  uVar5 = param_1[3];
  uVar1 = param_1[4];
  param_1[3] = uVar4;
  param_1[4] = uVar7;
  FUN_100006cdc(uVar5,uVar1);
  return param_1;
}

