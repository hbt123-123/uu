// rea decompile_all
// name: FUN_10008e0d4
// address: 0x10008e0d4
// body: available
// range: 0x10008e0d4-0x10008e1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10008e0d4(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  puVar8 = (ulong *)(param_4 + 0x38);
  uVar9 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)-uVar9 < 0x40) {
    uVar10 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *puVar8;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10008e1e8);
      (*pcVar5)();
    }
    lVar11 = 0;
    uVar13 = 0x3f - uVar9 >> 6;
    lVar4 = 1;
    lVar12 = lVar11;
    lVar7 = 0;
    while( true ) {
      while (lVar14 = lVar4, uVar10 != 0) {
        uVar3 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 - 1 & uVar10;
        puVar15 = (undefined8 *)
                  (*(long *)(param_4 + 0x30) +
                  (LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar11 << 6) * 0x18);
        uVar1 = *(undefined1 *)(puVar15 + 2);
        uVar2 = *(undefined1 *)((long)puVar15 + 0x11);
        uVar16 = *puVar15;
        param_2[1] = puVar15[1];
        *param_2 = uVar16;
        *(undefined1 *)(param_2 + 2) = uVar1;
        *(undefined1 *)((long)param_2 + 0x11) = uVar2;
        if (lVar14 == param_3) goto LAB_10008e1c8;
        param_2 = param_2 + 3;
        lVar4 = lVar14 + 1;
        lVar12 = lVar11;
        lVar7 = lVar14;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10008e19c);
          (*pcVar5)();
        }
      }
      bVar6 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10008e1e4);
        (*pcVar5)();
      }
      if ((long)uVar13 <= lVar11) break;
      uVar10 = puVar8[lVar11];
      lVar4 = lVar14;
    }
    uVar10 = 0;
    if ((long)uVar13 <= lVar12 + 1) {
      uVar13 = lVar12 + 1;
    }
    lVar11 = uVar13 - 1;
    param_3 = lVar7;
  }
LAB_10008e1c8:
  *param_1 = param_4;
  param_1[1] = (long)puVar8;
  param_1[2] = ~uVar9;
  param_1[3] = lVar11;
  param_1[4] = uVar10;
  return param_3;
}

