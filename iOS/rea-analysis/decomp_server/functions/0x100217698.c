// rea decompile_all
// name: FUN_100217698
// address: 0x100217698
// body: available
// range: 0x100217698-0x100217787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100217698(uint *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  lVar4 = *(long *)(param_1 + 0xc);
  uVar7 = *(ulong *)(param_1 + 0xe);
  uVar8 = *(ulong *)(param_1 + 0x10);
  cVar6 = (char)param_1[0x18];
  if (cVar6 == '\x05') {
    uVar9 = 2;
    if (uVar8 >> 0x3c < 0xf) {
      uVar9 = lVar4 << 0x20 | 2;
    }
  }
  else {
    if (cVar6 == '\x03') {
      uVar8 = uVar7 >> 0x3c;
      uVar9 = 1;
      if (uVar8 < 0xf) {
        uVar9 = (*(long *)(param_1 + 10) << 0x20) + 1;
      }
      lVar1 = 0;
      if (uVar8 < 0xf) {
        lVar1 = lVar4;
      }
      uVar2 = 0xc000000000000000;
      if (uVar8 < 0xf) {
        uVar2 = uVar7;
      }
      uVar5 = *param_1;
      FUN_100040b80(*(long *)(param_1 + 10),lVar4,uVar7);
      FUN_100006cdc(lVar1,uVar2);
      uVar7 = (ulong)uVar5 << 0x20 | 0xffffffff;
      goto LAB_100217774;
    }
    if (cVar6 != '\x02') {
      uVar7 = 0;
      uVar9 = 3;
      goto LAB_100217774;
    }
    uVar9 = 0;
    if (uVar8 >> 0x3c < 0xf) {
      uVar9 = lVar4 << 0x20;
    }
  }
  uVar2 = 0;
  if (uVar8 >> 0x3c < 0xf) {
    uVar2 = uVar7;
  }
  uVar3 = 0xc000000000000000;
  if (uVar8 >> 0x3c < 0xf) {
    uVar3 = uVar8;
  }
  FUN_100040b80(lVar4,uVar7);
  FUN_100006cdc(uVar2,uVar3);
  uVar7 = 0xffffffffffffffff;
LAB_100217774:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar9;
  return auVar10;
}

