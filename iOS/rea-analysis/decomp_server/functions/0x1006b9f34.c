// rea decompile_all
// name: FUN_1006b9f34
// address: 0x1006b9f34
// body: available
// range: 0x1006b9f34-0x1006ba05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b9f34(undefined8 param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint local_2c;
  uint uStack_28;
  uint local_24;
  undefined8 local_20;
  uint local_18;
  uint uStack_14;
  
  uVar1 = param_2 + 500;
  if (param_2 == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  uVar5 = 0x201;
  if (param_2 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar7 = (ulong)(uVar1 < 0x40001);
  if (uVar1 < 0x20001) {
    uVar7 = uVar7 + 1;
  }
  if (uVar1 < 0x4001) {
    uVar7 = uVar7 + 1;
  }
  iVar3 = 3;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  iVar2 = 0;
  if (-1 < param_3) {
    iVar2 = iVar3;
  }
  iVar3 = 0x16;
  if (param_3 < 0x17) {
    iVar3 = iVar2;
  }
  puVar6 = (uint *)(&DAT_10084eb60 + (long)iVar3 * 0x1c + uVar7 * 0x284);
  local_2c = *puVar6;
  local_24 = puVar6[2];
  local_20 = *(undefined8 *)(puVar6 + 3);
  local_18 = puVar6[5];
  uStack_14 = puVar6[6];
  uVar8 = 6;
  if (0x3f < uVar5 + param_2) {
    uVar8 = ((uint)LZCOUNT((int)(uVar5 + param_2) + -1) ^ 0x1f) + 1;
  }
  uVar4 = local_2c;
  if (uVar8 <= local_2c) {
    uVar4 = uVar8;
  }
  if ((uVar5 | param_2) >> 0x1e == 0) {
    local_2c = uVar4;
  }
  if (param_3 < 0) {
    local_18 = -param_3;
  }
  if (local_2c + 1 <= local_24) {
    local_24 = local_2c + 1;
  }
  uStack_28 = local_2c;
  if (5 < uStack_14) {
    uStack_28 = local_2c + 1;
  }
  if (puVar6[1] - (uint)(5 < uStack_14) <= local_2c) {
    uStack_28 = puVar6[1];
  }
  if (local_2c < 0xb) {
    local_2c = 10;
  }
  FUN_1006b9960(param_1,param_2,1,0,&local_2c,&DAT_10084eb48);
  return;
}

