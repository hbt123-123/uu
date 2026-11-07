// rea decompile_all
// name: FUN_10004c86c
// address: 0x10004c86c
// body: available
// range: 0x10004c86c-0x10004c9e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004c9e4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004c86c(void)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_3c = 0;
  iVar2 = 0;
  _CGGetOnlineDisplayList(0,0,&local_3c);
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if ((iVar2 == 0) && (puVar7 = (undefined *)(ulong)local_3c, local_3c != 0)) {
    puVar4 = puVar7;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (puVar7,PTR___ss6UInt32VN_100995dc0);
    *(undefined **)(puVar4 + 0x10) = puVar7;
    _bzero(puVar4 + 0x20,(long)puVar7 << 2);
    uVar3 = local_3c;
    _CGGetOnlineDisplayList(local_3c,puVar4 + 0x20,&local_3c);
    if (uVar3 == 0) {
      uVar8 = *(ulong *)(puVar4 + 0x10);
      if ((ulong)local_3c <= *(ulong *)(puVar4 + 0x10)) {
        uVar8 = (ulong)local_3c;
      }
      uVar1 = 1;
      if (local_3c != 0) {
        uVar1 = uVar8 * 2 + 1;
      }
      uVar5 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar6 = puVar4;
      _swift_unknownObjectRetain_n(puVar4,2);
      _swift_dynamicCastClass();
      if (puVar6 == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar4);
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      uVar8 = *(ulong *)(puVar6 + 0x10);
      _swift_release();
      puVar6 = puVar4;
      if (uVar8 == uVar1 >> 1) {
        _swift_dynamicCastClass(puVar4,uVar5);
        _swift_unknownObjectRelease(puVar4);
        if (puVar6 == (undefined *)0x0) {
          _swift_unknownObjectRelease(puVar4);
          puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
        }
      }
      else {
        _swift_unknownObjectRelease();
        FUN_1000748c0(puVar4,puVar4 + 0x20,0,uVar1);
        _swift_unknownObjectRelease(puVar4);
      }
    }
    else {
      _swift_bridgeObjectRelease(puVar4);
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar6);
  }
  return;
}

