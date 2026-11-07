// rea decompile_all
// name: FUN_100038de4
// address: 0x100038de4
// body: available
// range: 0x100038de4-0x100039083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003904c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100039050) */
/* WARNING: Removing unreachable block (ram,0x000100039068) */

undefined * FUN_100038de4(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined auStack_90 [8];
  long local_88;
  long local_78;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_release(param_2);
    param_2 = PTR___swiftEmptySetSingleton_100995eb0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
    local_88 = param_1;
    local_78 = param_1;
    if (lVar8 != 0) {
      lVar9 = 0;
      puVar3 = param_2 + 0x38;
      uVar6 = *(ulong *)(param_2 + 0x28);
      uVar11 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
      uVar4 = ~uVar11;
      do {
        iVar1 = *(int *)(param_1 + 0x20 + lVar9 * 4);
        lVar9 = lVar9 + 1;
        uVar5 = uVar6;
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar6,iVar1,4);
        lVar10 = local_88;
        uVar5 = uVar5 & uVar4;
        if ((*(ulong *)(puVar3 + (uVar5 >> 3 & 0xffffffffffffff8)) >> (uVar5 & 0x3f) & 1) != 0) {
          do {
            if (*(int *)(*(long *)(param_2 + 0x30) + uVar5 * 4) == iVar1) {
              uVar4 = 0x3f - uVar11 >> 6;
              puVar7 = (undefined *)(uVar4 * 8);
              local_70 = lVar9;
              if (uVar4 < 0x81) {
                _swift_bridgeObjectRetain(local_88);
LAB_100038efc:
                puVar2 = puVar7;
                if (uVar4 == 0 || puVar7 == (undefined *)0x1) {
                  puVar2 = (undefined *)0x1;
                }
                (*(code *)PTR____chkstk_darwin_100995498)
                          ((ulong)(puVar2 + 0xf) & 0x3ffffffffffffff0);
                puVar2 = auStack_90 + -extraout_x8;
                _memcpy(puVar2,puVar3,(size_t)puVar7);
                FUN_100039240(puVar2,uVar4,param_2,uVar5,&local_78);
                _swift_release(param_2);
                param_2 = puVar2;
              }
              else {
                uVar6 = 0;
                __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF
                          (0xc,3,0,0xf,4,0);
                lVar10 = local_88;
                _swift_bridgeObjectRetain(local_88);
                if (((uVar6 & 1) != 0) &&
                   (puVar2 = puVar7, _swift_stdlib_isStackAllocationSafe(puVar7,8), (int)puVar2 != 0
                   )) goto LAB_100038efc;
                puVar2 = puVar7;
                _swift_slowAlloc(puVar7,0xffffffffffffffff);
                _memcpy(puVar2,puVar3,(size_t)puVar7);
                puVar3 = puVar2;
                FUN_100039240(puVar2,uVar4,param_2,uVar5,&local_78);
                _swift_release(param_2);
                _swift_slowDealloc(puVar2,0xffffffffffffffff,0xffffffffffffffff);
                param_2 = puVar3;
              }
              _swift_bridgeObjectRelease(lVar10);
              goto LAB_100038f74;
            }
            uVar5 = uVar5 + 1 & uVar4;
          } while ((*(ulong *)(puVar3 + (uVar5 >> 3 & 0xffffffffffffff8)) >> (uVar5 & 0x3f) & 1) !=
                   0);
        }
      } while (lVar9 != lVar8);
    }
  }
LAB_100038f74:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

