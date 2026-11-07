// rea decompile_all
// name: FUN_100039240
// address: 0x100039240
// body: available
// range: 0x100039240-0x1000393bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100039240(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

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
  
  lVar4 = *(long *)(param_3 + 0x10);
  uVar6 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar6) = *(ulong *)(param_1 + uVar6) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar4 = lVar4 + -1;
  lVar5 = *param_5;
  uVar6 = param_5[1];
  uVar8 = *(ulong *)(lVar5 + 0x10);
  if (uVar6 != uVar8) {
    do {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000393b8);
        (*pcVar2)();
      }
      if (uVar8 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000393bc);
        (*pcVar2)();
      }
      iVar1 = *(int *)(lVar5 + uVar6 * 4 + 0x20);
      param_5[1] = uVar6 + 1;
      uVar6 = *(ulong *)(param_3 + 0x28);
      __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar6,iVar1,4);
      uVar9 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
      uVar8 = uVar6 >> 6;
      uVar7 = 1L << (uVar6 & 0x3f);
      if ((uVar7 & *(ulong *)(param_3 + 0x38 + uVar8 * 8)) != 0) {
        if (*(int *)(*(long *)(param_3 + 0x30) + uVar6 * 4) != iVar1) {
          do {
            uVar6 = uVar6 + 1 & ~uVar9;
            uVar8 = uVar6 >> 6;
            uVar7 = 1L << (uVar6 & 0x3f);
            if ((uVar7 & *(ulong *)(param_3 + 0x38 + uVar8 * 8)) == 0) goto LAB_1000392f0;
          } while (*(int *)(*(long *)(param_3 + 0x30) + uVar6 * 4) != iVar1);
        }
        uVar6 = *(ulong *)(param_1 + uVar8 * 8);
        *(ulong *)(param_1 + uVar8 * 8) = uVar6 & (uVar7 ^ 0xffffffffffffffff);
        if ((uVar6 & uVar7) != 0) {
          bVar3 = SBORROW8(lVar4,1);
          lVar4 = lVar4 + -1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1000393c0);
            (*pcVar2)();
          }
          if (lVar4 == 0) {
            return;
          }
        }
      }
LAB_1000392f0:
      lVar5 = *param_5;
      uVar6 = param_5[1];
      uVar8 = *(ulong *)(lVar5 + 0x10);
    } while (uVar6 != uVar8);
  }
  _swift_retain(param_3);
  FUN_1000393c0(param_1,param_2,lVar4,param_3);
  return;
}

