// rea decompile_all
// name: FUN_10067bccc
// address: 0x10067bccc
// body: available
// range: 0x10067bccc-0x10067bebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067bebc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10067bccc(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong *puVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined auStack_a0 [8];
  long *local_98;
  ulong local_90;
  ulong uStack_88;
  long local_80;
  ulong uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar13 = *(long *)(lVar3 + -8);
  puVar14 = auStack_a0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  uStack_88 = uVar15 >> 0x20 | uVar15 << 0x20;
  uVar15 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  local_90 = uVar15 >> 0x20 | uVar15 << 0x20;
  puVar4 = &uStack_88;
  plVar8 = &local_80;
  FUN_1001f8534(puVar4);
  puVar5 = &local_90;
  puVar9 = &uStack_88;
  FUN_1001f8534(puVar5,puVar9);
  uStack_78 = 0xc000000000000000;
  local_80 = 0;
  __s10Foundation4DataV6appendyyACF(puVar4,plVar8);
  __s10Foundation4DataV6appendyyACF(puVar5,puVar9);
  uVar15 = uStack_78;
  lVar12 = local_80;
  uVar1 = (uint)(uStack_78 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 == 0) {
      puVar16 = (undefined *)(uStack_78 >> 0x30 & 0xff);
    }
    else {
      iVar11 = (int)((ulong)local_80 >> 0x20);
      if (SBORROW4(iVar11,(int)local_80)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067bebc);
        (*pcVar2)();
      }
      puVar16 = (undefined *)(long)(iVar11 - (int)local_80);
    }
joined_r0x00010067bdc4:
    if (puVar16 != (undefined *)0x0) {
      puVar6 = puVar16;
      local_98 = plVar8;
      FUN_100630840(puVar16,0);
      puVar7 = puVar14;
      __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
                (puVar14,puVar6 + 0x20,puVar16,lVar12,uVar15);
      (**(code **)(lVar13 + 8))(puVar14,lVar3);
      if (puVar7 != puVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067beb4);
        (*pcVar2)();
      }
      FUN_100006cdc(puVar5,puVar9);
      FUN_100006cdc(puVar4,local_98);
      lVar12 = local_80;
      uVar15 = uStack_78;
      goto LAB_10067be68;
    }
  }
  else if (uVar10 == 2) {
    puVar16 = (undefined *)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10));
    if (SBORROW8(*(long *)(local_80 + 0x18),*(long *)(local_80 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067beb8);
      (*pcVar2)();
    }
    goto joined_r0x00010067bdc4;
  }
  FUN_100006cdc(puVar5,puVar9);
  FUN_100006cdc(puVar4,plVar8);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
LAB_10067be68:
  FUN_100006cdc(lVar12,uVar15);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

