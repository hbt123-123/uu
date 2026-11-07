// rea decompile_all
// name: FUN_10062f530
// address: 0x10062f530
// body: available
// range: 0x10062f530-0x10062f6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10062f6b8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10062f530(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (uVar7 < 0x80) {
    puVar3 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    puVar3[0x20] = (char)uVar7;
  }
  else {
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    puVar3 = &DAT_100ab7e50;
    FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
    puVar4 = puVar3;
    _swift_allocObject();
    puVar5 = puVar4;
    _malloc_size();
    uVar8 = 8;
    *(undefined8 *)(puVar4 + 0x10) = 8;
    *(long *)(puVar4 + 0x18) = (long)puVar5 * 2 + -0x40;
    *(ulong *)(puVar4 + 0x20) = uVar7 >> 0x20 | uVar7 << 0x20;
    do {
      if (puVar4[0x20] != '\0') break;
      puVar5 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar5 == 0) || (*(ulong *)(puVar4 + 0x18) >> 1 < uVar8 - 1)) {
        FUN_1006295a0();
        puVar4 = puVar5;
      }
      uVar8 = *(long *)(puVar4 + 0x10) - 1;
      _memmove(puVar4 + 0x20,puVar4 + 0x21,uVar8);
      *(ulong *)(puVar4 + 0x10) = uVar8;
    } while (uVar8 != 0);
    _swift_allocObject(puVar3,0x21,7);
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    if (0xff < uVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062f6b4);
      (*pcVar2)();
    }
    uVar1 = ((uint)uVar8 & 0xff) + 0x80;
    if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10062f6b8);
      (*pcVar2)();
    }
    puVar3[0x20] = (char)uVar1;
    FUN_100628ae0(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != lVar6) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

