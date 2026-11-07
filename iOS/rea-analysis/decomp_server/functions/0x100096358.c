// rea decompile_all
// name: FUN_100096358
// address: 0x100096358
// body: available
// range: 0x100096358-0x10009645f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100096358(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_50;
  undefined *puStack_48;
  undefined1 auStack_38 [8];
  
  lVar7 = *(long *)(param_1 + 8);
  lVar2 = lVar7;
  __ss22_minimumMergeRunLengthyS2iF();
  if (lVar2 < lVar7) {
    if (lVar7 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10009645c);
      (*pcVar1)();
    }
    puVar6 = (undefined *)(lVar7 / 2);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < lVar7) {
      uVar3 = 0;
      __s10Foundation3URLVMa(0);
      puVar4 = puVar6;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar6,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar6;
    }
    lVar7 = 0;
    __s10Foundation3URLVMa();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
    local_50 = puVar4 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
    puStack_48 = puVar6;
    FUN_100096460(&local_50,auStack_38,param_1,lVar2);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (lVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100096460);
      (*pcVar1)();
    }
    if (lVar7 != 0) {
      FUN_1000980f8(0,lVar7,1,param_1);
    }
  }
  return;
}

