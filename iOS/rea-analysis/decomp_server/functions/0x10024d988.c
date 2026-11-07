// rea decompile_all
// name: FUN_10024d988
// address: 0x10024d988
// body: available
// range: 0x10024d988-0x10024dc07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024dc04 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10024d988(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ID self;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lStack_b0;
  byte local_71;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  FUN_10024e0bc();
  lVar9 = *(long *)(lVar2 + -8);
  uVar10 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&lStack_b0 - uVar10;
  lVar15 = lVar12 - uVar10;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar3 + -8);
  lVar16 = lVar15 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    self = *(ID *)(unaff_x20 + 0x18);
    param_1 = param_1 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar14 + 0x48);
    pcVar17 = *(code **)(lVar14 + 0x10);
    do {
      lVar4 = lVar16;
      lVar8 = param_1;
      (*pcVar17)(lVar16,param_1,lVar3);
      __s10Foundation3URLV4pathSSvg();
      local_71 = 0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(lVar8);
      _objc_msgSend(self,"fileExistsAtPath:isDirectory:",lVar4,&local_71);
      if ((local_71 & 1) == 0) {
        lVar4 = lVar15;
        lVar8 = lVar16;
        (*pcVar17)(lVar15,lVar16,lVar3);
        __s10Foundation3URLV17lastPathComponentSSvg();
        plVar1 = (long *)(lVar15 + *(int *)(lVar2 + 0x14));
        *plVar1 = lVar4;
        plVar1[1] = lVar8;
        FUN_10024e13c(lVar15,lVar12);
        puVar7 = local_70;
        puVar5 = local_70;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_10024e270(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar10 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_10024e270(puVar7,uVar10 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
        FUN_10024e3ec(lVar12,puVar7 + *(long *)(lVar9 + 0x48) * uVar10 +
                                      ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)));
        FUN_10024e430(lVar15);
        (**(code **)(lVar14 + 8))(lVar16,lVar3);
        local_70 = puVar7;
      }
      else {
        FUN_10024dd10(lVar16);
        FUN_10024dc08();
        (**(code **)(lVar14 + 8))(lVar16,lVar3);
      }
      param_1 = param_1 + lVar11;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70);
  }
  return;
}

