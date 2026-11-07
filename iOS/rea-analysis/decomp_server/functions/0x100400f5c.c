// rea decompile_all
// name: FUN_100400f5c
// address: 0x100400f5c
// body: available
// range: 0x100400f5c-0x1004010bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100400f5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar6 = *(long *)(param_1 + 8);
  _swift_bridgeObjectRetain_n(param_2,2);
  lVar2 = lVar6;
  __ss22_minimumMergeRunLengthyS2iF();
  if (lVar2 < lVar6) {
    if (lVar6 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004010b8);
      (*pcVar1)();
    }
    puVar7 = (undefined *)(lVar6 / 2);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < lVar6) {
      uVar3 = 0;
      __s10Foundation3URLVMa(0);
      puVar4 = puVar7;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar7,uVar3);
      *(undefined **)(puVar4 + 0x10) = puVar7;
    }
    lVar6 = 0;
    __s10Foundation3URLVMa();
    uVar5 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    local_58 = puVar4 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff));
    puStack_50 = puVar7;
    _swift_bridgeObjectRetain(param_2);
    FUN_100400470(&local_58,auStack_48,param_1,lVar2,param_2);
    _swift_bridgeObjectRelease(param_2);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease_n(param_2,2);
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004010bc);
      (*pcVar1)();
    }
    if (lVar6 == 0) {
      uVar3 = 2;
    }
    else {
      _swift_bridgeObjectRetain(param_2);
      FUN_100400d34(0,lVar6,1,param_1,param_2);
      uVar3 = 3;
    }
    _swift_bridgeObjectRelease_n(param_2,uVar3);
  }
  return;
}

