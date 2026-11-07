// rea decompile_all
// name: FUN_10007498c
// address: 0x10007498c
// body: available
// range: 0x10007498c-0x100074ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10007498c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100074aac);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_100a75a28;
      FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
      lVar5 = 0;
      __s10Foundation3URLVMa();
      lVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
      uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
      uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
      _swift_allocObject(puVar4,uVar9 + lVar8 * lVar2,uVar7 | 7);
      puVar6 = puVar4;
      _malloc_size();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100074ab0);
        (*pcVar3)();
      }
      lVar5 = (long)puVar6 - uVar9;
      if (lVar5 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100074ab4);
        (*pcVar3)();
      }
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar1 = lVar5 / lVar8;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = lVar1 << 1;
    }
    if (param_4 == param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100074aa8);
      (*pcVar3)();
    }
    lVar5 = 0;
    __s10Foundation3URLVMa();
    uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    _swift_arrayInitWithCopy
              (puVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)),
               param_2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * param_3,lVar2,lVar5);
  }
  return puVar4;
}

