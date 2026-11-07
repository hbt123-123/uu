// rea decompile_all
// name: FUN_10040ec0c
// address: 0x10040ec0c
// body: available
// range: 0x10040ec0c-0x10040ed03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10040ec0c(void)

{
  bool bVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (*(long *)(unaff_x20 + 8) - 0xe11U < 0xfffffffffffff1f0) {
    auVar6._8_8_ = 0x80000001008b65f0;
    auVar6._0_8_ = 0x100000000000002c;
    return auVar6;
  }
  if (-1 < *(long *)(unaff_x20 + 0x20)) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    if (lVar2 == 0) {
      auVar9._8_8_ = 0x80000001008b65b0;
      auVar9._0_8_ = 0x100000000000001b;
      return auVar9;
    }
    puVar3 = (ulong *)(*(long *)(unaff_x20 + 0x10) + 0x20);
    uVar4 = 0;
    while( true ) {
      if (lVar2 == 0) {
        return ZEXT816(0);
      }
      uVar5 = *puVar3;
      if ((long)uVar5 < 1) break;
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
      bVar1 = uVar5 <= uVar4;
      uVar4 = uVar5;
      if (bVar1) {
        auVar7._8_8_ = 0x80000001008b6580;
        auVar7._0_8_ = 0x100000000000002d;
        return auVar7;
      }
    }
    auVar10._8_8_ = 0x80000001008b6550;
    auVar10._0_8_ = 0x1000000000000024;
    return auVar10;
  }
  auVar8._8_8_ = 0x80000001008b65d0;
  auVar8._0_8_ = 0x1000000000000019;
  return auVar8;
}

