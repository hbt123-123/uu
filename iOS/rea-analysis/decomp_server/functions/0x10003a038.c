// rea decompile_all
// name: FUN_10003a038
// address: 0x10003a038
// body: available
// range: 0x10003a038-0x10003a167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003a038(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x40);
  lVar5 = 0;
  do {
    if (uVar7 == 0) {
      do {
        lVar10 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10003a168);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
          FUN_10012a220(param_1,param_2,lVar8,param_3);
          return;
        }
        uVar7 = ((ulong *)(param_3 + 0x40))[lVar10];
        lVar5 = lVar5 + 1;
      } while (uVar7 == 0);
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
    }
    else {
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar10 = lVar5;
    }
    uVar4 = LZCOUNT(uVar3);
    uVar9 = uVar4 | lVar10 << 6;
    uVar3 = (ulong)*(uint *)(*(long *)(param_3 + 0x30) + uVar9 * 4);
    (*param_4)(uVar3,*(undefined4 *)(*(long *)(param_3 + 0x38) + uVar9 * 4));
    lVar5 = lVar10;
    if ((uVar3 & 1) != 0) {
      uVar3 = (uVar4 & 0xffffffffffffffc0 | lVar10 << 6) >> 3;
      *(ulong *)(param_1 + uVar3) = *(ulong *)(param_1 + uVar3) | 1L << (uVar4 & 0x3f);
      bVar2 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10003a130);
        (*pcVar1)();
      }
    }
  } while( true );
}

