// rea decompile_all
// name: FUN_10044ed7c
// address: 0x10044ed7c
// body: available
// range: 0x10044ed7c-0x10044ee43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10044ed7c(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_4 + 0x58,auStack_78,0,0);
  uVar9 = *(ulong *)(param_4 + 0x78) >> 0x3c;
  uVar1 = 0;
  if (uVar9 < 0xf) {
    uVar1 = *(ulong *)(param_4 + 0x70);
  }
  uVar2 = 0xc000000000000000;
  if (uVar9 < 0xf) {
    uVar2 = *(ulong *)(param_4 + 0x78);
  }
  uVar3 = 0;
  if (uVar9 < 0xf) {
    uVar3 = *(ulong *)(param_4 + 0x68) & 0xffffffff;
  }
  uVar4 = 0;
  if (uVar9 < 0xf) {
    uVar4 = *(ulong *)(param_4 + 0x68) & 0xffffffff00000000;
  }
  uVar5 = 0;
  if (uVar9 < 0xf) {
    uVar5 = *(ulong *)(param_4 + 0x60) & 0xffffffff;
  }
  uVar6 = 0;
  if (uVar9 < 0xf) {
    uVar6 = *(ulong *)(param_4 + 0x60) & 0xffffffff00000000;
  }
  uVar7 = 0;
  if (uVar9 < 0xf) {
    uVar7 = *(ulong *)(param_4 + 0x58) & 0xffffffff;
  }
  uVar8 = 0;
  if (uVar9 < 0xf) {
    uVar8 = *(ulong *)(param_4 + 0x58) & 0xffffffff00000000;
  }
  FUN_10045eb08();
  *param_1 = uVar8 | uVar7;
  param_1[1] = uVar6 | uVar5;
  param_1[2] = uVar4 | uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return;
}

