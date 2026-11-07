// rea decompile_all
// name: FUN_10007441c
// address: 0x10007441c
// body: available
// range: 0x10007441c-0x10007451b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10007441c(long *param_1,undefined4 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  puVar6 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((long)-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar6;
  if (param_2 == (undefined4 *)0x0) {
    lVar9 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10007451c);
      (*pcVar3)();
    }
    lVar9 = 0;
    uVar11 = 0x3f - uVar7 >> 6;
    lVar2 = 1;
    lVar10 = lVar9;
    lVar5 = 0;
    while( true ) {
      while (lVar12 = lVar2, uVar8 != 0) {
        uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 - 1 & uVar8;
        *param_2 = *(undefined4 *)
                    (*(long *)(param_4 + 0x30) +
                    (lVar9 << 8 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 2));
        if (lVar12 == param_3) goto LAB_1000744fc;
        param_2 = param_2 + 1;
        lVar2 = lVar12 + 1;
        lVar10 = lVar9;
        lVar5 = lVar12;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000744d0);
          (*pcVar3)();
        }
      }
      bVar4 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100074518);
        (*pcVar3)();
      }
      if ((long)uVar11 <= lVar9) break;
      uVar8 = puVar6[lVar9];
      lVar2 = lVar12;
    }
    uVar8 = 0;
    if ((long)uVar11 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    lVar9 = uVar11 - 1;
    param_3 = lVar5;
  }
LAB_1000744fc:
  *param_1 = param_4;
  param_1[1] = (long)puVar6;
  param_1[2] = ~uVar7;
  param_1[3] = lVar9;
  param_1[4] = uVar8;
  return param_3;
}

