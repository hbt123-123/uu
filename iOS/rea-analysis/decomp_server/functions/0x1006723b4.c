// rea decompile_all
// name: FUN_1006723b4
// address: 0x1006723b4
// body: available
// range: 0x1006723b4-0x1006724fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_1006723b4(undefined *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006724f8);
    (*pcVar2)();
  }
  puVar3 = param_1;
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 != (undefined *)0x0) {
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_1,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = param_1;
    puVar5 = puVar3;
  }
  FUN_100671e78();
  param_5 = param_5 >> 1;
  uVar1 = param_5 - param_4;
  if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006724fc);
    (*pcVar2)();
  }
  if ((long)uVar1 < 1) {
    _swift_bridgeObjectRelease();
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    do {
      if (uVar4 == 0x10) {
        _swift_bridgeObjectRelease();
        FUN_100671e78();
        if (((long)uVar6 < param_4) || (param_5 <= uVar6)) {
LAB_1006724ec:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006724f0);
          (*pcVar2)();
        }
        uVar4 = 0;
      }
      else if (((long)uVar6 < param_4) || (param_5 <= uVar6)) goto LAB_1006724ec;
      if (*(ulong *)(puVar3 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006724f4);
        (*pcVar2)();
      }
      puVar5[uVar6 + 0x20] = puVar3[uVar4 + 0x20] ^ *(byte *)(param_3 + uVar6);
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar6);
    _swift_bridgeObjectRelease();
  }
  if ((long)param_1 < (long)uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006724ec);
    (*pcVar2)();
  }
  *(ulong *)(puVar5 + 0x10) = uVar1;
  return puVar5;
}

