// rea decompile_all
// name: FUN_1005d1190
// address: 0x1005d1190
// body: available
// range: 0x1005d1190-0x1005d129b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d1190(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  
  lVar4 = 0;
  lVar5 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x40);
  do {
    lVar10 = lVar5;
    if (uVar7 == 0) {
      do {
        lVar5 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d1298);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar5) {
          FUN_1005d0f28();
          return;
        }
        uVar7 = ((ulong *)(param_3 + 0x40))[lVar5];
        lVar10 = lVar10 + 1;
      } while (uVar7 == 0);
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
    }
    else {
      uVar8 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 - 1 & uVar7;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
    }
    lVar10 = *(long *)(param_4 + 0x10);
    piVar11 = (int *)(param_4 + 0x20);
    do {
      if (lVar10 == 0) {
        uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar8 & 0x3f);
        bVar3 = SCARRY8(lVar4,1);
        lVar4 = lVar4 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005d129c);
          (*pcVar2)();
        }
        break;
      }
      iVar1 = *piVar11;
      lVar10 = lVar10 + -1;
      piVar11 = piVar11 + 1;
    } while (iVar1 != *(int *)(*(long *)(param_3 + 0x30) + uVar8 * 4));
  } while( true );
}

