// rea decompile_all
// name: FUN_100665cbc
// address: 0x100665cbc
// body: available
// range: 0x100665cbc-0x100665dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100665cbc(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar3 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar10 = *(long *)(lVar3 + -8);
  puVar8 = &stack0xffffffffffffffb0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      puVar9 = (undefined *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100665dc4);
        (*pcVar2)();
      }
      puVar9 = (undefined *)(long)(iVar7 - (int)param_1);
    }
  }
  else {
    if (uVar6 != 2) {
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
    puVar9 = (undefined *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100665dc0);
      (*pcVar2)();
    }
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar9 != (undefined *)0x0) {
    puVar4 = puVar9;
    FUN_100630840(puVar9,0);
    puVar5 = puVar8;
    __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
              (puVar8,puVar4 + 0x20,puVar9,param_1,param_2);
    (**(code **)(lVar10 + 8))(puVar8,lVar3);
    if (puVar5 != puVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100665d84);
      (*pcVar2)();
    }
  }
  return puVar4;
}

