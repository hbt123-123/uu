// rea decompile_all
// name: FUN_1006b9dfc
// address: 0x1006b9dfc
// body: available
// range: 0x1006b9dfc-0x1006b9f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b9dfc(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint local_3c;
  uint uStack_38;
  uint local_34;
  undefined8 local_30;
  uint local_28;
  uint uStack_24;
  
  uVar1 = param_2 + 500;
  if (param_2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar6 = 0x201;
  if (param_2 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  uVar8 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar8 = uVar8 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar8 = uVar8 + 1;
  }
  iVar2 = 3;
  if (param_3 != 0) {
    iVar2 = param_3;
  }
  iVar3 = 0;
  if (-1 < param_3) {
    iVar3 = iVar2;
  }
  iVar4 = 0x16;
  if (param_3 < 0x17) {
    iVar4 = iVar3;
  }
  puVar7 = (uint *)(&DAT_10084eb60 + (long)iVar4 * 0x1c + uVar8 * 0x284);
  local_3c = *puVar7;
  local_34 = puVar7[2];
  local_30 = *(undefined8 *)(puVar7 + 3);
  local_28 = puVar7[5];
  uStack_24 = puVar7[6];
  uVar9 = 6;
  if (0x3f < uVar6 + param_2) {
    uVar9 = ((uint)LZCOUNT((int)(uVar6 + param_2) + -1) ^ 0x1f) + 1;
  }
  uVar5 = local_3c;
  if (uVar9 <= local_3c) {
    uVar5 = uVar9;
  }
  if ((uVar6 | param_2) >> 0x1e == 0) {
    local_3c = uVar5;
  }
  if (param_3 < 0) {
    local_28 = -param_3;
  }
  if (local_3c + 1 <= local_34) {
    local_34 = local_3c + 1;
  }
  uStack_38 = local_3c;
  if (5 < uStack_24) {
    uStack_38 = local_3c + 1;
  }
  if (puVar7[1] - (uint)(5 < uStack_24) <= local_3c) {
    uStack_38 = puVar7[1];
  }
  if (local_3c < 0xb) {
    local_3c = 10;
  }
  FUN_1006b9960(param_1,param_2,0,0,&local_3c,&DAT_10084eb48);
  if (param_1 != 0) {
    *(int *)(param_1 + 0x133c) = iVar2;
  }
  return;
}

