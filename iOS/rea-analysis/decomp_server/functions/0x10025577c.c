// rea decompile_all
// name: FUN_10025577c
// address: 0x10025577c
// body: available
// range: 0x10025577c-0x1002559af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10025599c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10025577c(void)

{
  long lVar1;
  __sigaction_u *p_Var2;
  uint uVar3;
  __sigaction_u _Var4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_a0 [24];
  __sigaction_u local_88;
  undefined8 local_80;
  sigaction local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar14 = *(long *)(unaff_x20 + 0x38);
  uVar17 = *(ulong *)(lVar14 + 0x10);
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if (*(ulong *)(lVar14 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100255994);
        (*pcVar7)();
      }
      uVar3 = *(uint *)(lVar14 + 0x20 + uVar18 * 4);
      uVar16 = (ulong)uVar3;
      local_78.__sigaction_u.__sa_handler = thunk_FUN_100255b6c;
      local_78.sa_mask = 0;
      local_78.sa_flags = 2;
      _sigemptyset(&local_78.sa_mask);
      local_88.__sa_handler = (_func_333 *)0x0;
      local_80 = 0;
      iVar8 = _sigaction(uVar3,&local_78,(sigaction *)&local_88);
      _Var4 = local_88;
      if (iVar8 == 0) {
        uVar5 = (undefined4)local_80;
        uVar6 = local_80._4_4_;
        puVar12 = auStack_a0;
        _swift_beginAccess(unaff_x20 + 0x30,puVar12,0x21,0);
        uVar9 = *(ulong *)(unaff_x20 + 0x30);
        _swift_isUniquelyReferenced_nonNull_native();
        uVar11 = (uint)uVar9;
        lVar15 = *(long *)(unaff_x20 + 0x30);
        *(undefined8 *)(unaff_x20 + 0x30) = 0x8000000000000000;
        uVar10 = uVar16;
        FUN_10025a4ec();
        uVar13 = (ulong)~(uint)puVar12 & 1;
        lVar1 = *(long *)(lVar15 + 0x10) + uVar13;
        if (SCARRY8(*(long *)(lVar15 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100255998);
          (*pcVar7)();
        }
        if (*(long *)(lVar15 + 0x18) < lVar1) {
          FUN_10025a7f0(lVar1);
          FUN_10025a4ec();
          uVar10 = uVar16;
          if (((uint)puVar12 & 1) != (uVar11 & 1)) {
            __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                      (PTR___ss5Int32VN_100995c78);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002559b0);
            (*pcVar7)();
          }
LAB_1002558ec:
          if (((ulong)puVar12 & 1) != 0) goto LAB_1002557dc;
LAB_1002558f4:
          lVar1 = lVar15 + (uVar10 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar10 & 0x3f);
          *(uint *)(*(long *)(lVar15 + 0x30) + uVar10 * 4) = uVar3;
          p_Var2 = (__sigaction_u *)(*(long *)(lVar15 + 0x38) + uVar10 * 0x10);
          p_Var2->__sa_handler = (_func_333 *)_Var4;
          *(undefined4 *)(p_Var2 + 1) = uVar5;
          *(undefined4 *)((long)p_Var2 + 0xc) = uVar6;
          if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10025599c);
            (*pcVar7)();
          }
          *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
        }
        else {
          if ((uVar9 & 1) != 0) goto LAB_1002558ec;
          FUN_10025a520();
          if (((ulong)puVar12 & 1) == 0) goto LAB_1002558f4;
LAB_1002557dc:
          p_Var2 = (__sigaction_u *)(*(long *)(lVar15 + 0x38) + uVar10 * 0x10);
          p_Var2->__sa_handler = (_func_333 *)_Var4;
          *(undefined4 *)(p_Var2 + 1) = uVar5;
          *(undefined4 *)((long)p_Var2 + 0xc) = uVar6;
        }
        *(long *)(unaff_x20 + 0x30) = lVar15;
        _swift_endAccess(auStack_a0);
      }
      uVar18 = uVar18 + 1;
    } while (uVar17 != uVar18);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

