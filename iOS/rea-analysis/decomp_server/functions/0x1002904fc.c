// rea decompile_all
// name: FUN_1002904fc
// address: 0x1002904fc
// body: available
// range: 0x1002904fc-0x10029061b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1002904fc(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar3 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar10 = *(long *)(lVar3 + -8);
  puVar8 = &stack0xffffffffffffffb0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      puVar9 = (undefined1 *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10029061c);
        (*pcVar2)();
      }
      puVar9 = (undefined1 *)(long)(iVar7 - (int)param_1);
    }
  }
  else {
    if (uVar6 != 2) goto LAB_1002905e4;
    puVar9 = (undefined1 *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100290618);
      (*pcVar2)();
    }
  }
  if (puVar9 != (undefined1 *)0x0) {
    puVar4 = puVar9;
    FUN_100297b14(puVar9,0);
    puVar5 = puVar8;
    __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
              (puVar8,puVar4 + 0x20,puVar9,param_1,param_2);
    FUN_100006cdc(param_1,param_2);
    (**(code **)(lVar10 + 8))(puVar8,lVar3);
    if (puVar5 == puVar9) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002905d0);
    (*pcVar2)();
  }
LAB_1002905e4:
  FUN_100006cdc(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_100995ea0;
}

