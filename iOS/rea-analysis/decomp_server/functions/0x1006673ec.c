// rea decompile_all
// name: FUN_1006673ec
// address: 0x1006673ec
// body: available
// range: 0x1006673ec-0x1006675fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006674dc to 0x100666a98 thunk_FUN_10066690c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006674f4 to 0x100666a98 thunk_FUN_10066690c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066750c to 0x100666868 FUN_100666868 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100667524 to 0x10066679c FUN_10066679c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066753c to 0x100666690 FUN_100666690 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100667554 to 0x100666a98 thunk_FUN_10066690c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006673ec(uint *param_1,undefined *param_2,undefined *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  if (param_3 == PTR___sSiN_100995968) {
    puVar6 = *(undefined **)param_1;
    thunk_FUN_10066690c(puVar6);
    return puVar6;
  }
  if (param_3 == PTR___sSuN_100995a50) {
    puVar6 = *(undefined **)param_1;
    thunk_FUN_10066690c(puVar6);
    return puVar6;
  }
  if (param_3 == PTR___ss5UInt8VN_100995d40) {
    puVar6 = (undefined *)(ulong)(byte)*param_1;
    FUN_100666868(puVar6);
    return puVar6;
  }
  if (param_3 == PTR___ss6UInt16VN_100995d90) {
    puVar6 = (undefined *)(ulong)(ushort)*param_1;
    FUN_10066679c(puVar6);
    return puVar6;
  }
  if (param_3 == PTR___ss6UInt32VN_100995dc0) {
    puVar6 = (undefined *)(ulong)*param_1;
    FUN_100666690(puVar6);
    return puVar6;
  }
  if (param_3 == PTR___ss6UInt64VN_100995e10) {
    puVar6 = *(undefined **)param_1;
    thunk_FUN_10066690c(puVar6);
    return puVar6;
  }
  lVar5 = 1;
  __sSp8allocate8capacitySpyxGSi_tFZ(1,param_3);
  lVar8 = *(long *)(param_3 + -8);
  (**(code **)(lVar8 + 0x18))();
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006675f8);
    (*pcVar4)();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_2 != (undefined *)0x0) {
    puVar6 = param_2;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_2,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar6 + 0x10) = param_2;
    _bzero(puVar6 + 0x20,(size_t)param_2);
  }
  puVar7 = *(undefined **)(lVar8 + 0x40);
  puVar2 = puVar7;
  if ((long)param_2 <= (long)puVar7) {
    puVar2 = param_2;
  }
  if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006675fc);
    (*pcVar4)();
  }
  if (puVar2 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      uVar3 = (long)(param_2 + -1) - (long)puVar7;
      if (SBORROW8((long)(param_2 + -1),(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006675ec);
        (*pcVar4)();
      }
      if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006675f0);
        (*pcVar4)();
      }
      if (*(ulong *)(puVar6 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006675f4);
        (*pcVar4)();
      }
      puVar1 = puVar7 + lVar5;
      puVar7 = puVar7 + 1;
      puVar6[uVar3 + 0x20] = *puVar1;
    } while (puVar2 != puVar7);
  }
  __sSp12deinitialize5countSvSi_tF(1,lVar5,param_3);
  __sSp10deallocateyyF(lVar5,param_3);
  return puVar6;
}

