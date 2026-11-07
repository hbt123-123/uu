// rea decompile_all
// name: FUN_100039084
// address: 0x100039084
// body: available
// range: 0x100039084-0x10003923f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100039084(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  lVar5 = *(long *)(param_3 + 0x10);
  uVar7 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar5 = lVar5 + -1;
LAB_1000390fc:
  do {
    do {
      lVar1 = param_5[3];
      uVar7 = param_5[4];
      lVar8 = lVar1;
      if (uVar7 == 0) {
        uVar6 = param_5[2] + 0x40U >> 6;
        lVar11 = lVar1;
        do {
          lVar8 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10003923c);
            (*pcVar3)();
          }
          if ((long)uVar6 <= lVar8) {
            if ((long)uVar6 <= lVar1 + 1) {
              uVar6 = lVar1 + 1;
            }
            param_5[3] = uVar6 - 1;
            param_5[4] = 0;
            _swift_retain(param_3);
            FUN_1000393c0(param_1,param_2,lVar5,param_3);
            return;
          }
          uVar7 = *(ulong *)(param_5[1] + lVar8 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
      }
      uVar6 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      iVar2 = *(int *)(*(long *)(*param_5 + 0x30) +
                      (lVar8 << 8 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 2));
      param_5[3] = lVar8;
      param_5[4] = uVar7 - 1 & uVar7;
      uVar7 = *(ulong *)(param_3 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar7,iVar2,4);
      uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar7 = uVar7 & (uVar10 ^ 0xffffffffffffffff);
      uVar6 = uVar7 >> 6;
      uVar9 = 1L << (uVar7 & 0x3f);
    } while ((uVar9 & *(ulong *)(param_3 + 0x38 + uVar6 * 8)) == 0);
    if (*(int *)(*(long *)(param_3 + 0x30) + uVar7 * 4) != iVar2) {
      do {
        uVar7 = uVar7 + 1 & ~uVar10;
        uVar6 = uVar7 >> 6;
        uVar9 = 1L << (uVar7 & 0x3f);
        if ((uVar9 & *(ulong *)(param_3 + 0x38 + uVar6 * 8)) == 0) goto LAB_1000390fc;
      } while (*(int *)(*(long *)(param_3 + 0x30) + uVar7 * 4) != iVar2);
    }
    uVar7 = *(ulong *)(param_1 + uVar6 * 8);
    *(ulong *)(param_1 + uVar6 * 8) = uVar7 & (uVar9 ^ 0xffffffffffffffff);
    if ((uVar7 & uVar9) != 0) {
      bVar4 = SBORROW8(lVar5,1);
      lVar5 = lVar5 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100039240);
        (*pcVar3)();
      }
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}

