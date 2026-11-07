// rea decompile_all
// name: FUN_100038ac4
// address: 0x100038ac4
// body: available
// range: 0x100038ac4-0x100038de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100038dac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100038db0) */
/* WARNING: Removing unreachable block (ram,0x000100038dc8) */

undefined * FUN_100038ac4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong local_a0 [2];
  long local_90;
  ulong *puStack_88;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_release(param_2);
    puVar6 = PTR___swiftEmptySetSingleton_100995eb0;
  }
  else {
    lVar11 = 0;
    puVar10 = (ulong *)(param_1 + 0x38);
    uVar9 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    local_a0[0] = ~uVar9;
    uVar13 = 0xffffffffffffffff;
    if ((long)-uVar9 < 0x40) {
      uVar13 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar13 = uVar13 & *puVar10;
    puVar1 = param_2 + 0x38;
    while( true ) {
      while (uVar13 != 0) {
        uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 - 1 & uVar13;
        iVar2 = *(int *)(*(long *)(param_1 + 0x30) +
                        (lVar11 << 8 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 2));
        uVar5 = *(ulong *)(param_2 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar5,iVar2,4);
        uVar8 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar5 = uVar5 & (uVar8 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar5 >> 3 & 0xffffffffffffff8)) >> (uVar5 & 0x3f) & 1) != 0) {
          do {
            if (*(int *)(*(long *)(param_2 + 0x30) + uVar5 * 4) == iVar2) {
              local_80 = local_a0[0];
              uVar9 = 0x3f - uVar8 >> 6;
              puVar12 = (undefined *)(uVar9 * 8);
              local_90 = param_1;
              puStack_88 = puVar10;
              lStack_78 = lVar11;
              local_70 = uVar13;
              if (uVar9 < 0x81) {
                _swift_bridgeObjectRetain(param_1);
              }
              else {
                uVar13 = 0;
                __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF
                          (0xc,3,0,0xf,4,0);
                _swift_bridgeObjectRetain(param_1);
                if (((uVar13 & 1) == 0) ||
                   (puVar6 = puVar12, _swift_stdlib_isStackAllocationSafe(puVar12,8),
                   (int)puVar6 == 0)) {
                  puVar7 = puVar12;
                  _swift_slowAlloc(puVar12,0xffffffffffffffff);
                  _memcpy(puVar7,puVar1,(size_t)puVar12);
                  puVar6 = puVar7;
                  FUN_100039084(puVar7,uVar9,param_2,uVar5,&local_90);
                  _swift_release(param_2);
                  _swift_slowDealloc(puVar7,0xffffffffffffffff,0xffffffffffffffff);
                  goto LAB_100038cd0;
                }
              }
              puVar6 = puVar12;
              if (uVar9 == 0 || puVar12 == (undefined *)0x1) {
                puVar6 = (undefined *)0x1;
              }
              (*(code *)PTR____chkstk_darwin_100995498)((ulong)(puVar6 + 0xf) & 0x3ffffffffffffff0);
              puVar6 = (undefined *)((long)local_a0 - extraout_x8);
              _memcpy(puVar6,puVar1,(size_t)puVar12);
              FUN_100039084(puVar6,uVar9,param_2,uVar5,&local_90);
              _swift_release(param_2);
              goto LAB_100038cd0;
            }
            uVar5 = uVar5 + 1 & ~uVar8;
          } while ((*(ulong *)(puVar1 + (uVar5 >> 3 & 0xffffffffffffff8)) >> (uVar5 & 0x3f) & 1) !=
                   0);
        }
      }
      bVar4 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100038d14);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar9 >> 6) <= lVar11) break;
      uVar13 = puVar10[lVar11];
    }
    _swift_bridgeObjectRetain(param_1);
    puVar6 = param_2;
LAB_100038cd0:
    FUN_10003f638();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

